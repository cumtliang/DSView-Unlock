/****************************************************************************
** Meta object code from reading C++ file 'header.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/view/header.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'header.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__view__Header_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__view__Header_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__view__Header_t qt_meta_stringdata_dsv__view__Header = {
    {
QT_MOC_LITERAL(0, 0, 17), // "dsv::view::Header"
QT_MOC_LITERAL(1, 18, 12), // "traces_moved"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "header_updated"
QT_MOC_LITERAL(4, 47, 13), // "vDial_changed"
QT_MOC_LITERAL(5, 61, 12), // "acdc_changed"
QT_MOC_LITERAL(6, 74, 10), // "ch_changed"
QT_MOC_LITERAL(7, 85, 28) // "on_action_set_name_triggered"

    },
    "dsv::view::Header\0traces_moved\0\0"
    "header_updated\0vDial_changed\0acdc_changed\0"
    "ch_changed\0on_action_set_name_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__view__Header[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,
       5,    1,   49,    2, 0x06 /* Public */,
       6,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UShort,    2,
    QMetaType::Void, QMetaType::UShort,    2,
    QMetaType::Void, QMetaType::UShort,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void dsv::view::Header::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Header *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->traces_moved(); break;
        case 1: _t->header_updated(); break;
        case 2: _t->vDial_changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 3: _t->acdc_changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 4: _t->ch_changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 5: _t->on_action_set_name_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Header::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Header::traces_moved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Header::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Header::header_updated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Header::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Header::vDial_changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Header::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Header::acdc_changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Header::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Header::ch_changed)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::view::Header::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_dsv__view__Header.data,
    qt_meta_data_dsv__view__Header,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::view::Header::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::view::Header::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__view__Header.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int dsv::view::Header::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void dsv::view::Header::traces_moved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void dsv::view::Header::header_updated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void dsv::view::Header::vDial_changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void dsv::view::Header::acdc_changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void dsv::view::Header::ch_changed(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
