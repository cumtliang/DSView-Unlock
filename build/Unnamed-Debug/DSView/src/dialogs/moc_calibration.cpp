/****************************************************************************
** Meta object code from reading C++ file 'calibration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/dialogs/calibration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__dialogs__Calibration_t {
    QByteArrayData data[8];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__dialogs__Calibration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__dialogs__Calibration_t qt_meta_stringdata_dsv__dialogs__Calibration = {
    {
QT_MOC_LITERAL(0, 0, 25), // "dsv::dialogs::Calibration"
QT_MOC_LITERAL(1, 26, 9), // "set_value"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 7), // "on_save"
QT_MOC_LITERAL(5, 51, 8), // "on_abort"
QT_MOC_LITERAL(6, 60, 8), // "on_reset"
QT_MOC_LITERAL(7, 69, 12) // "reload_value"

    },
    "dsv::dialogs::Calibration\0set_value\0"
    "\0value\0on_save\0on_abort\0on_reset\0"
    "reload_value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__dialogs__Calibration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dsv::dialogs::Calibration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calibration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->set_value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_save(); break;
        case 2: _t->on_abort(); break;
        case 3: _t->on_reset(); break;
        case 4: _t->reload_value(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::dialogs::Calibration::staticMetaObject = { {
    QMetaObject::SuperData::link<DSDialog::staticMetaObject>(),
    qt_meta_stringdata_dsv__dialogs__Calibration.data,
    qt_meta_data_dsv__dialogs__Calibration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::dialogs::Calibration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dialogs::Calibration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__dialogs__Calibration.stringdata0))
        return static_cast<void*>(this);
    return DSDialog::qt_metacast(_clname);
}

int dsv::dialogs::Calibration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DSDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
