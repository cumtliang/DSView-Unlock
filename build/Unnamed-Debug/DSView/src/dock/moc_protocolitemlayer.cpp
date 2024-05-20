/****************************************************************************
** Meta object code from reading C++ file 'protocolitemlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/dock/protocolitemlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocolitemlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__dock__ProtocolItemLayer_t {
    QByteArrayData data[6];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__dock__ProtocolItemLayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__dock__ProtocolItemLayer_t qt_meta_stringdata_dsv__dock__ProtocolItemLayer = {
    {
QT_MOC_LITERAL(0, 0, 28), // "dsv::dock::ProtocolItemLayer"
QT_MOC_LITERAL(1, 29, 15), // "on_set_protocol"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 15), // "on_del_protocol"
QT_MOC_LITERAL(4, 62, 24), // "on_format_select_changed"
QT_MOC_LITERAL(5, 87, 5) // "index"

    },
    "dsv::dock::ProtocolItemLayer\0"
    "on_set_protocol\0\0on_del_protocol\0"
    "on_format_select_changed\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__dock__ProtocolItemLayer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void dsv::dock::ProtocolItemLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProtocolItemLayer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_set_protocol(); break;
        case 1: _t->on_del_protocol(); break;
        case 2: _t->on_format_select_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::dock::ProtocolItemLayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QHBoxLayout::staticMetaObject>(),
    qt_meta_stringdata_dsv__dock__ProtocolItemLayer.data,
    qt_meta_data_dsv__dock__ProtocolItemLayer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::dock::ProtocolItemLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dock::ProtocolItemLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__dock__ProtocolItemLayer.stringdata0))
        return static_cast<void*>(this);
    return QHBoxLayout::qt_metacast(_clname);
}

int dsv::dock::ProtocolItemLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHBoxLayout::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
