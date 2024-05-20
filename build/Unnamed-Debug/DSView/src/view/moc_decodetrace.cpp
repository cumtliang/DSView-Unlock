/****************************************************************************
** Meta object code from reading C++ file 'decodetrace.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/view/decodetrace.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decodetrace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__view__DecodeTrace_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__view__DecodeTrace_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__view__DecodeTrace_t qt_meta_stringdata_dsv__view__DecodeTrace = {
    {
QT_MOC_LITERAL(0, 0, 22), // "dsv::view::DecodeTrace"
QT_MOC_LITERAL(1, 23, 16), // "decoded_progress"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "progress"
QT_MOC_LITERAL(4, 50, 18), // "on_new_decode_data"
QT_MOC_LITERAL(5, 69, 14) // "on_decode_done"

    },
    "dsv::view::DecodeTrace\0decoded_progress\0"
    "\0progress\0on_new_decode_data\0"
    "on_decode_done"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__view__DecodeTrace[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dsv::view::DecodeTrace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DecodeTrace *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->decoded_progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_new_decode_data(); break;
        case 2: _t->on_decode_done(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DecodeTrace::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DecodeTrace::decoded_progress)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::view::DecodeTrace::staticMetaObject = { {
    QMetaObject::SuperData::link<Trace::staticMetaObject>(),
    qt_meta_stringdata_dsv__view__DecodeTrace.data,
    qt_meta_data_dsv__view__DecodeTrace,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::view::DecodeTrace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::view::DecodeTrace::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__view__DecodeTrace.stringdata0))
        return static_cast<void*>(this);
    return Trace::qt_metacast(_clname);
}

int dsv::view::DecodeTrace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Trace::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void dsv::view::DecodeTrace::decoded_progress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
