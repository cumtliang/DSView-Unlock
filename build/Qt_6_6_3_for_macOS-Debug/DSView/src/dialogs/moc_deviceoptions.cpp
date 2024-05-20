/****************************************************************************
** Meta object code from reading C++ file 'deviceoptions.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/dialogs/deviceoptions.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceoptions.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSChannelLabelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSChannelLabelENDCLASS = QtMocHelpers::stringData(
    "ChannelLabel",
    "on_checked",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSChannelLabelENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[13];
    char stringdata1[11];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSChannelLabelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSChannelLabelENDCLASS_t qt_meta_stringdata_CLASSChannelLabelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "ChannelLabel"
        QT_MOC_LITERAL(13, 10),  // "on_checked"
        QT_MOC_LITERAL(24, 0)   // ""
    },
    "ChannelLabel",
    "on_checked",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSChannelLabelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ChannelLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSChannelLabelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSChannelLabelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSChannelLabelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChannelLabel, std::true_type>,
        // method 'on_checked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

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

const QMetaObject *ChannelLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChannelLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSChannelLabelENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDeviceOptionsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDeviceOptionsENDCLASS = QtMocHelpers::stringData(
    "dsv::dialogs::DeviceOptions",
    "enable_all_probes",
    "",
    "disable_all_probes",
    "zero_adj",
    "mode_check_timeout",
    "channel_check",
    "analog_channel_check",
    "on_calibration",
    "on_analog_channel_enable",
    "on_anlog_tab_changed",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDeviceOptionsENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[28];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[9];
    char stringdata5[19];
    char stringdata6[14];
    char stringdata7[21];
    char stringdata8[15];
    char stringdata9[25];
    char stringdata10[21];
    char stringdata11[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDeviceOptionsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDeviceOptionsENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDeviceOptionsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "dsv::dialogs::DeviceOptions"
        QT_MOC_LITERAL(28, 17),  // "enable_all_probes"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 18),  // "disable_all_probes"
        QT_MOC_LITERAL(66, 8),  // "zero_adj"
        QT_MOC_LITERAL(75, 18),  // "mode_check_timeout"
        QT_MOC_LITERAL(94, 13),  // "channel_check"
        QT_MOC_LITERAL(108, 20),  // "analog_channel_check"
        QT_MOC_LITERAL(129, 14),  // "on_calibration"
        QT_MOC_LITERAL(144, 24),  // "on_analog_channel_enable"
        QT_MOC_LITERAL(169, 20),  // "on_anlog_tab_changed"
        QT_MOC_LITERAL(190, 5)   // "index"
    },
    "dsv::dialogs::DeviceOptions",
    "enable_all_probes",
    "",
    "disable_all_probes",
    "zero_adj",
    "mode_check_timeout",
    "channel_check",
    "analog_channel_check",
    "on_calibration",
    "on_analog_channel_enable",
    "on_anlog_tab_changed",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEdialogsSCOPEDeviceOptionsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    1,   76,    2, 0x08,    9 /* Private */,

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

Q_CONSTINIT const QMetaObject dsv::dialogs::DeviceOptions::staticMetaObject = { {
    QMetaObject::SuperData::link<DSDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDeviceOptionsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEdialogsSCOPEDeviceOptionsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDeviceOptionsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DeviceOptions, std::true_type>,
        // method 'enable_all_probes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disable_all_probes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zero_adj'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mode_check_timeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'channel_check'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'analog_channel_check'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_calibration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_analog_channel_enable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_anlog_tab_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

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
        case 8: _t->on_anlog_tab_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *dsv::dialogs::DeviceOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dialogs::DeviceOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDeviceOptionsENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
