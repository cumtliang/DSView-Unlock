/*
 * This file is part of the PulseView project.
 * DSView is based on PulseView.
 * 
 * Copyright (C) 2016 DreamSourceLab <support@dreamsourcelab.com>
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

#include "spectrumtrace.h"
#include <algorithm>
#include <math.h>
#include <QTextStream>
#include <boost/functional/hash.hpp>
#include <stdlib.h>
#include "../appcore/sigsession.h"
#include "../data/dsosnapshot.h"
#include "dsosignal.h"
#include "viewport.h"
#include "../data/spectrumstack.h"
#include "../basedef.h"

using namespace boost;
using namespace std;

namespace dsv {
namespace view {

const int SpectrumTrace::UpMargin = 0;
const int SpectrumTrace::DownMargin = 0;
const int SpectrumTrace::RightMargin = 30;
const QString SpectrumTrace::FFT_ViewMode[2] = {
    "Linear RMS",
    "DBV RMS"
};

const QString SpectrumTrace::FreqPrefixes[9] =
    {"", "", "", "", "K", "M", "G", "T", "P"};
const int SpectrumTrace::FirstSIPrefixPower = -9;
const int SpectrumTrace::LastSIPrefixPower = 15;
const int SpectrumTrace::Pricision = 2;
const int SpectrumTrace::FreqMinorDivNum = 10;
const int SpectrumTrace::TickHeight = 15;
const int SpectrumTrace::VolDivNum = 5;

const int SpectrumTrace::DbvRanges[4] = {
    100,
    120,
    150,
    200,
};

const int SpectrumTrace::HoverPointSize = 3;
const double SpectrumTrace::VerticalRate = 1.0 / 2000.0;

SpectrumTrace::SpectrumTrace(SigSession *session,
    SpectrumStack *spectrum_stack, int index) :
    Trace("FFT("+QString::number(index)+")", index, SR_CHANNEL_FFT),
    _session(session),
    _spectrum_stack(spectrum_stack),
    _enable(false),
    _view_mode(0),
    _hover_en(false),
    _scale(1),
    _offset(0)
{
    _typeWidth = 0;

    for(auto s : _session->get_signals()) {
        if (s->signal_type() == SR_CHANNEL_DSO && index == s->get_index()){
            _colour = s->get_colour();
        }
    }
}

SpectrumTrace::~SpectrumTrace()
{
    DESTROY_OBJECT(_spectrum_stack);
}

bool SpectrumTrace::enabled()
{
    return _enable;
}

void SpectrumTrace::set_enable(bool enable)
{
    _enable = enable;
}

int SpectrumTrace::view_mode()
{
    return _view_mode;
}

void SpectrumTrace::set_view_mode(unsigned int mode)
{
    assert(mode < sizeof(FFT_ViewMode)/sizeof(FFT_ViewMode[0]));
    _view_mode = mode;
}

std::vector<QString> SpectrumTrace::get_view_modes_support()
{
    std::vector<QString> modes;
    for (unsigned int i = 0; i < sizeof(FFT_ViewMode)/sizeof(FFT_ViewMode[0]); i++) {
        modes.push_back(FFT_ViewMode[i]);
    }
    return modes;
}

void SpectrumTrace::init_zoom()
{
    _scale = 1;
    _offset = 0;
}

void SpectrumTrace::zoom(double steps, int offset)
{
    if (!_view)
        return;

    const int width = get_view_rect().width();
    double pre_offset = _offset + _scale*offset/width;
    _scale *= std::pow(3.0/2.0, -steps);
    _scale = max(min(_scale, 1.0), 100.0/_spectrum_stack->get_sample_num());
    _offset = pre_offset - _scale*offset/width;
    _offset = max(min(_offset, 1-_scale), 0.0);

    _view->set_update(_viewport, true);
    _view->update();
}

void SpectrumTrace::set_offset(double delta)
{
    int width = get_view_rect().width();
    _offset = _offset + (delta*_scale / width);
    _offset = max(min(_offset, 1-_scale), 0.0);

    _view->set_update(_viewport, true);
    _view->update();
}

double SpectrumTrace::get_offset()
{
    return _offset;
}

void SpectrumTrace::set_scale(double scale)
{
    _scale = max(min(scale, 1.0), 100.0/_spectrum_stack->get_sample_num());

    _view->set_update(_viewport, true);
    _view->update();
}

double SpectrumTrace::get_scale()
{
    return _scale;
}

void SpectrumTrace::set_dbv_range(int range)
{
    _dbv_range = range;
}

int SpectrumTrace::dbv_range()
{
    return _dbv_range;
}

std::vector<int> SpectrumTrace::get_dbv_ranges()
{
    std::vector<int> range;
    for (unsigned int i = 0; i < sizeof(DbvRanges)/sizeof(DbvRanges[0]); i++) {
        range.push_back(DbvRanges[i]);
    }
    return range;
}

QString SpectrumTrace::format_freq(double freq, unsigned precision)
{
    if (freq <= 0) {
        return "0Hz";
    } else {
        const int order = floor(log10f(freq));
        assert(order >= FirstSIPrefixPower);
        assert(order <= LastSIPrefixPower);
        const int prefix = floor((order - FirstSIPrefixPower)/ 3.0f);
        const double divider = pow(10.0, max(prefix * 3.0 + FirstSIPrefixPower, 0.0));

        /*
        QString s;
        QTextStream ts(&s);
        ts.setRealNumberPrecision(precision);
        ts << fixed << freq / divider << FreqPrefixes[prefix] << "Hz";
        return s;
        */

        char buffer[20] = {0};
        char format[10] = {0}; 
        QString units = FreqPrefixes[prefix] + "Hz";
        sprintf(format, "%%.%df", (int)precision);    
        sprintf(buffer, format, freq / divider);
        strcat(buffer, units.toUtf8().data());
        return QString(buffer);
    }
}

