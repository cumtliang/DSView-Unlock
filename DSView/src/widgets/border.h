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

#ifndef DSVIEW_PV_WIDGETS_BORDER_H
#define DSVIEW_PV_WIDGETS_BORDER_H

#include <QWidget>

namespace dsv {
namespace widgets {

class Border : public QWidget
{
    Q_OBJECT
private:
    static const QColor dark_border0;
    static const QColor dark_border1;
    static const QColor dark_border2;
    static const QColor dark_border3;
    static const QColor dark_border4;

    static const QColor light_border0;
    static const QColor light_border1;
    static const QColor light_border2;
    static const QColor light_border3;
    static const QColor light_border4;

public:
    explicit Border(int type, QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *);
    void leaveEvent(QEvent *);

private:
    int _type;
};

} // namespace widgets
} // namespace dsv

#endif // DSVIEW_PV_WIDGETS_BORDER_H
