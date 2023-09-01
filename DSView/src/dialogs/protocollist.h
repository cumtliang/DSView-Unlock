/*
 * This file is part of the DSView project.
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


#ifndef DSVIEW_PV_PROTOCOLLIST_H
#define DSVIEW_PV_PROTOCOLLIST_H

#include <QDialogButtonBox>
#include <QFormLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QCheckBox> 
#include "../prop/binding/deviceoptions.h"
#include "../toolbars/titlebar.h"
#include "dsdialog.h"
#include "../ui/dscombobox.h"

namespace dsv{
	namespace appcore{
    	class SigSession; 
	}
}
using namespace dsv::appcore;

namespace dsv {
namespace dialogs {

class ProtocolList : public DSDialog
{
    Q_OBJECT

public:
    ProtocolList(QWidget *parent, SigSession *session);

protected:
    void accept();
    void reject();

private slots:
    void set_protocol(int index);
    void on_row_check(bool show);
    void on_set_map_zoom(int index);

private:
    SigSession *_session;

    toolbars::TitleBar *_titlebar;
    DsComboBox *_map_zoom_combobox;
    DsComboBox *_protocol_combobox;
    std::list<QCheckBox *> _show_checkbox_list;
    std::list<QLabel *> _show_label_list;
    QFormLayout *_flayout;
    QVBoxLayout *_layout;
    QDialogButtonBox _button_box;

};

} // namespace dialogs
} // namespace dsv

#endif // DSVIEW_PV_PROTOCOLLIST_H
