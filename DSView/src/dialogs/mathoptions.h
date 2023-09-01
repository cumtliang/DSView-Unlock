/*
 * This file is part of the DSView project.
 * DSView is based on PulseView.
 *
 * Copyright (C) 2015 DreamSourceLab <support@dreamsourcelab.com>
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


#ifndef DSVIEW_PV_MATHOPTIONS_H
#define DSVIEW_PV_MATHOPTIONS_H

#include <QGridLayout>
#include <QToolButton>
#include <QDialogButtonBox>
#include <QTabWidget>
#include <QGroupBox>
#include <QCheckBox>
#include <QRadioButton>
#include <QSlider>
 

#include "../view/dsosignal.h"
#include "../toolbars/titlebar.h"
#include "dsdialog.h"

namespace dsv{
	namespace appcore{
    	class SigSession; 
	}
    namespace view {
        class View;
    }
}
using namespace dsv::appcore;
using namespace dsv::view;

namespace dsv {
namespace dialogs {

class MathOptions : public DSDialog
{
	Q_OBJECT

private:
    static const int WellLen = SR_Kn(16);

public:
    MathOptions(SigSession *session, QWidget *parent);

private:
    void changeEvent(QEvent *event);
    void retranslateUi();

protected:
	void accept();
    void reject();

private:
    SigSession *_session;

    QCheckBox *_enable;
    QGroupBox *_src1_group;
    QGroupBox *_src2_group;
    QGroupBox *_math_group;
    QVector<QRadioButton *> _src1_radio;
    QVector<QRadioButton *> _src2_radio;
    QVector<QRadioButton *> _math_radio;
    QDialogButtonBox _button_box;
    QGridLayout *_layout;
};

} // namespace dialogs
} // namespace dsv

#endif // DSVIEW_PV_MATHOPTIONS_H
