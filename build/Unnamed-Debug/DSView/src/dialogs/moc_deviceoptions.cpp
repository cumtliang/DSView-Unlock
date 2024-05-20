/****************************************************************************
** Meta object code from reading C++ file 'deviceoptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/dialogs/deviceoptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChannelLabel_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChannelLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChannelLabel_t qt_meta_stringdata_ChannelLabel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ChannelLabel"
QT_MOC_LITERAL(1, 13, 10), // "on_checked"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "ChannelLabel\0on_checked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChannelLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ChannelLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelLabel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_checked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ChannelLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ChannelLabel.data,
    qt_meta_data_ChannelLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChannelLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChannelLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChannelLabel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChannelLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_dsv__dialogs__DeviceOptions_t {
    QByteArrayData data[12];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__dialogs__DeviceOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__dialogs__DeviceOptions_t qt_meta_stringdata_dsv__dialogs__DeviceOptions = {
    {
QT_MOC_LITERAL(0, 0, 27), // "dsv::dialogs::DeviceOptions"
QT_MOC_LITERAL(1, 28, 17), // "enable_all_probes"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 18), // "disable_all_probes"
QT_MOC_LITERAL(4, 66, 8), // "zero_adj"
QT_MOC_LITERAL(5, 75, 18), // "mode_check_timeout"
QT_MOC_LITERAL(6, 94, 13), // "channel_check"
QT_MOC_LITERAL(7, 108, 20), // "analog_channel_check"
QT_MOC_LITERAL(8, 129, 14), // "on_calibration"
QT_MOC_LITERAL(9, 144, 24), // "on_analog_channel_enable"
QT_MOC_LITERAL(10, 169, 20), // "on_anlog_tab_changed"
QT_MOC_LITERAL(11, 190, 5) // "index"

    },
    "dsv::dialogs::DeviceOptions\0"
    "enable_all_probes\0\0disable_all_probes\0"
    "zero_adj\0mode_check_timeout\0channel_check\0"
    "analog_channel_check\0on_calibration\0"
    "on_analog_channel_enable\0on_anlog_tab_changed\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__dialogs__DeviceOptions[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void dsv::dialogs::DeviceOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceOptions *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->enable_all_probes(); break;
        case 1: _t->disable_all_probes(); break;
        case 2: _t->zero_adj(); break;
        case 3: _t->mode_check_timeout(); break;
        case 4: _t->channel_check(); break;
        case 5: _t->analog_channel_check(); break;
        case 6: _t->on_calibration(); break;
        case 7: _t->on_analog_channel_enable(); break;
        case 8: _t->on_anlog_tab_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::dialogs::DeviceOptions::staticMetaObject = { {
    QMetaObject::SuperData::link<DSDialog::staticMetaObject>(),
    qt_meta_stringdata_dsv__dialogs__DeviceOptions.data,
    qt_meta_data_dsv__dialogs__DeviceOptions,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::dialogs::DeviceOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dialogs::DeviceOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__dialogs__DeviceOptions.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IChannelCheck"))
        return static_cast< IChannelCheck*>(this);
    return DSDialog::qt_metacast(_clname);
}

int dsv::dialogs::DeviceOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DSDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
