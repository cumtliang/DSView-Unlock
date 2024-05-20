/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/view/view.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewENDCLASS = QtMocHelpers::stringData(
    "dsv::view::View",
    "hover_point_changed",
    "",
    "cursor_update",
    "xcursor_update",
    "cursor_moving",
    "cursor_moved",
    "measure_updated",
    "prgRate",
    "progress",
    "resize",
    "auto_trig",
    "index",
    "reload",
    "set_measure_en",
    "enable",
    "data_updated",
    "update_scale_offset",
    "show_region",
    "uint64_t",
    "start",
    "end",
    "keep",
    "hide_calibration",
    "status_clear",
    "repeat_unshow",
    "repeat_show",
    "timebase_changed",
    "vDial_updated",
    "update_hori_res",
    "header_updated",
    "receive_trigger",
    "trig_pos",
    "receive_end",
    "frame_began",
    "mode_changed",
    "h_scroll_value_changed",
    "value",
    "v_scroll_value_changed",
    "marker_time_changed",
    "on_traces_moved",
    "set_trig_pos",
    "percent",
    "show_calibration",
    "show_lissajous",
    "show",
    "on_measure_updated",
    "splitterMoved",
    "pos"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewENDCLASS_t {
    uint offsetsAndSizes[98];
    char stringdata0[16];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[15];
    char stringdata5[14];
    char stringdata6[13];
    char stringdata7[16];
    char stringdata8[8];
    char stringdata9[9];
    char stringdata10[7];
    char stringdata11[10];
    char stringdata12[6];
    char stringdata13[7];
    char stringdata14[15];
    char stringdata15[7];
    char stringdata16[13];
    char stringdata17[20];
    char stringdata18[12];
    char stringdata19[9];
    char stringdata20[6];
    char stringdata21[4];
    char stringdata22[5];
    char stringdata23[17];
    char stringdata24[13];
    char stringdata25[14];
    char stringdata26[12];
    char stringdata27[17];
    char stringdata28[14];
    char stringdata29[16];
    char stringdata30[15];
    char stringdata31[16];
    char stringdata32[9];
    char stringdata33[12];
    char stringdata34[12];
    char stringdata35[13];
    char stringdata36[23];
    char stringdata37[6];
    char stringdata38[23];
    char stringdata39[20];
    char stringdata40[16];
    char stringdata41[13];
    char stringdata42[8];
    char stringdata43[17];
    char stringdata44[15];
    char stringdata45[5];
    char stringdata46[19];
    char stringdata47[14];
    char stringdata48[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "dsv::view::View"
        QT_MOC_LITERAL(16, 19),  // "hover_point_changed"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 13),  // "cursor_update"
        QT_MOC_LITERAL(51, 14),  // "xcursor_update"
        QT_MOC_LITERAL(66, 13),  // "cursor_moving"
        QT_MOC_LITERAL(80, 12),  // "cursor_moved"
        QT_MOC_LITERAL(93, 15),  // "measure_updated"
        QT_MOC_LITERAL(109, 7),  // "prgRate"
        QT_MOC_LITERAL(117, 8),  // "progress"
        QT_MOC_LITERAL(126, 6),  // "resize"
        QT_MOC_LITERAL(133, 9),  // "auto_trig"
        QT_MOC_LITERAL(143, 5),  // "index"
        QT_MOC_LITERAL(149, 6),  // "reload"
        QT_MOC_LITERAL(156, 14),  // "set_measure_en"
        QT_MOC_LITERAL(171, 6),  // "enable"
        QT_MOC_LITERAL(178, 12),  // "data_updated"
        QT_MOC_LITERAL(191, 19),  // "update_scale_offset"
        QT_MOC_LITERAL(211, 11),  // "show_region"
        QT_MOC_LITERAL(223, 8),  // "uint64_t"
        QT_MOC_LITERAL(232, 5),  // "start"
        QT_MOC_LITERAL(238, 3),  // "end"
        QT_MOC_LITERAL(242, 4),  // "keep"
        QT_MOC_LITERAL(247, 16),  // "hide_calibration"
        QT_MOC_LITERAL(264, 12),  // "status_clear"
        QT_MOC_LITERAL(277, 13),  // "repeat_unshow"
        QT_MOC_LITERAL(291, 11),  // "repeat_show"
        QT_MOC_LITERAL(303, 16),  // "timebase_changed"
        QT_MOC_LITERAL(320, 13),  // "vDial_updated"
        QT_MOC_LITERAL(334, 15),  // "update_hori_res"
        QT_MOC_LITERAL(350, 14),  // "header_updated"
        QT_MOC_LITERAL(365, 15),  // "receive_trigger"
        QT_MOC_LITERAL(381, 8),  // "trig_pos"
        QT_MOC_LITERAL(390, 11),  // "receive_end"
        QT_MOC_LITERAL(402, 11),  // "frame_began"
        QT_MOC_LITERAL(414, 12),  // "mode_changed"
        QT_MOC_LITERAL(427, 22),  // "h_scroll_value_changed"
        QT_MOC_LITERAL(450, 5),  // "value"
        QT_MOC_LITERAL(456, 22),  // "v_scroll_value_changed"
        QT_MOC_LITERAL(479, 19),  // "marker_time_changed"
        QT_MOC_LITERAL(499, 15),  // "on_traces_moved"
        QT_MOC_LITERAL(515, 12),  // "set_trig_pos"
        QT_MOC_LITERAL(528, 7),  // "percent"
        QT_MOC_LITERAL(536, 16),  // "show_calibration"
        QT_MOC_LITERAL(553, 14),  // "show_lissajous"
        QT_MOC_LITERAL(568, 4),  // "show"
        QT_MOC_LITERAL(573, 18),  // "on_measure_updated"
        QT_MOC_LITERAL(592, 13),  // "splitterMoved"
        QT_MOC_LITERAL(606, 3)   // "pos"
    },
    "dsv::view::View",
    "hover_point_changed",
    "",
    "cursor_update",
    "xcursor_update",
    "cursor_moving",
    "cursor_moved",
    "measure_updated",
    "prgRate",
    "progress",
    "resize",
    "auto_trig",
    "index",
    "reload",
    "set_measure_en",
    "enable",
    "data_updated",
    "update_scale_offset",
    "show_region",
    "uint64_t",
    "start",
    "end",
    "keep",
    "hide_calibration",
    "status_clear",
    "repeat_unshow",
    "repeat_show",
    "timebase_changed",
    "vDial_updated",
    "update_hori_res",
    "header_updated",
    "receive_trigger",
    "trig_pos",
    "receive_end",
    "frame_began",
    "mode_changed",
    "h_scroll_value_changed",
    "value",
    "v_scroll_value_changed",
    "marker_time_changed",
    "on_traces_moved",
    "set_trig_pos",
    "percent",
    "show_calibration",
    "show_lissajous",
    "show",
    "on_measure_updated",
    "splitterMoved",
    "pos"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEviewSCOPEViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  224,    2, 0x06,    1 /* Public */,
       3,    0,  225,    2, 0x06,    2 /* Public */,
       4,    0,  226,    2, 0x06,    3 /* Public */,
       5,    0,  227,    2, 0x06,    4 /* Public */,
       6,    0,  228,    2, 0x06,    5 /* Public */,
       7,    0,  229,    2, 0x06,    6 /* Public */,
       8,    1,  230,    2, 0x06,    7 /* Public */,
      10,    0,  233,    2, 0x06,    9 /* Public */,
      11,    1,  234,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,  237,    2, 0x0a,   12 /* Public */,
      14,    1,  238,    2, 0x0a,   13 /* Public */,
      16,    0,  241,    2, 0x0a,   15 /* Public */,
      17,    0,  242,    2, 0x0a,   16 /* Public */,
      18,    3,  243,    2, 0x0a,   17 /* Public */,
      23,    0,  250,    2, 0x0a,   21 /* Public */,
      24,    0,  251,    2, 0x0a,   22 /* Public */,
      25,    0,  252,    2, 0x0a,   23 /* Public */,
      26,    0,  253,    2, 0x0a,   24 /* Public */,
      27,    0,  254,    2, 0x0a,   25 /* Public */,
      28,    0,  255,    2, 0x0a,   26 /* Public */,
      29,    0,  256,    2, 0x0a,   27 /* Public */,
      30,    0,  257,    2, 0x0a,   28 /* Public */,
      31,    1,  258,    2, 0x0a,   29 /* Public */,
      33,    0,  261,    2, 0x0a,   31 /* Public */,
      34,    0,  262,    2, 0x0a,   32 /* Public */,
      35,    0,  263,    2, 0x0a,   33 /* Public */,
      36,    1,  264,    2, 0x08,   34 /* Private */,
      38,    1,  267,    2, 0x08,   36 /* Private */,
      39,    0,  270,    2, 0x08,   38 /* Private */,
      40,    0,  271,    2, 0x08,   39 /* Private */,
      41,    1,  272,    2, 0x08,   40 /* Private */,
      43,    0,  275,    2, 0x08,   42 /* Private */,
      44,    1,  276,    2, 0x08,   43 /* Private */,
      46,    0,  279,    2, 0x08,   45 /* Private */,
      47,    2,  280,    2, 0x08,   46 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 19, QMetaType::Bool,   20,   21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   48,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::view::View::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEviewSCOPEViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<View, std::true_type>,
        // method 'hover_point_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cursor_update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'xcursor_update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cursor_moving'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cursor_moved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'measure_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prgRate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'resize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'auto_trig'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'reload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_measure_en'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'data_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_scale_offset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_region'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint64_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint64_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'hide_calibration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'status_clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'repeat_unshow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'repeat_show'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timebase_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'vDial_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_hori_res'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'header_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receive_trigger'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'receive_end'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'frame_began'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mode_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'h_scroll_value_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'v_scroll_value_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'marker_time_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_traces_moved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_trig_pos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'show_calibration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_lissajous'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_measure_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'splitterMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void dsv::view::View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<View *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hover_point_changed(); break;
        case 1: _t->cursor_update(); break;
        case 2: _t->xcursor_update(); break;
        case 3: _t->cursor_moving(); break;
        case 4: _t->cursor_moved(); break;
        case 5: _t->measure_updated(); break;
        case 6: _t->prgRate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->resize(); break;
        case 8: _t->auto_trig((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->reload(); break;
        case 10: _t->set_measure_en((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->data_updated(); break;
        case 12: _t->update_scale_offset(); break;
        case 13: _t->show_region((*reinterpret_cast< std::add_pointer_t<uint64_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint64_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 14: _t->hide_calibration(); break;
        case 15: _t->status_clear(); break;
        case 16: _t->repeat_unshow(); break;
        case 17: _t->repeat_show(); break;
        case 18: _t->timebase_changed(); break;
        case 19: _t->vDial_updated(); break;
        case 20: _t->update_hori_res(); break;
        case 21: _t->header_updated(); break;
        case 22: _t->receive_trigger((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 23: _t->receive_end(); break;
        case 24: _t->frame_began(); break;
        case 25: _t->mode_changed(); break;
        case 26: _t->h_scroll_value_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->v_scroll_value_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->marker_time_changed(); break;
        case 29: _t->on_traces_moved(); break;
        case 30: _t->set_trig_pos((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 31: _t->show_calibration(); break;
        case 32: _t->show_lissajous((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: _t->on_measure_updated(); break;
        case 34: _t->splitterMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (View::*)();
            if (_t _q_method = &View::hover_point_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (_t _q_method = &View::cursor_update; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (_t _q_method = &View::xcursor_update; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (_t _q_method = &View::cursor_moving; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (_t _q_method = &View::cursor_moved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (_t _q_method = &View::measure_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (View::*)(int );
            if (_t _q_method = &View::prgRate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (_t _q_method = &View::resize; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (View::*)(int );
            if (_t _q_method = &View::auto_trig; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject *dsv::view::View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::view::View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int dsv::view::View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void dsv::view::View::hover_point_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void dsv::view::View::cursor_update()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void dsv::view::View::xcursor_update()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void dsv::view::View::cursor_moving()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void dsv::view::View::cursor_moved()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void dsv::view::View::measure_updated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void dsv::view::View::prgRate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void dsv::view::View::resize()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void dsv::view::View::auto_trig(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
