/****************************************************************************
** Meta object code from reading C++ file 'eventobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/appcore/eventobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__appcore__EventObject_t {
    QByteArrayData data[19];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__appcore__EventObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__appcore__EventObject_t qt_meta_stringdata_dsv__appcore__EventObject = {
    {
QT_MOC_LITERAL(0, 0, 25), // "dsv::appcore::EventObject"
QT_MOC_LITERAL(1, 26, 10), // "show_error"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "error"
QT_MOC_LITERAL(4, 44, 21), // "capture_state_changed"
QT_MOC_LITERAL(5, 66, 5), // "state"
QT_MOC_LITERAL(6, 72, 12), // "data_updated"
QT_MOC_LITERAL(7, 85, 13), // "session_error"
QT_MOC_LITERAL(8, 99, 15), // "signals_changed"
QT_MOC_LITERAL(9, 115, 15), // "receive_trigger"
QT_MOC_LITERAL(10, 131, 11), // "trigger_pos"
QT_MOC_LITERAL(11, 143, 11), // "frame_ended"
QT_MOC_LITERAL(12, 155, 11), // "frame_began"
QT_MOC_LITERAL(13, 167, 11), // "decode_done"
QT_MOC_LITERAL(14, 179, 16), // "receive_data_len"
QT_MOC_LITERAL(15, 196, 3), // "len"
QT_MOC_LITERAL(16, 200, 27), // "cur_snap_samplerate_changed"
QT_MOC_LITERAL(17, 228, 15), // "trigger_message"
QT_MOC_LITERAL(18, 244, 3) // "msg"

    },
    "dsv::appcore::EventObject\0show_error\0"
    "\0error\0capture_state_changed\0state\0"
    "data_updated\0session_error\0signals_changed\0"
    "receive_trigger\0trigger_pos\0frame_ended\0"
    "frame_began\0decode_done\0receive_data_len\0"
    "len\0cur_snap_samplerate_changed\0"
    "trigger_message\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__appcore__EventObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    0,   80,    2, 0x06 /* Public */,
       7,    0,   81,    2, 0x06 /* Public */,
       8,    0,   82,    2, 0x06 /* Public */,
       9,    1,   83,    2, 0x06 /* Public */,
      11,    0,   86,    2, 0x06 /* Public */,
      12,    0,   87,    2, 0x06 /* Public */,
      13,    0,   88,    2, 0x06 /* Public */,
      14,    1,   89,    2, 0x06 /* Public */,
      16,    0,   92,    2, 0x06 /* Public */,
      17,    1,   93,    2, 0x06 /* Public */,

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

void dsv::appcore::EventObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EventObject *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show_error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->capture_state_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->data_updated(); break;
        case 3: _t->session_error(); break;
        case 4: _t->signals_changed(); break;
        case 5: _t->receive_trigger((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 6: _t->frame_ended(); break;
        case 7: _t->frame_began(); break;
        case 8: _t->decode_done(); break;
        case 9: _t->receive_data_len((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 10: _t->cur_snap_samplerate_changed(); break;
        case 11: _t->trigger_message((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EventObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventObject::show_error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EventObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventObject::capture_state_changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventObject::data_updated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventObject::session_error)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventObject::signals_changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (EventObject::*)(quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventObject::receive_trigger)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventObject::frame_ended)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventObject::frame_began)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventObject::decode_done)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (EventObject::*)(quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventObject::receive_data_len)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (EventObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventObject::cur_snap_samplerate_changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (EventObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventObject::trigger_message)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::appcore::EventObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_dsv__appcore__EventObject.data,
    qt_meta_data_dsv__appcore__EventObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::appcore::EventObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::appcore::EventObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__appcore__EventObject.stringdata0))
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
            *reinterpret_cast<int*>(_a[0]) = -1;
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
struct qt_meta_stringdata_dsv__appcore__DeviceEventObject_t {
    QByteArrayData data[3];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__appcore__DeviceEventObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__appcore__DeviceEventObject_t qt_meta_stringdata_dsv__appcore__DeviceEventObject = {
    {
QT_MOC_LITERAL(0, 0, 31), // "dsv::appcore::DeviceEventObject"
QT_MOC_LITERAL(1, 32, 14), // "device_updated"
QT_MOC_LITERAL(2, 47, 0) // ""

    },
    "dsv::appcore::DeviceEventObject\0"
    "device_updated\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__appcore__DeviceEventObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceEventObject::device_updated)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject dsv::appcore::DeviceEventObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_dsv__appcore__DeviceEventObject.data,
    qt_meta_data_dsv__appcore__DeviceEventObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::appcore::DeviceEventObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::appcore::DeviceEventObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__appcore__DeviceEventObject.stringdata0))
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
            *reinterpret_cast<int*>(_a[0]) = -1;
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
QT_END_MOC_NAMESPACE
