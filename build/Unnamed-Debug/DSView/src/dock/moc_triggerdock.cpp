/****************************************************************************
** Meta object code from reading C++ file 'triggerdock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/dock/triggerdock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'triggerdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__dock__TriggerDock_t {
    QByteArrayData data[12];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__dock__TriggerDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__dock__TriggerDock_t qt_meta_stringdata_dsv__dock__TriggerDock = {
    {
QT_MOC_LITERAL(0, 0, 22), // "dsv::dock::TriggerDock"
QT_MOC_LITERAL(1, 23, 14), // "simple_trigger"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "adv_trigger"
QT_MOC_LITERAL(4, 51, 13), // "widget_enable"
QT_MOC_LITERAL(5, 65, 5), // "index"
QT_MOC_LITERAL(6, 71, 13), // "value_changed"
QT_MOC_LITERAL(7, 85, 21), // "on_hex_checkbox_click"
QT_MOC_LITERAL(8, 107, 2), // "ck"
QT_MOC_LITERAL(9, 110, 23), // "on_serial_value_changed"
QT_MOC_LITERAL(10, 134, 1), // "v"
QT_MOC_LITERAL(11, 136, 21) // "on_serial_hex_changed"

    },
    "dsv::dock::TriggerDock\0simple_trigger\0"
    "\0adv_trigger\0widget_enable\0index\0"
    "value_changed\0on_hex_checkbox_click\0"
    "ck\0on_serial_value_changed\0v\0"
    "on_serial_hex_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__dock__TriggerDock[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       9,    1,   58,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,

       0        // eod
};

void dsv::dock::TriggerDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TriggerDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->simple_trigger(); break;
        case 1: _t->adv_trigger(); break;
        case 2: _t->widget_enable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->value_changed(); break;
        case 4: _t->on_hex_checkbox_click((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_serial_value_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_serial_hex_changed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::dock::TriggerDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_dsv__dock__TriggerDock.data,
    qt_meta_data_dsv__dock__TriggerDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::dock::TriggerDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dock::TriggerDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__dock__TriggerDock.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int dsv::dock::TriggerDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
