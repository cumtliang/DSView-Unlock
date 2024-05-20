/****************************************************************************
** Meta object code from reading C++ file 'decodermenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/widgets/decodermenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decodermenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__widgets__DecoderMenu_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__widgets__DecoderMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__widgets__DecoderMenu_t qt_meta_stringdata_dsv__widgets__DecoderMenu = {
    {
QT_MOC_LITERAL(0, 0, 25), // "dsv::widgets::DecoderMenu"
QT_MOC_LITERAL(1, 26, 16), // "decoder_selected"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 12), // "srd_decoder*"
QT_MOC_LITERAL(4, 57, 7), // "decoder"
QT_MOC_LITERAL(5, 65, 8), // "selected"
QT_MOC_LITERAL(6, 74, 9), // "on_action"
QT_MOC_LITERAL(7, 84, 6) // "action"

    },
    "dsv::widgets::DecoderMenu\0decoder_selected\0"
    "\0srd_decoder*\0decoder\0selected\0on_action\0"
    "action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__widgets__DecoderMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    7,

       0        // eod
};

void dsv::widgets::DecoderMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DecoderMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->decoder_selected((*reinterpret_cast< srd_decoder*(*)>(_a[1]))); break;
        case 1: _t->selected(); break;
        case 2: _t->on_action((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DecoderMenu::*)(srd_decoder * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DecoderMenu::decoder_selected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DecoderMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DecoderMenu::selected)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::widgets::DecoderMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_dsv__widgets__DecoderMenu.data,
    qt_meta_data_dsv__widgets__DecoderMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::widgets::DecoderMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::widgets::DecoderMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__widgets__DecoderMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int dsv::widgets::DecoderMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
void dsv::widgets::DecoderMenu::decoder_selected(srd_decoder * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dsv::widgets::DecoderMenu::selected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
