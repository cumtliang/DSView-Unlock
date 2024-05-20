/****************************************************************************
** Meta object code from reading C++ file 'viewstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/view/viewstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__view__ViewStatus_t {
    QByteArrayData data[10];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__view__ViewStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__view__ViewStatus_t qt_meta_stringdata_dsv__view__ViewStatus = {
    {
QT_MOC_LITERAL(0, 0, 21), // "dsv::view::ViewStatus"
QT_MOC_LITERAL(1, 22, 5), // "clear"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "reload"
QT_MOC_LITERAL(4, 36, 13), // "repeat_unshow"
QT_MOC_LITERAL(5, 50, 13), // "set_trig_time"
QT_MOC_LITERAL(6, 64, 4), // "time"
QT_MOC_LITERAL(7, 69, 13), // "set_rle_depth"
QT_MOC_LITERAL(8, 83, 8), // "uint64_t"
QT_MOC_LITERAL(9, 92, 5) // "depth"

    },
    "dsv::view::ViewStatus\0clear\0\0reload\0"
    "repeat_unshow\0set_trig_time\0time\0"
    "set_rle_depth\0uint64_t\0depth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__view__ViewStatus[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void dsv::view::ViewStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewStatus *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->reload(); break;
        case 2: _t->repeat_unshow(); break;
        case 3: _t->set_trig_time((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 4: _t->set_rle_depth((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::view::ViewStatus::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_dsv__view__ViewStatus.data,
    qt_meta_data_dsv__view__ViewStatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::view::ViewStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::view::ViewStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__view__ViewStatus.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int dsv::view::ViewStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
