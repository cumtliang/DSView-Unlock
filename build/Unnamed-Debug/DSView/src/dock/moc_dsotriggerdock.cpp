/****************************************************************************
** Meta object code from reading C++ file 'dsotriggerdock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/dock/dsotriggerdock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dsotriggerdock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__dock__DsoTriggerDock_t {
    QByteArrayData data[16];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__dock__DsoTriggerDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__dock__DsoTriggerDock_t qt_meta_stringdata_dsv__dock__DsoTriggerDock = {
    {
QT_MOC_LITERAL(0, 0, 25), // "dsv::dock::DsoTriggerDock"
QT_MOC_LITERAL(1, 26, 12), // "set_trig_pos"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "percent"
QT_MOC_LITERAL(4, 48, 9), // "auto_trig"
QT_MOC_LITERAL(5, 58, 5), // "index"
QT_MOC_LITERAL(6, 64, 11), // "pos_changed"
QT_MOC_LITERAL(7, 76, 3), // "pos"
QT_MOC_LITERAL(8, 80, 12), // "hold_changed"
QT_MOC_LITERAL(9, 93, 4), // "hold"
QT_MOC_LITERAL(10, 98, 14), // "margin_changed"
QT_MOC_LITERAL(11, 113, 6), // "margin"
QT_MOC_LITERAL(12, 120, 14), // "source_changed"
QT_MOC_LITERAL(13, 135, 12), // "type_changed"
QT_MOC_LITERAL(14, 148, 15), // "channel_changed"
QT_MOC_LITERAL(15, 164, 2) // "ch"

    },
    "dsv::dock::DsoTriggerDock\0set_trig_pos\0"
    "\0percent\0auto_trig\0index\0pos_changed\0"
    "pos\0hold_changed\0hold\0margin_changed\0"
    "margin\0source_changed\0type_changed\0"
    "channel_changed\0ch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__dock__DsoTriggerDock[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,
      10,    1,   66,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,
      13,    0,   70,    2, 0x08 /* Private */,
      14,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void dsv::dock::DsoTriggerDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DsoTriggerDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->set_trig_pos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->auto_trig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->pos_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->hold_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->margin_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->source_changed(); break;
        case 6: _t->type_changed(); break;
        case 7: _t->channel_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DsoTriggerDock::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DsoTriggerDock::set_trig_pos)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::dock::DsoTriggerDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_dsv__dock__DsoTriggerDock.data,
    qt_meta_data_dsv__dock__DsoTriggerDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::dock::DsoTriggerDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dock::DsoTriggerDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__dock__DsoTriggerDock.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int dsv::dock::DsoTriggerDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void dsv::dock::DsoTriggerDock::set_trig_pos(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
