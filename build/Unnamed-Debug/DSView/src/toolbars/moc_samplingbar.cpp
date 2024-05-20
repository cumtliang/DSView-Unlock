/****************************************************************************
** Meta object code from reading C++ file 'samplingbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/toolbars/samplingbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'samplingbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__toolbars__SamplingBar_t {
    QByteArrayData data[15];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__toolbars__SamplingBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__toolbars__SamplingBar_t qt_meta_stringdata_dsv__toolbars__SamplingBar = {
    {
QT_MOC_LITERAL(0, 0, 26), // "dsv::toolbars::SamplingBar"
QT_MOC_LITERAL(1, 27, 22), // "sig_store_session_data"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 15), // "on_collect_mode"
QT_MOC_LITERAL(4, 67, 11), // "on_run_stop"
QT_MOC_LITERAL(5, 79, 15), // "on_instant_stop"
QT_MOC_LITERAL(6, 95, 18), // "on_device_selected"
QT_MOC_LITERAL(7, 114, 17), // "on_samplerate_sel"
QT_MOC_LITERAL(8, 132, 5), // "index"
QT_MOC_LITERAL(9, 138, 18), // "on_samplecount_sel"
QT_MOC_LITERAL(10, 157, 23), // "on_sample_limit_changed"
QT_MOC_LITERAL(11, 181, 12), // "on_configure"
QT_MOC_LITERAL(12, 194, 8), // "zero_adj"
QT_MOC_LITERAL(13, 203, 18), // "on_run_stop_action"
QT_MOC_LITERAL(14, 222, 22) // "on_instant_stop_action"

    },
    "dsv::toolbars::SamplingBar\0"
    "sig_store_session_data\0\0on_collect_mode\0"
    "on_run_stop\0on_instant_stop\0"
    "on_device_selected\0on_samplerate_sel\0"
    "index\0on_samplecount_sel\0"
    "on_sample_limit_changed\0on_configure\0"
    "zero_adj\0on_run_stop_action\0"
    "on_instant_stop_action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__toolbars__SamplingBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      10,    0,   85,    2, 0x08 /* Private */,
      11,    0,   86,    2, 0x08 /* Private */,
      12,    0,   87,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dsv::toolbars::SamplingBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SamplingBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sig_store_session_data(); break;
        case 1: _t->on_collect_mode(); break;
        case 2: _t->on_run_stop(); break;
        case 3: _t->on_instant_stop(); break;
        case 4: _t->on_device_selected(); break;
        case 5: _t->on_samplerate_sel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_samplecount_sel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_sample_limit_changed(); break;
        case 8: _t->on_configure(); break;
        case 9: _t->zero_adj(); break;
        case 10: _t->on_run_stop_action(); break;
        case 11: _t->on_instant_stop_action(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SamplingBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SamplingBar::sig_store_session_data)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::toolbars::SamplingBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBar::staticMetaObject>(),
    qt_meta_stringdata_dsv__toolbars__SamplingBar.data,
    qt_meta_data_dsv__toolbars__SamplingBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::toolbars::SamplingBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::toolbars::SamplingBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__toolbars__SamplingBar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QToolBar::qt_metacast(_clname);
}

int dsv::toolbars::SamplingBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void dsv::toolbars::SamplingBar::sig_store_session_data()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
