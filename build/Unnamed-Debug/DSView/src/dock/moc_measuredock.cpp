/****************************************************************************
** Meta object code from reading C++ file 'measuredock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/dock/measuredock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'measuredock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__dock__MeasureDock_t {
    QByteArrayData data[20];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__dock__MeasureDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__dock__MeasureDock_t qt_meta_stringdata_dsv__dock__MeasureDock = {
    {
QT_MOC_LITERAL(0, 0, 22), // "dsv::dock::MeasureDock"
QT_MOC_LITERAL(1, 23, 11), // "goto_cursor"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "del_dist_measure"
QT_MOC_LITERAL(4, 53, 16), // "add_edge_measure"
QT_MOC_LITERAL(5, 70, 16), // "del_edge_measure"
QT_MOC_LITERAL(6, 87, 16), // "show_all_coursor"
QT_MOC_LITERAL(7, 104, 14), // "set_sel_cursor"
QT_MOC_LITERAL(8, 119, 11), // "update_dist"
QT_MOC_LITERAL(9, 131, 11), // "update_edge"
QT_MOC_LITERAL(10, 143, 20), // "set_cursor_btn_color"
QT_MOC_LITERAL(11, 164, 12), // "QPushButton*"
QT_MOC_LITERAL(12, 177, 3), // "btn"
QT_MOC_LITERAL(13, 181, 10), // "del_cursor"
QT_MOC_LITERAL(14, 192, 16), // "add_dist_measure"
QT_MOC_LITERAL(15, 209, 13), // "cursor_update"
QT_MOC_LITERAL(16, 223, 13), // "cursor_moving"
QT_MOC_LITERAL(17, 237, 6), // "reCalc"
QT_MOC_LITERAL(18, 244, 15), // "measure_updated"
QT_MOC_LITERAL(19, 260, 7) // "refresh"

    },
    "dsv::dock::MeasureDock\0goto_cursor\0\0"
    "del_dist_measure\0add_edge_measure\0"
    "del_edge_measure\0show_all_coursor\0"
    "set_sel_cursor\0update_dist\0update_edge\0"
    "set_cursor_btn_color\0QPushButton*\0btn\0"
    "del_cursor\0add_dist_measure\0cursor_update\0"
    "cursor_moving\0reCalc\0measure_updated\0"
    "refresh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__dock__MeasureDock[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    1,  102,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x0a /* Public */,
      16,    0,  108,    2, 0x0a /* Public */,
      17,    0,  109,    2, 0x0a /* Public */,
      18,    0,  110,    2, 0x0a /* Public */,
      19,    0,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dsv::dock::MeasureDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MeasureDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->goto_cursor(); break;
        case 1: _t->del_dist_measure(); break;
        case 2: _t->add_edge_measure(); break;
        case 3: _t->del_edge_measure(); break;
        case 4: _t->show_all_coursor(); break;
        case 5: _t->set_sel_cursor(); break;
        case 6: _t->update_dist(); break;
        case 7: _t->update_edge(); break;
        case 8: _t->set_cursor_btn_color((*reinterpret_cast< QPushButton*(*)>(_a[1]))); break;
        case 9: _t->del_cursor(); break;
        case 10: _t->add_dist_measure(); break;
        case 11: _t->cursor_update(); break;
        case 12: _t->cursor_moving(); break;
        case 13: _t->reCalc(); break;
        case 14: _t->measure_updated(); break;
        case 15: _t->refresh(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::dock::MeasureDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_dsv__dock__MeasureDock.data,
    qt_meta_data_dsv__dock__MeasureDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::dock::MeasureDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dock::MeasureDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__dock__MeasureDock.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int dsv::dock::MeasureDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