bool SpectrumTrace::measure(const QPoint &p)
{
    _hover_en = false;
    if(!_view || !enabled())
        return false;

    const QRect window = get_view_rect();
    if (!window.contains(p))
        return false;

    const std::vector<double> samples(_spectrum_stack->get_fft_spectrum());
    if(samples.empty())
        return false;

    const unsigned int full_size = (_spectrum_stack->get_sample_num()/2);
    const double view_off = full_size * _offset;
    const double view_size = full_size*_scale;
    const double sample_per_pixels = view_size/window.width();
    _hover_index = std::round(p.x() * sample_per_pixels + view_off);

    if (_hover_index < full_size)
        _hover_en = true;

    //_view->set_update(_viewport, true);
    _view->update();
    return true;
}


void SpectrumTrace::paint_back(QPainter &p, int left, int right, QColor fore, QColor back)
{
    if(!_view)
        return;

    const int height = get_view_rect().height();
    const int width = right - left;

    fore.setAlpha(View::BackAlpha);
    QPen solidPen(fore);
    solidPen.setStyle(Qt::SolidLine);
    p.setPen(solidPen);
    p.setBrush(back.black() > 0x80 ? back.darker() : back.lighter());
    p.drawRect(left, UpMargin, width, height);
}

void SpectrumTrace::paint_mid(QPainter &p, int left, int right, QColor fore, QColor back)
{
    (void)fore;
    (void)back;

    if(!_view)
        return;
    assert(right >= left);

    if (enabled()) {
        const std::vector<double> samples(_spectrum_stack->get_fft_spectrum());
        if(samples.empty())
            return;

        QColor trace_colour = _colour;
        trace_colour.setAlpha(View::ForeAlpha);
        p.setPen(trace_colour);

        const int full_size = (_spectrum_stack->get_sample_num()/2);
        const double view_off = full_size * _offset;
        const int view_start = floor(view_off);
        const int view_size = full_size*_scale;
        QPointF *points = new QPointF[samples.size()];
        QPointF *point = points;

        const bool dc_ignored = _spectrum_stack->dc_ignored();
        const double height = get_view_rect().height();
        const double width = right - left;
        const double pixels_per_sample = width/view_size;

        double vdiv = 0;
        double vfactor = 0;
        
        for(auto s : _session->get_signals()) {
            if (s->signal_type() == SR_CHANNEL_DSO) {
                view::DsoSignal *dsoSig = (view::DsoSignal*)s;
                if(dsoSig->get_index() == _spectrum_stack->get_index()) {
                    vdiv = dsoSig->get_vDialValue();
                    vfactor = dsoSig->get_factor();
                    break;
                }
            }
        }
        if (_view_mode == 0) {
            _vmin = 0;
            _vmax = (vdiv*DS_CONF_DSO_HDIVS*vfactor)*VerticalRate;
        } else {
            _vmax = 20*log10((vdiv*DS_CONF_DSO_HDIVS*vfactor)*VerticalRate);
            _vmin = _vmax - _dbv_range;
        }

        const double scale = height / (_vmax - _vmin);

        double x = (view_start-view_off)*pixels_per_sample;
        uint64_t sample = view_start;
        if (dc_ignored && sample == 0) {
            sample++;
            x += pixels_per_sample;
        }
        double min_mag = pow(10.0, _vmin/20);
        do{
            double mag = samples[sample];
            if (_view_mode != 0) {
                if (mag < min_mag)
                    mag = _vmin;
                else
                    mag = 20*log10(mag);
            }
            const double y = height - (scale * (mag - _vmin));
            *point++ = QPointF(x, y);
            x += pixels_per_sample;
            sample++;
        }while(x<right && sample < samples.size());

        p.drawPolyline(points, point - points);
        delete[] points;
    }
}

