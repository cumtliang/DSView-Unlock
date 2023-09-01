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


#ifndef DSVIEW_PV_MAINFRAME_H
#define DSVIEW_PV_MAINFRAME_H

#include <QFrame>
#include <QGridLayout>
#include <QTimer>

#ifdef _WIN32
#include <QWinTaskbarButton>
#include <QWinTaskbarProgress>
#endif

#include "../widgets/border.h"

namespace dsv {

namespace toolbars {
    class TitleBar;
}

namespace dialogs {
    class DSMessageBox;
    class DSDialog;
}

namespace appcore {
 
class MainWindow;

class MainFrame : public QFrame
{
    Q_OBJECT

public:
    static const int Margin = 5;

    enum borderTypes{
        None,
        TopLeft,
        Left,
        BottomLeft,
        Bottom,
        BottomRight,
        Right,
        TopRight,
        Top
    }borderTypes;

public:
    MainFrame();

    void readSettings();

protected: 
    void resizeEvent(QResizeEvent *event);
    void closeEvent(QCloseEvent *event);
    bool eventFilter(QObject *object, QEvent *event);
    #ifdef _WIN32
    void showEvent(QShowEvent *event);
    #endif

public slots:
    void unfreezing();
    void showNormal();
    void showMaximized();
    void showMinimized();
    void show_doc();
    void setTaskbarProgress(int progress);

private:
    void hide_border();
    void show_border();
    void writeSettings();
    void saveWindowRegion();

private:
    toolbars::TitleBar *_titleBar;
    MainWindow *_mainWindow;

    QGridLayout *_layout;
    widgets::Border *_left;
    widgets::Border *_right;
    widgets::Border *_top;
    widgets::Border *_bottom;
    widgets::Border *_top_left;
    widgets::Border *_top_right;
    widgets::Border *_bottom_left;
    widgets::Border *_bottom_right;
 
    bool    _bDraging; 
    QRect   _dragStartGeometry;
    int     _hit_border;
    QTimer  _timer;
    bool    _freezing; 
    // Taskbar Progress Effert for Win7 and Above
#ifdef _WIN32
    QWinTaskbarButton *_taskBtn;
    QWinTaskbarProgress *_taskPrg;
#endif
};

} //namespace com
} //namespace appcore

#endif // DSVIEW_PV_MAINFRAME_H
