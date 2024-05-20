/****************************************************************************
** Meta object code from reading C++ file 'protocoldock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/dock/protocoldock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocoldock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__dock__ProtocolDock_t {
    QByteArrayData data[23];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__dock__ProtocolDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__dock__ProtocolDock_t qt_meta_stringdata_dsv__dock__ProtocolDock = {
    {
QT_MOC_LITERAL(0, 0, 23), // "dsv::dock::ProtocolDock"
QT_MOC_LITERAL(1, 24, 16), // "protocol_updated"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "update_model"
QT_MOC_LITERAL(4, 55, 15), // "on_add_protocol"
QT_MOC_LITERAL(5, 71, 19), // "on_del_all_protocol"
QT_MOC_LITERAL(6, 91, 16), // "decoded_progress"
QT_MOC_LITERAL(7, 108, 8), // "progress"
QT_MOC_LITERAL(8, 117, 9), // "set_model"
QT_MOC_LITERAL(9, 127, 17), // "export_table_view"
QT_MOC_LITERAL(10, 145, 14), // "nav_table_view"
QT_MOC_LITERAL(11, 160, 12), // "item_clicked"
QT_MOC_LITERAL(12, 173, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 185, 5), // "index"
QT_MOC_LITERAL(14, 191, 13), // "column_resize"
QT_MOC_LITERAL(15, 205, 8), // "old_size"
QT_MOC_LITERAL(16, 214, 8), // "new_size"
QT_MOC_LITERAL(17, 223, 10), // "search_pre"
QT_MOC_LITERAL(18, 234, 10), // "search_nxt"
QT_MOC_LITERAL(19, 245, 11), // "search_done"
QT_MOC_LITERAL(20, 257, 14), // "search_changed"
QT_MOC_LITERAL(21, 272, 13), // "search_update"
QT_MOC_LITERAL(22, 286, 20) // "show_protocol_select"

    },
    "dsv::dock::ProtocolDock\0protocol_updated\0"
    "\0update_model\0on_add_protocol\0"
    "on_del_all_protocol\0decoded_progress\0"
    "progress\0set_model\0export_table_view\0"
    "nav_table_view\0item_clicked\0QModelIndex\0"
    "index\0column_resize\0old_size\0new_size\0"
    "search_pre\0search_nxt\0search_done\0"
    "search_changed\0search_update\0"
    "show_protocol_select"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__dock__ProtocolDock[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   95,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    1,   98,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    1,  104,    2, 0x08 /* Private */,
      14,    3,  107,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,
      19,    0,  116,    2, 0x08 /* Private */,
      20,    0,  117,    2, 0x08 /* Private */,
      21,    0,  118,    2, 0x08 /* Private */,
      22,    0,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dsv::dock::ProtocolDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProtocolDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->protocol_updated(); break;
        case 1: _t->update_model(); break;
        case 2: _t->on_add_protocol(); break;
        case 3: _t->on_del_all_protocol(); break;
        case 4: _t->decoded_progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->set_model(); break;
        case 6: _t->export_table_view(); break;
        case 7: _t->nav_table_view(); break;
        case 8: _t->item_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->column_resize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->search_pre(); break;
        case 11: _t->search_nxt(); break;
        case 12: _t->search_done(); break;
        case 13: _t->search_changed(); break;
        case 14: _t->search_update(); break;
        case 15: _t->show_protocol_select(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProtocolDock::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProtocolDock::protocol_updated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::dock::ProtocolDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_dsv__dock__ProtocolDock.data,
    qt_meta_data_dsv__dock__ProtocolDock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::dock::ProtocolDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dock::ProtocolDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__dock__ProtocolDock.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IProtocolItemLayerCallback"))
        return static_cast< IProtocolItemLayerCallback*>(this);
    if (!strcmp(_clname, "IKeywordActive"))
        return static_cast< IKeywordActive*>(this);
    if (!strcmp(_clname, "ISearchItemClick"))
        return static_cast< ISearchItemClick*>(this);
    if (!strcmp(_clname, "IDecoderPannel"))
        return static_cast< IDecoderPannel*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int dsv::dock::ProtocolDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void dsv::dock::ProtocolDock::protocol_updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