void SpectrumTrace::paint_fore(QPainter &p, int left, int right, QColor fore, QColor back)
{
    using namespace Qt;

    (void)back;

    if(!_view)
        return;
    assert(right >= left);

    (void)left;
    (void)right;
    const int text_height = p.boundingRect(0, 0, INT_MAX, INT_MAX,
        AlignLeft | AlignTop, "8").height();
    const double width = get_view_rect().width();
    const double height = get_view_rect().height();
    double blank_top = 0;
    double blank_right = width;

    // horizontal ruler
    const double NyFreq = _session->cur_snap_samplerate() / (2.0 * _spectrum_stack->get_sample_interval());
    const double deltaFreq = _session->cur_snap_samplerate() * 1.0 /
                            (_spectrum_stack->get_sample_num() * _spectrum_stack->get_sample_interval());
    const double FreqRange = NyFreq * _scale;
    const double FreqOffset = NyFreq * _offset;

    const int order = (int)floor(log10(FreqRange));
    const double multiplier = (pow(10.0, order) == FreqRange) ? FreqRange/10 : pow(10.0, order);
    const double freq_per_pixel = FreqRange / width;

    p.setPen(fore);
    p.setBrush(Qt::NoBrush);
    double tick_freq = multiplier * (int)floor(FreqOffset / multiplier);
    int division = (int)round(tick_freq * FreqMinorDivNum / multiplier);
    double x = (tick_freq - FreqOffset) / freq_per_pixel;
    do{
        if (division%FreqMinorDivNum == 0) {
            QString freq_str = format_freq(tick_freq);
            double typical_width = p.boundingRect(0, 0, INT_MAX, INT_MAX,
                AlignLeft | AlignTop, freq_str).width() + 10;
            p.drawLine(x, 1, x, TickHeight);
            if (x > typical_width/2 && (width-x) > typical_width/2)
                p.drawText(x-typical_width/2, TickHeight, typical_width, text_height,
                           AlignCenter | AlignTop | TextDontClip, freq_str);
        } else {
                p.drawLine(x, 1, x, TickHeight/2);
        }
        tick_freq += multiplier/FreqMinorDivNum;
        division++;
        x =  (tick_freq - FreqOffset) / freq_per_pixel;
    } while(x < width);
    blank_top = max(blank_top, (double)TickHeight + text_height);

    // delta Frequency
    QString freq_str =  QString::fromWCharArray(L" \u0394") + "Freq: " + format_freq(deltaFreq,4);
    p.drawText(0, 0, width, get_view_rect().height(),
               AlignRight | AlignBottom | TextDontClip, freq_str);
    double delta_left = width-p.boundingRect(0, 0, INT_MAX, INT_MAX,
                                             AlignLeft | AlignTop, freq_str).width();
    blank_right = min(delta_left, blank_right);

    // Vertical ruler
    const double vRange = _vmax - _vmin;
    const double vOffset = _vmin;
    const double vol_per_tick = vRange / VolDivNum;

    p.setPen(fore);
    p.setBrush(Qt::NoBrush);
    double tick_vol = vol_per_tick + vOffset;
    double y = height - height / VolDivNum;
    const QString unit = (_view_mode == 0) ? "" : "dbv";
    do{
        if (y > text_height && y < (height - text_height)) {
            QString vol_str = QString::number(tick_vol, 'f', Pricision) + unit;
            double vol_width = p.boundingRect(0, 0, INT_MAX, INT_MAX,
                AlignLeft | AlignTop, vol_str).width();
            p.drawLine(width, y, width-TickHeight/2, y);
            p.drawText(width-TickHeight-vol_width, y-text_height/2, vol_width, text_height,
                       AlignCenter | AlignTop | TextDontClip, vol_str);
            blank_right = min(width-TickHeight-vol_width, blank_right);
        }
        tick_vol += vol_per_tick;
        y -=  height / VolDivNum;
    } while(y > 0);

    // Hover measure
    if (_hover_en) {
        const std::vector<double> samples(_spectrum_stack->get_fft_spectrum());
        if(samples.empty())
            return;
        const int full_size = (_spectrum_stack->get_sample_num()/2);
        const double view_off = full_size * _offset;
        const int view_size = full_size*_scale;
        const double scale = height / (_vmax - _vmin);
        const double pixels_per_sample = width/view_size;
        double x = (_hover_index-view_off)*pixels_per_sample;
        double min_mag = pow(10.0, _vmin/20);
        _hover_value = samples[_hover_index];
        if (_view_mode != 0) {
            if (_hover_value < min_mag)
                _hover_value = _vmin;
            else
                _hover_value = 20*log10(_hover_value);
        }
        const double y = height - (scale * (_hover_value - _vmin));
        _hover_point = QPointF(x, y);

        p.setPen(QPen(fore, 1, Qt::DashLine));
        p.setBrush(Qt::NoBrush);
        p.drawLine(_hover_point.x(), 0, _hover_point.x(), height);

        QString hover_str = QString::number(_hover_value, 'f', 4) + unit + "@" + format_freq(deltaFreq * _hover_index, 4);
        const int hover_width = p.boundingRect(0, 0, INT_MAX, INT_MAX,
            AlignLeft | AlignTop, hover_str).width();
        const int hover_height = p.boundingRect(0, 0, INT_MAX, INT_MAX,
            AlignLeft | AlignTop, hover_str).height();
        QRectF hover_rect(_hover_point.x(), _hover_point.y()-hover_height, hover_width, hover_height);
        if (hover_rect.right() > blank_right)
            hover_rect.moveRight(min(_hover_point.x(), blank_right));
        if (hover_rect.top() < blank_top)
            hover_rect.moveTop(max(_hover_point.y(), blank_top));
        if (hover_rect.top() > 0)
            p.drawText(hover_rect, AlignCenter | AlignTop | TextDontClip, hover_str);

        p.setPen(Qt::NoPen);
        p.setBrush(fore);
        p.drawEllipse(_hover_point, HoverPointSize, HoverPointSize);
    }
}

void SpectrumTrace::paint_type_options(QPainter &p, int right, const QPoint pt, QColor fore)
{
    (void)p;
    (void)pt;
    (void)right;
    (void)fore;
}

QRect SpectrumTrace::get_view_rect()
{
    assert(_viewport);
    return QRect(0, UpMargin,
                  _viewport->width() - RightMargin,
                  _viewport->height() - UpMargin - DownMargin);
}

} // namespace view
} // namespace dsv
