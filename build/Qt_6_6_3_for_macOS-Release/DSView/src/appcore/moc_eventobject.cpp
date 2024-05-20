/****************************************************************************
** Meta object code from reading C++ file 'eventobject.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/appcore/eventobject.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventobject.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEEventObjectENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEEventObjectENDCLASS = QtMocHelpers::stringData(
    "dsv::appcore::EventObject",
    "show_error",
    "",
    "error",
    "capture_state_changed",
    "state",
    "data_updated",
    "session_error",
    "signals_changed",
    "receive_trigger",
    "trigger_pos",
    "frame_ended",
    "frame_began",
    "decode_done",
    "receive_data_len",
    "len",
    "cur_snap_samplerate_changed",
    "trigger_message",
    "msg"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEEventObjectENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[26];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[22];
    char stringdata5[6];
    char stringdata6[13];
    char stringdata7[14];
    char stringdata8[16];
    char stringdata9[16];
    char stringdata10[12];
    char stringdata11[12];
    char stringdata12[12];
    char stringdata13[12];
    char stringdata14[17];
    char stringdata15[4];
    char stringdata16[28];
    char stringdata17[16];
    char stringdata18[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEEventObjectENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEEventObjectENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEEventObjectENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "dsv::appcore::EventObject"
        QT_MOC_LITERAL(26, 10),  // "show_error"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 5),  // "error"
        QT_MOC_LITERAL(44, 21),  // "capture_state_changed"
        QT_MOC_LITERAL(66, 5),  // "state"
        QT_MOC_LITERAL(72, 12),  // "data_updated"
        QT_MOC_LITERAL(85, 13),  // "session_error"
        QT_MOC_LITERAL(99, 15),  // "signals_changed"
        QT_MOC_LITERAL(115, 15),  // "receive_trigger"
        QT_MOC_LITERAL(131, 11),  // "trigger_pos"
        QT_MOC_LITERAL(143, 11),  // "frame_ended"
        QT_MOC_LITERAL(155, 11),  // "frame_began"
        QT_MOC_LITERAL(167, 11),  // "decode_done"
        QT_MOC_LITERAL(179, 16),  // "receive_data_len"
        QT_MOC_LITERAL(196, 3),  // "len"
        QT_MOC_LITERAL(200, 27),  // "cur_snap_samplerate_changed"
        QT_MOC_LITERAL(228, 15),  // "trigger_message"
        QT_MOC_LITERAL(244, 3)   // "msg"
    },
    "dsv::appcore::EventObject",
    "show_error",
    "",
    "error",
    "capture_state_changed",
    "state",
    "data_updated",
    "session_error",
    "signals_changed",
    "receive_trigger",
    "trigger_pos",
    "frame_ended",
    "frame_began",
    "decode_done",
    "receive_data_len",
    "len",
    "cur_snap_samplerate_changed",
    "trigger_message",
    "msg"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEappcoreSCOPEEventObjectENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,
       4,    1,   89,    2, 0x06,    3 /* Public */,
       6,    0,   92,    2, 0x06,    5 /* Public */,
       7,    0,   93,    2, 0x06,    6 /* Public */,
       8,    0,   94,    2, 0x06,    7 /* Public */,
       9,    1,   95,    2, 0x06,    8 /* Public */,
      11,    0,   98,    2, 0x06,   10 /* Public */,
      12,    0,   99,    2, 0x06,   11 /* Public */,
      13,    0,  100,    2, 0x06,   12 /* Public */,
      14,    1,  101,    2, 0x06,   13 /* Public */,
      16,    0,  104,    2, 0x06,   15 /* Public */,
      17,    1,  105,    2, 0x06,   16 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::appcore::EventObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEEventObjectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEappcoreSCOPEEventObjectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEEventObjectENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EventObject, std::true_type>,
        // method 'show_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'capture_state_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'data_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'session_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signals_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receive_trigger'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'frame_ended'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'frame_began'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'decode_done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receive_data_len'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'cur_snap_samplerate_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'trigger_message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void dsv::appcore::EventObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EventObject *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->capture_state_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->data_updated(); break;
        case 3: _t->session_error(); break;
        case 4: _t->signals_changed(); break;
        case 5: _t->receive_trigger((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 6: _t->frame_ended(); break;
        case 7: _t->frame_began(); break;
        case 8: _t->decode_done(); break;
        case 9: _t->receive_data_len((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 10: _t->cur_snap_samplerate_changed(); break;
        case 11: _t->trigger_message((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EventObject::*)(QString );
            if (_t _q_method = &EventObject::show_error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EventObject::*)(int );
            if (_t _q_method = &EventObject::capture_state_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (_t _q_method = &EventObject::data_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (_t _q_method = &EventObject::session_error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (_t _q_method = &EventObject::signals_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (EventObject::*)(quint64 );
            if (_t _q_method = &EventObject::receive_trigger; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (_t _q_method = &EventObject::frame_ended; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (_t _q_method = &EventObject::frame_began; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (_t _q_method = &EventObject::decode_done; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (EventObject::*)(quint64 );
            if (_t _q_method = &EventObject::receive_data_len; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (_t _q_method = &EventObject::cur_snap_samplerate_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (EventObject::*)(int );
            if (_t _q_method = &EventObject::trigger_message; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    }
}

const QMetaObject *dsv::appcore::EventObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::appcore::EventObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEEventObjectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int dsv::appcore::EventObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void dsv::appcore::EventObject::show_error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dsv::appcore::EventObject::capture_state_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dsv::appcore::EventObject::data_updated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void dsv::appcore::EventObject::session_error()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void dsv::appcore::EventObject::signals_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void dsv::appcore::EventObject::receive_trigger(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void dsv::appcore::EventObject::frame_ended()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void dsv::appcore::EventObject::frame_began()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void dsv::appcore::EventObject::decode_done()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void dsv::appcore::EventObject::receive_data_len(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void dsv::appcore::EventObject::cur_snap_samplerate_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void dsv::appcore::EventObject::trigger_message(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEDeviceEventObjectENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEDeviceEventObjectENDCLASS = QtMocHelpers::stringData(
    "dsv::appcore::DeviceEventObject",
    "device_updated",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEDeviceEventObjectENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[32];
    char stringdata1[15];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEDeviceEventObjectENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEDeviceEventObjectENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEDeviceEventObjectENDCLASS = {
    {
        QT_MOC_LITERAL(0, 31),  // "dsv::appcore::DeviceEventObject"
        QT_MOC_LITERAL(32, 14),  // "device_updated"
        QT_MOC_LITERAL(47, 0)   // ""
    },
    "dsv::appcore::DeviceEventObject",
    "device_updated",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEappcoreSCOPEDeviceEventObjectENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::appcore::DeviceEventObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEDeviceEventObjectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEappcoreSCOPEDeviceEventObjectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEDeviceEventObjectENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DeviceEventObject, std::true_type>,
        // method 'device_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::appcore::DeviceEventObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceEventObject *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->device_updated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceEventObject::*)();
            if (_t _q_method = &DeviceEventObject::device_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *dsv::appcore::DeviceEventObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::appcore::DeviceEventObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEDeviceEventObjectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int dsv::appcore::DeviceEventObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void dsv::appcore::DeviceEventObject::device_updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
