/*
 * This file is part of the DSView project.
 * DSView is based on PulseView.
 *
 * Copyright (C) 2013 DreamSourceLab <support@dreamsourcelab.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#include "samplingbar.h"
#include <assert.h>
#include <QAction>
#include <QLabel>
#include <QAbstractItemView>
#include <math.h>
#include <libusb-1.0/libusb.h>
#include "../dialogs/deviceoptions.h"
#include "../dialogs/waitingdialog.h"
#include "../dialogs/dsmessagebox.h"
#include "../view/dsosignal.h"
#include "../dialogs/interval.h"
#include "../config/appconfig.h"
#include "../basedef.h"
#include "../log.h"
#include "../appcore/deviceagent.h"
#include "../ui/msgbox.h"
#include "../ui/langresource.h"
#include "../view/view.h"
#include "../ui/fn.h"
#include "../appcore/sigsession.h"

#define SINGLE_ACTION_ICON  "/once.svg"
#define REPEAT_ACTION_ICON  "/repeat.svg"
#define LOOP_ACTION_ICON  "/loop.svg"

using std::map;
using std::max;
using std::min;
using std::string;
using namespace dsv::config;

namespace dsv
{
    namespace toolbars
    {

        const QString SamplingBar::RLEString = "(RLE)";
        const QString SamplingBar::DIVString = " / div";

        SamplingBar::SamplingBar(SigSession* session, QWidget* parent) : QToolBar("Sampling Bar", parent),
            _device_type(this),
            _device_selector(this),
            _configure_button(this),
            _sample_count(this),
            _sample_rate(this),
            _run_stop_button(this),
            _instant_button(this),
            _mode_button(this)
        {


            // 定义显示的文本和实际的值

            QStringList displayValues = { "2M", "4M", "6M", "8M", "10M", "12M", "14M", "16M", "18M", "20M", "22M", "24M", "26M", "28M", "30M", "32M","34M","36M","38M","40M","42M","44M","46M","48M","50M","52M","54M","56M","58M","60M","62M","64M" };
            QList<int> actualValues = { 2000000, 4000000, 6000000, 8000000, 10000000, 12000000, 14000000, 16000000, 18000000, 20000000, 22000000, 24000000, 26000000, 28000000, 30000000, 32000000,34000000,36000000,38000000,40000000,42000000,44000000,46000000,48000000,50000000,52000000,54000000,56000000,58000000,60000000,62000000,64000000 };

            for (int i = 0; i < displayValues.size(); i++) {
                _sample_limit_combobox.addItem(displayValues[i], actualValues[i]);
            }

            _sample_limit_combobox.setCurrentIndex(5);

            //_waveform_history_combobox.addItem("000000000000", 0);
            //为下拉框添加从0到10000的值，并使每个数字都格式化为9位，前面用零填充。
            for (int i = 0; i <= 10000; ++i) {
                QString formattedNumber = QString("%1").arg(i, 9, 10, QChar('0'));
                _waveform_history_combobox.addItem(formattedNumber, i);
            }
            _waveform_history_combobox.setCurrentIndex(0);
            ///////////////////////////////////////////////////////////////////////


            _updating_device_list = false;
            _updating_sample_rate = false;
            _updating_sample_count = false;
            _is_run_as_instant = false;

            _last_device_handle = NULL_HANDLE;
            _last_device_index = -1;
            _next_switch_device = NULL_HANDLE;
            _view = NULL;

            _session = session;
            _device_agent = _session->get_device();

            setMovable(false);
            setContentsMargins(0, 0, 0, 0);
            layout()->setSpacing(0);

            _mode_button.setPopupMode(QToolButton::InstantPopup);

            _device_selector.setSizeAdjustPolicy(DsComboBox::AdjustToContents);
            _sample_rate.setSizeAdjustPolicy(DsComboBox::AdjustToContents);
            _sample_count.setSizeAdjustPolicy(DsComboBox::AdjustToContents);
            _device_selector.setMaximumWidth(ComboBoxMaxWidth);

            //tr
            _run_stop_button.setObjectName("run_stop_button");

            QWidget* leftMargin = new QWidget(this);
            leftMargin->setFixedWidth(4);
            addWidget(leftMargin);

            _device_type.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
            addWidget(&_device_type);
            addWidget(&_device_selector);
            _configure_button.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
            addWidget(&_configure_button);


            addWidget(new QLabel(" Time: "));
            addWidget(&_sample_count);
            //tr
            addWidget(new QLabel(" Sample Rate: "));
            addWidget(&_sample_rate);


            ///////////////////////////////
            addWidget(new QLabel(" Realtime Memery: "));
            addWidget(&_sample_limit_combobox);
            addWidget(new QLabel(" Waveforms: "));
            addWidget(&_waveform_history_combobox);
            ///////////////////////////////

            _action_single = new QAction(this);
            _action_repeat = new QAction(this);
            _action_loop = new QAction(this);

            _mode_menu = new QMenu(this);
            _mode_menu->addAction(_action_single);
            _mode_menu->addAction(_action_repeat);
            _mode_menu->addAction(_action_loop);
            _mode_button.setMenu(_mode_menu);

            _mode_button.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
            _mode_action = addWidget(&_mode_button);

            _run_stop_button.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
            _run_stop_action = addWidget(&_run_stop_button);
            _instant_button.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
            _instant_action = addWidget(&_instant_button);

            update_view_status();
            update_font();

            connect(&_device_selector, SIGNAL(currentIndexChanged(int)), this, SLOT(on_device_selected()));
            connect(&_configure_button, SIGNAL(clicked()), this, SLOT(on_configure()));
            connect(&_run_stop_button, SIGNAL(clicked()), this, SLOT(on_run_stop()));
            connect(&_instant_button, SIGNAL(clicked()), this, SLOT(on_instant_stop()));
            connect(&_sample_count, SIGNAL(currentIndexChanged(int)), this, SLOT(on_samplecount_sel(int)));
            connect(_action_single, SIGNAL(triggered()), this, SLOT(on_collect_mode()));
            connect(_action_repeat, SIGNAL(triggered()), this, SLOT(on_collect_mode()));
            connect(_action_loop, SIGNAL(triggered()), this, SLOT(on_collect_mode()));
            connect(&_sample_rate, SIGNAL(currentIndexChanged(int)), this, SLOT(on_samplerate_sel(int)));

            connect(&_sample_limit_combobox, SIGNAL(currentIndexChanged(int)), this, SLOT(on_sample_limit_changed()));

        }

        void SamplingBar::changeEvent(QEvent* event)
        {
            if (event->type() == QEvent::LanguageChange)
                retranslateUi();
            else if (event->type() == QEvent::StyleChange)
                reStyle();
            QToolBar::changeEvent(event);
        }

        void SamplingBar::retranslateUi()
        {
            bool bDev = _device_agent->have_instance();

            if (bDev)
            {
                if (_device_agent->is_demo())
                {
                    _device_type.setText(L_S(STR_PAGE_TOOLBAR, S_ID(IDS_TOOLBAR_DEVICE_TYPE_DEMO), "Demo"));
                }
                else if (_device_agent->is_file())
                {
                    _device_type.setText(L_S(STR_PAGE_TOOLBAR, S_ID(IDS_TOOLBAR_DEVICE_TYPE_FILE), "File"));
                }
                else
                {
                    int usb_speed = LIBUSB_SPEED_HIGH;
                    _device_agent->get_config_int32(SR_CONF_USB_SPEED, usb_speed);

                    if (usb_speed == LIBUSB_SPEED_HIGH)
                        _device_type.setText("USB 2.0");
                    else if (usb_speed == LIBUSB_SPEED_SUPER)
                        _device_type.setText("USB 3.0");
                    else
                        _device_type.setText("USB UNKNOWN");
                }
            }
            _configure_button.setText(L_S(STR_PAGE_TOOLBAR, S_ID(IDS_TOOLBAR_DEVICE_OPTION), "Options"));
            _mode_button.setText(L_S(STR_PAGE_TOOLBAR, S_ID(IDS_TOOLBAR_CAPTURE_MODE), "Mode"));

            int mode = _device_agent->get_work_mode();
            bool is_working = _session->is_working();

            auto str_start = L_S(STR_PAGE_TOOLBAR, S_ID(IDS_TOOLBAR_RUN_START), "Start");
            auto str_stop = L_S(STR_PAGE_TOOLBAR, S_ID(IDS_TOOLBAR_RUN_STOP), "Stop");
            auto str_single = L_S(STR_PAGE_TOOLBAR, S_ID(IDS_TOOLBAR_ONE_SINGLE), "Single");
            auto str_instant = L_S(STR_PAGE_TOOLBAR, S_ID(IDS_TOOLBAR_ONE_INSTANT), "Instant");
            auto str_one_stop = L_S(STR_PAGE_TOOLBAR, S_ID(IDS_TOOLBAR_ONE_STOP), "Stop");

            if (_is_run_as_instant)
            {
                if (bDev && mode == DSO)
                    _instant_button.setText(is_working ? str_one_stop : str_single);
                else
                    _instant_button.setText(is_working ? str_one_stop : str_instant);

                _run_stop_button.setText(str_start);
            }
            else
            {
                _run_stop_button.setText(is_working ? str_stop : str_start);

                if (bDev && mode == DSO)
                    _instant_button.setText(str_single);
                else
                    _instant_button.setText(str_instant);
            }

            _action_single->setText(L_S(STR_PAGE_TOOLBAR, S_ID(IDS_TOOLBAR_CAPTURE_MODE_SINGLE), "&Single"));
            _action_repeat->setText(L_S(STR_PAGE_TOOLBAR, S_ID(IDS_TOOLBAR_CAPTURE_MODE_REPEAT), "&Repetitive"));
            _action_loop->setText(L_S(STR_PAGE_TOOLBAR, S_ID(IDS_TOOLBAR_CAPTURE_MODE_LOOP), "&Loop"));
        }

        void SamplingBar::reStyle()
        {
            bool bDev = _device_agent->have_instance();

            if (bDev)
            {
                if (_device_agent->is_demo())
                    _device_type.setIcon(QIcon(":/icons/demo.svg"));
                else if (_device_agent->is_file())
                    _device_type.setIcon(QIcon(":/icons/data.svg"));
                else
                {
                    int usb_speed = LIBUSB_SPEED_HIGH;
                    _device_agent->get_config_int32(SR_CONF_USB_SPEED, usb_speed);

                    if (usb_speed == LIBUSB_SPEED_SUPER)
                        _device_type.setIcon(QIcon(":/icons/usb3.svg"));
                    else
                        _device_type.setIcon(QIcon(":/icons/usb2.svg"));
                }
            }

            if (true)
            {
                QString iconPath = AppConfig::GetIconPath();
                _configure_button.setIcon(QIcon(iconPath + "/params.svg"));

                QString icon2 = _session->is_working() ? "stop.svg" : "start.svg";
                _run_stop_button.setIcon(QIcon(iconPath + "/" + icon2));
                _instant_button.setIcon(QIcon(iconPath + "/single.svg"));

                _action_single->setIcon(QIcon(iconPath + SINGLE_ACTION_ICON));
                _action_repeat->setIcon(QIcon(iconPath + REPEAT_ACTION_ICON));
                _action_loop->setIcon(QIcon(iconPath + LOOP_ACTION_ICON));

                update_mode_icon();
            }
        }

        void SamplingBar::on_configure()
        {
            int ret;

            if (_device_agent->have_instance() == false)
            {
                dsv_info("Have no device, can't to set device config.");
                return;
            }

            _session->broadcast_msg(DSV_MSG_BEGIN_DEVICE_OPTIONS);

            dsv::dialogs::DeviceOptions dlg(this);
            connect(_session->device_event_object(), SIGNAL(device_updated()), &dlg, SLOT(reject()));

            ret = dlg.exec();

            if (ret == QDialog::Accepted)
            {
                if (_session->have_view_data() == false)
                    this->commit_settings();

                _session->broadcast_msg(DSV_MSG_DEVICE_OPTIONS_UPDATED);

                update_sample_rate_list();

                int mode = _device_agent->get_work_mode();
                bool zero = false;
                bool test;
                bool ret;

                if (mode == DSO)
                {

                    _device_agent->get_config_bool(SR_CONF_ZERO, zero);

                    if (zero)
                    {
                        zero_adj();
                        return;
                    }
                }

                ret = _device_agent->get_config_bool(SR_CONF_TEST, test);
                if (ret)
                {
                    if (test)
                    {
                        update_sample_rate_selector_value();
                        _sample_count.setDisabled(true);
                        _sample_rate.setDisabled(true);
                    }
                    else
                    {
                        _sample_count.setDisabled(false);
                        if (mode != DSO)
                            _sample_rate.setDisabled(false);
                    }
                }

                this->reload();
            }

            _session->broadcast_msg(DSV_MSG_END_DEVICE_OPTIONS);
        }

        void SamplingBar::zero_adj()
        {
            for (auto s : _session->get_signals())
            {
                if (s->signal_type() == SR_CHANNEL_DSO) {
                    view::DsoSignal* dsoSig = (view::DsoSignal*)s;
                    dsoSig->set_enable(true);
                }
            }

            const int index_back = _sample_count.currentIndex();
            int i = 0;

            for (i = 0; i < _sample_count.count(); i++) {
                if (_sample_count.itemData(i).value<uint64_t>() == ZeroTimeBase)
                    break;
            }

            _sample_count.setCurrentIndex(i);
            commit_hori_res();

            if (_session->is_working() == false)
                _session->start_capture(false);

            dsv::dialogs::WaitingDialog wait(this, _session, SR_CONF_ZERO);
            if (wait.start() == QDialog::Rejected)
            {
                for (auto s : _session->get_signals())
                {
                    if (s->signal_type() == SR_CHANNEL_DSO) {
                        view::DsoSignal* dsoSig = (view::DsoSignal*)s;
                        dsoSig->commit_settings();
                    }
                }
            }

            if (_session->is_working())
                _session->stop_capture();

            _sample_count.setCurrentIndex(index_back);
            commit_hori_res();
        }

        void SamplingBar::set_sample_rate(uint64_t sample_rate)
        {
            for (int i = _sample_rate.count() - 1; i >= 0; i--)
            {
                uint64_t cur_index_sample_rate = _sample_rate.itemData(
                    i)
                    .value<uint64_t>();
                if (sample_rate >= cur_index_sample_rate)
                {
                    _sample_rate.setCurrentIndex(i);
                    break;
                }
            }
            commit_settings();
        }

        void SamplingBar::update_sample_rate_selector()
        {
            GVariant* gvar_dict, * gvar_list;
            const uint64_t* elements = NULL;
            gsize num_elements;

            dsv_info("update_sample_rate_selector() said: Update rate list.");

            if (_updating_sample_rate)
            {
                dsv_err("Error! The rate list is updating.");
                return;
            }

            disconnect(&_sample_rate, SIGNAL(currentIndexChanged(int)),
                this, SLOT(on_samplerate_sel(int)));

            if (_device_agent->have_instance() == false)
            {
                dsv_info("SamplingBar::update_sample_rate_selector, have no device.");
                return;
            }

            _updating_sample_rate = true;

            gvar_dict = _device_agent->get_config_list(NULL, SR_CONF_SAMPLERATE);
            if (gvar_dict == NULL)
            {
                _sample_rate.clear();
                _sample_rate.show();
                _updating_sample_rate = false;
                return;
            }

            if ((gvar_list = g_variant_lookup_value(gvar_dict,
                "samplerates", G_VARIANT_TYPE("at"))))
            {
                elements = (const uint64_t*)g_variant_get_fixed_array(
                    gvar_list, &num_elements, sizeof(uint64_t));
                _sample_rate.clear();

                // === START OF ADDED CODE ===
                // 获取最大的采样率
                uint64_t max_sample_rate = _device_agent->get_sample_rate();

                std::string rate_str = "_device_agent->get_sample_rate(): " + std::to_string(max_sample_rate);
                dsv_info("%s", rate_str.c_str());

                std::string elements_str = "elements[num_elements-1]: " + std::to_string(elements[num_elements - 1]);
                dsv_info("%s", elements_str.c_str());  // always = 1Ghz, 1000000000

                for (unsigned int i = 0; i < num_elements; i++)
                {
                    // 只添加不超过最大采样率的值
                    if ((elements[i]) <= max_sample_rate || 1)
                    {
                        char* const s = sr_samplerate_string(elements[i]); //sr_samplerate_string函数可能来自Sigrok库，该库用于信号分析。这个函数可能会将采样率（以Hz或每秒样本数给出）转换为人类可读的字符串格式。例如，它可能会将1000000转换为"1 MHz"。
                        _sample_rate.addItem(QString(s), QVariant::fromValue(elements[i]));
                        g_free(s); //释放了sr_samplerate_string动态分配的内存。在Sigrok库和基于GLib的其他库中，使用g_free来释放内存，而不是标准的C free函数。
                    }
                    elements_str = "elements[i]: " + std::to_string(elements[i]);
                    dsv_info("%s", elements_str.c_str());
                }
                // === END OF ADDED CODE ===
                /*
                for (unsigned int i = 0; i < num_elements; i++)
                {
                    char* const s = sr_samplerate_string(elements[i]);
                    _sample_rate.addItem(QString(s),
                        QVariant::fromValue(elements[i]));
                    g_free(s);
                }
                */
                _sample_rate.show();
                g_variant_unref(gvar_list);
            }

            _sample_rate.setMinimumWidth(_sample_rate.sizeHint().width() + 15);
            _sample_rate.view()->setMinimumWidth(_sample_rate.sizeHint().width() + 30);

            _updating_sample_rate = false;
            g_variant_unref(gvar_dict);

            update_sample_rate_selector_value();

            connect(&_sample_rate, SIGNAL(currentIndexChanged(int)),
                this, SLOT(on_samplerate_sel(int)));

            update_sample_count_selector();
        }

        void SamplingBar::update_sample_rate_selector_value()
        {
            if (_updating_sample_rate)
                return;
            _updating_sample_rate = true;

            const uint64_t samplerate = _device_agent->get_sample_rate();
            uint64_t cur_value = _sample_rate.itemData(_sample_rate.currentIndex()).value<uint64_t>();

            if (samplerate != cur_value)
            {
                for (int i = _sample_rate.count() - 1; i >= 0; i--)
                {
                    if (samplerate >= _sample_rate.itemData(i).value<uint64_t>())
                    {
                        _sample_rate.setCurrentIndex(i);
                        break;
                    }
                }
            }

            _updating_sample_rate = false;
        }

        void SamplingBar::on_samplerate_sel(int index)
        {
            (void)index;
            if (_device_agent->get_work_mode() != DSO)  //edit by Richard
                update_sample_count_selector();

            ///////////////////////////////////////////////////////////
            if (_device_agent->get_work_mode() == DSO)
            {
                const uint64_t samplerate = _sample_rate.itemData(
                    _sample_rate.currentIndex())
                    .value<uint64_t>();
                set_sample_rate(samplerate);  // add by Richard           
            }

            //////////////////////////////////////////////////////////
        }



        void SamplingBar::on_sample_limit_changed()
        {


            if (_device_agent->get_work_mode() == DSO)
            {

                on_run_stop();
                //_device_agent->set_config_uint64(SR_CONF_LIMIT_SAMPLES, _sample_limit_combobox.currentData().toInt());
                //on_run_stop();
            }
            else
            {

            }

        }


        void SamplingBar::update_sample_count_selector()
        {
            bool stream_mode = false;
            uint64_t hw_depth = 0;
            uint64_t sw_depth;
            uint64_t rle_depth = 0;
            uint64_t max_timebase = 0;
            uint64_t min_timebase = SR_NS(10);
            double pre_duration = SR_SEC(1);
            double duration;
            bool rle_support = false;

            dsv_info("Update sample count list.");

            if (_updating_sample_count)
            {
                dsv_err("Error! The sample count is updating.");
                return;
            }

            disconnect(&_sample_count, SIGNAL(currentIndexChanged(int)),
                this, SLOT(on_samplecount_sel(int)));

            assert(!_updating_sample_count);
            _updating_sample_count = true;

            _device_agent->get_config_bool(SR_CONF_STREAM, stream_mode);
            _device_agent->get_config_uint64(SR_CONF_HW_DEPTH, hw_depth);
            int mode = _device_agent->get_work_mode();

            if (mode == LOGIC)
            {
#if defined(__x86_64__) || defined(_M_X64)
                sw_depth = LogicMaxSWDepth64;
#elif defined(__i386) || defined(_M_IX86)
                int ch_num = _session->get_ch_num(SR_CHANNEL_LOGIC);
                if (ch_num <= 0)
                    sw_depth = LogicMaxSWDepth32;
                else
                    sw_depth = LogicMaxSWDepth32 / ch_num;
#endif
            }
            else
            {
                sw_depth = AnalogMaxSWDepth;
            }

            if (mode == LOGIC)
            {
                _device_agent->get_config_bool(SR_CONF_RLE_SUPPORT, rle_support);
                if (rle_support)
                    rle_depth = min(hw_depth * SR_KB(1), sw_depth);
            }
            else if (mode == DSO)
            {
                _device_agent->get_config_uint64(SR_CONF_MAX_TIMEBASE, max_timebase);
                _device_agent->get_config_uint64(SR_CONF_MIN_TIMEBASE, min_timebase);
            }

            if (0 != _sample_count.count())
                pre_duration = _sample_count.itemData(
                    _sample_count.currentIndex())
                .value<double>();
            _sample_count.clear();
            const uint64_t samplerate = _sample_rate.itemData(
                _sample_rate.currentIndex())
                .value<uint64_t>();


            const double hw_duration = hw_depth / (samplerate * (1.0 / SR_SEC(1)));

            if (mode == DSO)
                duration = max_timebase;
            else if (stream_mode)
                duration = sw_depth / (samplerate * (1.0 / SR_SEC(1)));
            else if (rle_support)
                duration = rle_depth / (samplerate * (1.0 / SR_SEC(1)));
            else
                duration = hw_duration;

            assert(duration > 0);
            bool not_last = true;

            do
            {
                QString suffix = (mode == DSO) ? DIVString : (!stream_mode && duration > hw_duration) ? RLEString
                    : "";
                char* const s = sr_time_string(duration);
                _sample_count.addItem(QString(s) + suffix, QVariant::fromValue(duration));
                g_free(s);

                double unit;
                if (duration >= SR_DAY(1))
                    unit = SR_DAY(1);
                else if (duration >= SR_HOUR(1))
                    unit = SR_HOUR(1);
                else if (duration >= SR_MIN(1))
                    unit = SR_MIN(1);
                else
                    unit = 1;

                const double log10_duration = pow(10, floor(log10(duration / unit)));

                if (duration > 5 * log10_duration * unit)
                    duration = 5 * log10_duration * unit;
                else if (duration > 2 * log10_duration * unit)
                    duration = 2 * log10_duration * unit;
                else if (duration > log10_duration * unit)
                    duration = log10_duration * unit;
                else
                    duration = log10_duration > 1 ? duration * 0.5 : (unit == SR_DAY(1) ? SR_HOUR(20) : unit == SR_HOUR(1) ? SR_MIN(50)
                        : unit == SR_MIN(1) ? SR_SEC(50)
                        : duration * 0.5);

                if (mode == DSO)
                    not_last = duration >= min_timebase;
                else if (mode == ANALOG)
                    not_last = (duration >= SR_MS(100)) &&
                    (duration / SR_SEC(1) * samplerate >= SR_KB(1));
                else
                    not_last = (duration / SR_SEC(1) * samplerate >= SR_KB(1));

            } while (not_last);

            _updating_sample_count = true;

            if (pre_duration > _sample_count.itemData(0).value<double>())
            {
                _sample_count.setCurrentIndex(0);
            }
            else if (pre_duration < _sample_count.itemData(_sample_count.count() - 1).value<double>())
            {
                _sample_count.setCurrentIndex(_sample_count.count() - 1);
            }
            else
            {
                for (int i = 0; i < _sample_count.count(); i++)
                {
                    double sel_val = _sample_count.itemData(i).value<double>();
                    if (pre_duration >= sel_val)
                    {
                        _sample_count.setCurrentIndex(i);
                        break;
                    }
                }
            }
            _updating_sample_count = false;

            update_sample_count_selector_value();
            on_samplecount_sel(_sample_count.currentIndex());

            connect(&_sample_count, SIGNAL(currentIndexChanged(int)), this, SLOT(on_samplecount_sel(int)));
        }

        void SamplingBar::update_sample_count_selector_value()
        {
            if (_updating_sample_count)
                return;

            double duration;
            uint64_t v;

            if (_device_agent->get_work_mode() == DSO)
            {
                if (_device_agent->get_config_uint64(SR_CONF_TIMEBASE, v))
                {
                    duration = (double)v;
                }
                else
                {
                    dsv_err("ERROR: config_get SR_CONF_TIMEBASE failed.");
                    return;
                }
            }
            else
            {
                if (_device_agent->get_config_uint64(SR_CONF_LIMIT_SAMPLES, v))
                {
                    duration = (double)v;
                }
                else
                {
                    dsv_err("ERROR: config_get SR_CONF_TIMEBASE failed.");
                    return;
                }
                const uint64_t samplerate = _device_agent->get_sample_rate();
                duration = duration / samplerate * SR_SEC(1);
            }
            assert(!_updating_sample_count);
            _updating_sample_count = true;

            double cur_duration = _sample_count.itemData(_sample_count.currentIndex()).value<double>();
            if (duration != cur_duration)
            {
                for (int i = 0; i < _sample_count.count(); i++)
                {
                    double sel_val = _sample_count.itemData(i).value<double>();
                    if (duration >= sel_val)
                    {
                        _sample_count.setCurrentIndex(i);
                        break;
                    }
                }
            }

            _updating_sample_count = false;
        }

        void SamplingBar::on_samplecount_sel(int index)
        {
            (void)index;

            if (_device_agent->get_work_mode() == DSO)
                commit_hori_res();
            _session->broadcast_msg(DSV_MSG_DEVICE_DURATION_UPDATED);
        }

        double SamplingBar::get_hori_res()
        {
            return _sample_count.itemData(_sample_count.currentIndex()).value<double>();
        }

        double SamplingBar::hori_knob(int dir)
        {
            double hori_res = -1;

            disconnect(&_sample_count, SIGNAL(currentIndexChanged(int)), this, SLOT(on_samplecount_sel(int)));

            if (0 == dir)
            {
                hori_res = commit_hori_res();
            }
            else if ((dir > 0) && (_sample_count.currentIndex() > 0))
            {
                _sample_count.setCurrentIndex(_sample_count.currentIndex() - 1);
                hori_res = commit_hori_res();
            }
            else if ((dir < 0) && (_sample_count.currentIndex() < _sample_count.count() - 1))
            {
                _sample_count.setCurrentIndex(_sample_count.currentIndex() + 1);
                hori_res = commit_hori_res();
            }

            connect(&_sample_count, SIGNAL(currentIndexChanged(int)),
                this, SLOT(on_samplecount_sel(int)));

            return hori_res;
        }

        double SamplingBar::commit_hori_res()
        {

            if (_device_agent->get_sample_limit() < 32000000 * 3)
            {
                //change max samples limit, from 2MB to 16MB or more, like 32M,64M
                //_device_agent->set_config_uint64(SR_CONF_LIMIT_SAMPLES, 2400000);
                _device_agent->set_config_uint64(SR_CONF_LIMIT_SAMPLES, _sample_limit_combobox.currentData().toInt());
            }

            const double hori_res = _sample_count.itemData(
                _sample_count.currentIndex())
                .value<double>();

            const uint64_t sample_limit = _device_agent->get_sample_limit();

            dsv_info("commit_hori_res()-samples-limit: %s", std::to_string(sample_limit).c_str());

            uint64_t max_sample_rate;

            if (_device_agent->get_config_uint64(SR_CONF_MAX_DSO_SAMPLERATE, max_sample_rate) == false)
            {
                dsv_err("ERROR: config_get SR_CONF_MAX_DSO_SAMPLERATE failed.");
                return -1;
            }

            const uint64_t sample_rate = min((uint64_t)(sample_limit * SR_SEC(1) /
                (hori_res * DS_CONF_DSO_HDIVS)),
                (uint64_t)(max_sample_rate /
                    (_session->get_ch_num(SR_CHANNEL_DSO) ? _session->get_ch_num(SR_CHANNEL_DSO) : 1)));

            dsv_info("commit_hori_res() max_sample_rate: %s", std::to_string(max_sample_rate).c_str());

            ///////////////////////
            std::string rate_str = "commit_hori_res() sample rate: " + std::to_string(sample_rate);
            dsv_info("%s", rate_str.c_str());

            /////////////////////////
            GVariant* gvar_dict, * gvar_list;
            const uint64_t* elements = NULL;
            gsize num_elements;
            gvar_dict = _device_agent->get_config_list(NULL, SR_CONF_SAMPLERATE);
            if ((gvar_list = g_variant_lookup_value(gvar_dict,
                "samplerates", G_VARIANT_TYPE("at"))))
            {
                elements = (const uint64_t*)g_variant_get_fixed_array(
                    gvar_list, &num_elements, sizeof(uint64_t));
            }

            ///////////////////////////////////////////////////////////////////////////
            if (sample_limit <= 32000000 * 3)
            {
                //modify the sample_rate list upto the sample_rate

                _sample_rate.clear();

                for (unsigned int i = 0; i < num_elements; i++)
                {
                    // 只添加不超过最大采样率的值
                    if ((elements[i]) <= sample_rate)
                    {
                        char* const s = sr_samplerate_string(elements[i]); //sr_samplerate_string函数可能来自Sigrok库，该库用于信号分析。这个函数可能会将采样率（以Hz或每秒样本数给出）转换为人类可读的字符串格式。例如，它可能会将1000000转换为"1 MHz"。
                        _sample_rate.addItem(QString(s), QVariant::fromValue(elements[i]));
                        g_free(s); //释放了sr_samplerate_string动态分配的内存。在Sigrok库和基于GLib的其他库中，使用g_free来释放内存，而不是标准的C free函数。
                    }
                }
                _sample_rate.show();
                g_variant_unref(gvar_list);
                g_variant_unref(gvar_dict);

            }

            if (sample_limit > 32000000 * 3)
            {
                // 获取_sample_rate中的所有元素的数据值
                QList<quint64> existingSampleRates;
                for (int i = 0; i < _sample_rate.count(); i++)
                {
                    existingSampleRates.append(_sample_rate.itemData(i).toULongLong());
                }

                // 遍历elements数组，检查每个元素是否已经存在于_sample_rate中
                for (unsigned int i = 0; i < num_elements; i++)
                {
                    if (!existingSampleRates.contains(elements[i]))
                    {
                        // 如果elements[i]不在_sample_rate中，将其添加到_sample_rate中
                        char* const s = sr_samplerate_string(elements[i]);
                        _sample_rate.addItem(QString(s), QVariant::fromValue(elements[i]));
                        g_free(s);
                    }
                }
            }
            else
            {
                set_sample_rate(sample_rate);
            }

            //change max samples limit, from 2MB to 16MB or more, like 32M,64M
            //_device_agent->set_config_uint64(SR_CONF_LIMIT_SAMPLES, 8000000);


            std::string hori_str = "commit_hori_res() timebase, hori_res: " + std::to_string(hori_res);
            dsv_info("%s", hori_str.c_str());
            ///////////////////////

            _device_agent->set_config_uint64(SR_CONF_TIMEBASE, hori_res);

            return hori_res;
        }

        void SamplingBar::commit_settings()
        {
            bool test = false;
            if (_device_agent->have_instance())
            {
                _device_agent->get_config_bool(SR_CONF_TEST, test);
            }

            if (test)
            {
                update_sample_rate_selector_value();
                update_sample_count_selector_value();
            }
            else
            {
                const double sample_duration = _sample_count.itemData(
                    _sample_count.currentIndex())
                    .value<double>();
                const uint64_t sample_rate = _sample_rate.itemData(
                    _sample_rate.currentIndex())
                    .value<uint64_t>();

                if (_device_agent->have_instance())
                {
                    if (sample_rate != _device_agent->get_sample_rate())
                        _device_agent->set_config_uint64(
                            SR_CONF_SAMPLERATE,
                            sample_rate);

                    if (_device_agent->get_work_mode() != DSO)
                    {

                        _sample_limit_combobox.setEnabled(false);
                        _waveform_history_combobox.setEnabled(false);

                        const uint64_t sample_count = ((uint64_t)ceil(sample_duration / SR_SEC(1) *
                            sample_rate) +
                            SAMPLES_ALIGN) &
                            ~SAMPLES_ALIGN;

                        dsv_info("commit_settings()中计算的sample_count: %s", std::to_string(sample_count).c_str());

                        if (sample_count != _device_agent->get_sample_limit())
                            _device_agent->set_config_uint64(
                                SR_CONF_LIMIT_SAMPLES,
                                sample_count);

                        dsv_info("commit_settings()中设置samples-limit之后，再次读取: %s", std::to_string(_device_agent->get_sample_limit()).c_str());

                        bool rle_mode = _sample_count.currentText().contains(RLEString);
                        _device_agent->set_config_bool(
                            SR_CONF_RLE,
                            rle_mode);
                    }
                }
            }
        }

        void SamplingBar::on_run_stop()
        {
            _run_stop_button.setEnabled(false);

            QTimer::singleShot(10, this, &SamplingBar::on_run_stop_action);
        }

        void SamplingBar::on_run_stop_action()
        {
            action_run_stop();
            _run_stop_button.setEnabled(true);
        }

        // start or stop capture
        bool SamplingBar::action_run_stop()
        {
            if (_session->is_doing_action()) {
                dsv_info("Task is busy.");
                return false;
            }

            if (_session->is_working()) {
                return _session->stop_capture();
            }

            if (_device_agent->have_instance() == false)
            {
                dsv_info("Have no device, can't to collect data.");
                return false;
            }

            commit_settings();

            if (_device_agent->get_work_mode() == DSO)
            {
                bool zero;

                bool ret = _device_agent->get_config_bool(SR_CONF_ZERO, zero);
                if (ret && zero)
                {
                    QString str1(L_S(STR_PAGE_MSG, S_ID(IDS_MSG_AUTO_CALIB), "Auto Calibration"));
                    QString str2(L_S(STR_PAGE_MSG, S_ID(IDS_MSG_ADJUST_SAVE), "Please adjust zero skew and save the result"));
                    bool bRet = MsgBox::Confirm(str1, str2);

                    if (bRet)
                    {
                        zero_adj();
                    }
                    else
                    {
                        _device_agent->set_config_bool(SR_CONF_ZERO, false);
                        update_view_status();
                    }
                    return false;
                }
            }

            if (_device_agent->get_work_mode() == LOGIC && _view != NULL) {
                if (_session->is_realtime_refresh())
                    _view->auto_set_max_scale();
            }

            _is_run_as_instant = false;

            bool ret = _session->start_capture(false);

            _sample_limit_combobox.setEnabled(true);
            _waveform_history_combobox.setEnabled(true);

            return ret;
        }

        void SamplingBar::on_instant_stop()
        {
            if (_instant_action->isVisible() == false) {
                return;
            }
            _instant_button.setEnabled(false);
            QTimer::singleShot(10, this, &SamplingBar::on_instant_stop_action);
        }

        void SamplingBar::on_instant_stop_action()
        {
            action_instant_stop();
            _instant_button.setEnabled(true);
        }

        bool SamplingBar::action_instant_stop()
        {
            if (_session->is_doing_action()) {
                dsv_info("Task is busy.");
                return false;
            }

            if (_session->is_working()) {
                return _session->stop_capture();
            }

            if (_device_agent->have_instance() == false)
            {
                dsv_info("Error! Have no device, can't to collect data.");
                return false;
            }

            dsv_info("单次采样按钮被点击");
            ////////////?????????//////////////
            commit_settings();
            /*
            const uint64_t samplerate = _sample_rate.itemData(
                _sample_rate.currentIndex())
                .value<uint64_t>();
            set_sample_rate(samplerate);  // add by Richard
            */
            if (_device_agent->get_work_mode() == DSO)
            {
                bool zero;

                bool ret = _device_agent->get_config_bool(SR_CONF_ZERO, zero);
                if (ret && zero)
                {
                    QString strMsg(L_S(STR_PAGE_MSG, S_ID(IDS_MSG_AUTO_CALIB_START), "Auto Calibration program will be started. Don't connect any probes. \nIt can take a while!"));

                    if (MsgBox::Confirm(strMsg))
                    {
                        zero_adj();
                    }
                    else
                    {
                        _device_agent->set_config_bool(SR_CONF_ZERO, false);
                        update_view_status();
                    }
                    return false;
                }
            }

            if (_device_agent->get_work_mode() == LOGIC && _session->is_realtime_refresh()) {
                if (_view != NULL)
                    _view->auto_set_max_scale();
            }

            _is_run_as_instant = true;

            const uint64_t samplerate = _sample_rate.itemData(
                _sample_rate.currentIndex())
                .value<uint64_t>();
            dsv_info("开始采集之前的 sample rate: %s", std::to_string(samplerate).c_str());


            bool ret = _session->start_capture(true);

            return ret;
        }

        void SamplingBar::on_device_selected()
        {
            if (_updating_device_list)
            {
                return;
            }
            if (_device_selector.currentIndex() == -1)
            {
                dsv_err("Have no selected device.");
                return;
            }
            _session->stop_capture();
            _session->session_save();

            ds_device_handle devHandle = (ds_device_handle)_device_selector.currentData().toULongLong();
            if (_session->have_hardware_data() && _session->is_first_store_confirm()) {
                if (MsgBox::Confirm(L_S(STR_PAGE_MSG, S_ID(IDS_MSG_SAVE_CAPDATE), "Save captured data?")))
                {
                    _updating_device_list = true;
                    _device_selector.setCurrentIndex(_last_device_index);
                    _updating_device_list = false;
                    _next_switch_device = devHandle; // Save end, auto switch to this device.
                    sig_store_session_data();
                    return;
                }
            }

            if (_session->set_device(devHandle)) {
                _last_device_index = _device_selector.currentIndex();
            }
            else {
                update_device_list(); // Reload the list.
            }
        }

        void SamplingBar::enable_toggle(bool enable)
        {
            bool test = false;

            if (_device_agent->have_instance())
            {
                _device_agent->get_config_bool(SR_CONF_TEST, test);
            }
            if (!test)
            {
                _sample_count.setDisabled(!enable);

                if (_device_agent->get_work_mode() == DSO)
                    _sample_rate.setDisabled(true);
                else
                    _sample_rate.setDisabled(!enable);
            }
            else
            {
                _sample_count.setDisabled(true);
                _sample_rate.setDisabled(true);
            }
        }

        void SamplingBar::reload()
        {
            QString iconPath = AppConfig::GetIconPath();

            _action_loop->setVisible(false);

            int mode = _device_agent->get_work_mode();
            if (mode == LOGIC)
            {
                if (_device_agent->is_file()) {
                    _mode_action->setVisible(false);
                }
                else
                {
                    update_mode_icon();
                    _mode_action->setVisible(true);
                    _action_repeat->setVisible(true);

                    if (_session->is_loop_mode() && _device_agent->is_stream_mode() == false
                        && _device_agent->is_hardware()) {
                        _session->set_collect_mode(COLLECT_SINGLE);
                    }

                    if (_device_agent->is_stream_mode() || _device_agent->is_demo())
                        _action_loop->setVisible(true);
                }
                _run_stop_action->setVisible(true);
                _instant_action->setVisible(true);
            }
            else if (mode == ANALOG)
            {
                _mode_action->setVisible(false);
                _run_stop_action->setVisible(true);
                _instant_action->setVisible(false);
            }
            else if (mode == DSO)
            {
                _mode_action->setVisible(false);
                _run_stop_action->setVisible(true);
                _instant_action->setVisible(true);
            }

            retranslateUi();
            reStyle();
            update();
        }

        void SamplingBar::on_collect_mode()
        {
            QString iconPath = AppConfig::GetIconPath();
            QAction* act = qobject_cast<QAction*>(sender());

            if (act == _action_single)
            {
                _session->set_collect_mode(COLLECT_SINGLE);

                if (_device_agent->is_demo()) {
                    _device_agent->set_config_string(SR_CONF_PATTERN_MODE, "protocol");
                    _session->broadcast_msg(DSV_MSG_DEMO_OPERATION_MODE_CHNAGED);
                }
            }
            else if (act == _action_repeat)
            {
                if (_device_agent->is_stream_mode() || _device_agent->is_demo())
                {
                    _session->set_repeat_intvl(0.1);
                    _session->set_collect_mode(COLLECT_REPEAT);
                }
                else {
                    dsv::dialogs::Interval interval_dlg(this);

                    interval_dlg.set_interval(_session->get_repeat_intvl());
                    interval_dlg.exec();

                    if (interval_dlg.is_done())
                    {
                        _session->set_repeat_intvl(interval_dlg.get_interval());
                        _session->set_collect_mode(COLLECT_REPEAT);

                    }
                }

                if (_device_agent->is_demo()) {
                    _device_agent->set_config_string(SR_CONF_PATTERN_MODE, "random");
                    _session->broadcast_msg(DSV_MSG_DEMO_OPERATION_MODE_CHNAGED);
                }
            }
            else if (act == _action_loop)
            {
                _session->set_collect_mode(COLLECT_LOOP);

                if (_device_agent->is_demo()) {
                    _device_agent->set_config_string(SR_CONF_PATTERN_MODE, "random");
                    _session->broadcast_msg(DSV_MSG_DEMO_OPERATION_MODE_CHNAGED);
                }
            }

            update_mode_icon();
        }

        void SamplingBar::update_device_list()
        {
            struct ds_device_base_info* array = NULL;
            int dev_count = 0;
            int select_index = 0;

            dsv_info("Update device list.");

            array = _session->get_device_list(dev_count, select_index);

            if (array == NULL)
            {
                dsv_err("Get deivce list error!");
                return;
            }

            _updating_device_list = true;
            struct ds_device_base_info* p = NULL;
            ds_device_handle    cur_dev_handle = NULL_HANDLE;

            _device_selector.clear();

            for (int i = 0; i < dev_count; i++)
            {
                p = (array + i);
                _device_selector.addItem(QString(p->name), QVariant::fromValue((unsigned long long)p->handle));

                if (i == select_index)
                    cur_dev_handle = p->handle;
            }
            free(array);

            _device_selector.setCurrentIndex(select_index);

            if (cur_dev_handle != _last_device_handle) {
                update_sample_rate_list();
                _last_device_handle = cur_dev_handle;
            }

            _last_device_index = select_index;
            int width = _device_selector.sizeHint().width();
            _device_selector.setFixedWidth(min(width + 15, _device_selector.maximumWidth()));
            _device_selector.view()->setMinimumWidth(width + 30);

            _updating_device_list = false;
        }

        void SamplingBar::config_device()
        {
            if (_configure_button.isVisible() && _configure_button.isEnabled()) {
                on_configure();
            }
        }

        void SamplingBar::update_view_status()
        {
            int bEnable = _session->is_working() == false;
            int mode = _session->get_device()->get_work_mode();

            _device_type.setEnabled(bEnable);
            _mode_button.setEnabled(bEnable);
            _configure_button.setEnabled(bEnable);
            _device_selector.setEnabled(bEnable);
            _action_loop->setVisible(false);

            //_sample_limit_combobox.setEnabled(false);  //changed to disable at form load

            if (_session->get_device()->is_file()) {
                _sample_rate.setEnabled(false);
                _sample_count.setEnabled(false);
            }
            else if (mode == DSO) {
                _sample_rate.setEnabled(true); //changed to enable by richard
                _sample_count.setEnabled(bEnable);

                if (_session->is_working() && _session->is_instant() == false)
                {
                    _sample_count.setEnabled(true);

                    _sample_limit_combobox.setEnabled(false);
                    _waveform_history_combobox.setEnabled(false);
                }
            }
            else {
                _sample_rate.setEnabled(bEnable);
                _sample_count.setEnabled(bEnable);

                if (mode == LOGIC && _session->get_device()->is_hardware())
                {
                    int mode_val = 0;
                    if (_session->get_device()->get_config_int16(SR_CONF_OPERATION_MODE, mode_val)) {
                        if (mode_val == LO_OP_INTEST) {
                            _sample_rate.setEnabled(false);
                            _sample_count.setEnabled(false);
                        }
                    }
                }

                if (mode == LOGIC && _device_agent->is_file() == false) {
                    if (_device_agent->is_stream_mode() || _device_agent->is_demo())
                        _action_loop->setVisible(true);
                }
            }

            if (_session->is_working()) {
                if (_is_run_as_instant)
                    _run_stop_button.setEnabled(false);
                else
                    _instant_button.setEnabled(false);
            }
            else {
                _run_stop_button.setEnabled(true);
                _instant_button.setEnabled(true);
            }

            QString iconPath = AppConfig::GetIconPath();

            if (_is_run_as_instant)
                _instant_button.setIcon(!bEnable ? QIcon(iconPath + "/stop.svg") : QIcon(iconPath + "/single.svg"));
            else
                _run_stop_button.setIcon(!bEnable ? QIcon(iconPath + "/stop.svg") : QIcon(iconPath + "/start.svg"));

            retranslateUi();

            if (bEnable) {
                _is_run_as_instant = false;
            }

            update_mode_icon();

            if (_session->get_device()->is_demo() && bEnable)
            {
                QString opt_mode = _device_agent->get_demo_operation_mode();

                if (opt_mode != "random" && mode == LOGIC) {
                    _sample_rate.setEnabled(false);
                    _sample_count.setEnabled(false);
                }
            }
        }

        ds_device_handle SamplingBar::get_next_device_handle()
        {
            ds_device_handle h = _next_switch_device;
            _next_switch_device = NULL_HANDLE;
            return h;
        }

        void SamplingBar::update_mode_icon()
        {
            QString iconPath = AppConfig::GetIconPath();

            if (_session->is_repeat_mode())
                _mode_button.setIcon(QIcon(iconPath + REPEAT_ACTION_ICON));
            else if (_session->is_loop_mode())
                _mode_button.setIcon(QIcon(iconPath + LOOP_ACTION_ICON));
            else
                _mode_button.setIcon(QIcon(iconPath + SINGLE_ACTION_ICON));
        }


        void SamplingBar::run_or_stop()
        {
            on_run_stop();
        }

        void SamplingBar::run_or_stop_instant()
        {
            on_instant_stop();
        }

        void SamplingBar::update_font()
        {
            QFont font = this->font();
            font.setPointSizeF(AppConfig::Instance().appOptions.fontSize);
            ui::set_toolbar_font(this, font);
        }

    } // namespace toolbars
} // namespace dsv
