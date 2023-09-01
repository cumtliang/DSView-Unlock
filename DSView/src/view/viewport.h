/*
 * This file is part of the DSView project.
 * DSView is based on PulseView.
 *
 * Copyright (C) 2012 Joel Holdsworth <joel@airwebreathe.org.uk>
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


#ifndef DSVIEW_PV_VIEW_VIEWPORT_H
#define DSVIEW_PV_VIEW_VIEWPORT_H

#include <stdint.h>
#include <QTime>
#include <QTimer>
#include <QWidget>
#include <QNativeGestureEvent>
#include <QElapsedTimer>
#include <chrono>
#include "view.h"
#include "../basedef.h"
#include "../interface/icallbacks.h"

class QPainter;
class QPaintEvent;
class QAction;

using std::chrono::high_resolution_clock;
using std::chrono::milliseconds;

namespace dsv{
	namespace appcore{
    	class SigSession; 
	}
}
using namespace dsv::appcore;

namespace dsv {
namespace view {

class Signal;
class View;

//main graph view port, in the middle region
//draw the left and right rule scale
//created by View
class Viewport : public QWidget, public IFontForm
{
	Q_OBJECT

public:
    static const int HitCursorMargin = 10;
    static const double HitCursorTimeMargin;
    static const int DragTimerInterval = 100;
    static const int MinorDragOffsetUp = 100;
    static const int DsoMeasureStages = 3;
    static const double MinorDragRateUp;
    static const double DragDamping;
    static const int SnapMinSpace = 10;
    static const int WaitLoopTime = 400;
    enum ActionType {
        NO_ACTION,

        CURS_MOVE,

        LOGIC_EDGE,
        LOGIC_MOVE,
        LOGIC_ZOOM,
        LOGIC_JUMP,

        DSO_XM_STEP0,
        DSO_XM_STEP1,
        DSO_XM_STEP2,
        DSO_YM,
        DSO_TRIG_MOVE
    };

    enum MeasureType {
        NO_MEASURE,
        LOGIC_FREQ,
        LOGIC_EDGE_CNT,
        DSO_VALUE
    };

public:
    explicit Viewport(View &parent, View_type type);

    int get_total_height();
    QPoint get_mouse_point();
    QString get_measure(QString option);
    void set_measure_en(int enable);   
    void stop_trigger_timer();

    void clear_measure();
    void clear_dso_xm();
    void set_need_update(bool update);
    bool get_dso_trig_moved();
    void set_receive_len(quint64 length);
    void unshow_wait_trigger();
    void show_wait_trigger();

    void update_lang();

    //IFontForm
    void update_font() override;

protected:
    bool event(QEvent *event) override;
    void paintEvent(QPaintEvent *event) override;

private:
    void doPaint();
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;
    void leaveEvent(QEvent *) override;
    void resizeEvent(QResizeEvent *e) override;
    bool gestureEvent(QNativeGestureEvent *event);

    void paintSignals(QPainter& p, QColor fore, QColor back);
    void paintProgress(QPainter& p, QColor fore, QColor back);
    void paintMeasure(QPainter &p, QColor fore, QColor back);
    void paintCursors(QPainter &p);

    void measure();
    void start_trigger_timer(int msec);

    void get_captured_progress(double &progress, int &progress100);

private slots:
    void on_trigger_timer();
    void on_drag_timer();
  
    void show_contextmenu(const QPoint& pos);
    void add_cursor_x();
    void add_cursor_y();

signals:
    void measure_updated();
    void prgRate(int progress);

private:
	View        &_view;
    View_type   _type;
    bool        _need_update;
    QPixmap     _pixmap;
    QMenu       *_cmenu;

    uint64_t    _sample_received;
    QPoint      _mouse_point;
    QPoint      _mouse_down_point;
    int64_t     _mouse_down_offset;
    double      _curScale;
    int64_t     _curOffset;
    int         _curSignalHeight;

    bool        _measure_en;
    ActionType  _action_type;
    MeasureType _measure_type;
    uint64_t    _cur_sample;
    uint64_t    _nxt_sample;
    uint64_t    _thd_sample;
    int64_t     _cur_preX;
    int64_t     _cur_aftX;
    int64_t     _cur_thdX;
    int         _cur_midY;
    int         _cur_preY;
    int         _cur_preY_top;
    int         _cur_preY_bottom;
    int         _cur_aftY;
    bool        _edge_hit;
    QString     _mm_width;
    QString     _mm_period;
    QString     _mm_freq;
    QString     _mm_duty;

    uint64_t    _edge_rising;
    uint64_t    _edge_falling;
    uint64_t    _edge_start;
    uint64_t    _edge_end;
    QString     _em_rising;
    QString     _em_falling;
    QString     _em_edges;

    QTimer      _trigger_timer;
    bool        _is_checked_trig;
    bool        _transfer_started;
    int         _timer_cnt;
    Signal      *_drag_sig;
    uint64_t    _hover_index;
    bool        _hover_hit;
    uint16_t    _hover_sig_index;
    double      _hover_sig_value;

    QElapsedTimer   _elapsed_time;
    QTimer          _drag_timer;
    int             _drag_strength;
    bool            _dso_xm_valid;
    int             _dso_xm_y;
    uint64_t        _dso_xm_index[DsoMeasureStages];

    bool            _dso_ym_valid;
    uint16_t        _dso_ym_sig_index;
    double          _dso_ym_sig_value;
    uint64_t        _dso_ym_index;
    int             _dso_ym_start;
    int             _dso_ym_end;
    int             _waiting_trig;
    bool            _dso_trig_moved;
    bool            _curs_moved;
    bool            _xcurs_moved;
    int             _clickX;

    high_resolution_clock::time_point _lst_wait_tigger_time;
    int             _tigger_wait_times;
    QAction         *_yAction;
    QAction         *_xAction;
};

} // namespace view
} // namespace dsv

#endif // DSVIEW_PV_VIEW_VIEWPORT_H
