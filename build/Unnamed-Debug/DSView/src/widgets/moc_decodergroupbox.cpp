/****************************************************************************
** Meta object code from reading C++ file 'decodergroupbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/widgets/decodergroupbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decodergroupbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__widgets__DecoderGroupBox_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__widgets__DecoderGroupBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__widgets__DecoderGroupBox_t qt_meta_stringdata_dsv__widgets__DecoderGroupBox = {
    {
QT_MOC_LITERAL(0, 0, 29), // "dsv::widgets::DecoderGroupBox"
QT_MOC_LITERAL(1, 30, 17), // "show_hide_decoder"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 13), // "show_hide_row"
QT_MOC_LITERAL(4, 63, 9), // "del_stack"
QT_MOC_LITERAL(5, 73, 16), // "decode::Decoder*"
QT_MOC_LITERAL(6, 90, 4), // "_dec"
QT_MOC_LITERAL(7, 95, 8), // "tog_icon"
QT_MOC_LITERAL(8, 104, 12) // "on_del_stack"

    },
    "dsv::widgets::DecoderGroupBox\0"
    "show_hide_decoder\0\0show_hide_row\0"
    "del_stack\0decode::Decoder*\0_dec\0"
    "tog_icon\0on_del_stack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__widgets__DecoderGroupBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dsv::widgets::DecoderGroupBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DecoderGroupBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show_hide_decoder(); break;
        case 1: _t->show_hide_row(); break;
        case 2: _t->del_stack((*reinterpret_cast< decode::Decoder*(*)>(_a[1]))); break;
        case 3: _t->tog_icon(); break;
        case 4: _t->on_del_stack(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DecoderGroupBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DecoderGroupBox::show_hide_decoder)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DecoderGroupBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DecoderGroupBox::show_hide_row)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DecoderGroupBox::*)(decode::Decoder * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DecoderGroupBox::del_stack)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::widgets::DecoderGroupBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_dsv__widgets__DecoderGroupBox.data,
    qt_meta_data_dsv__widgets__DecoderGroupBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::widgets::DecoderGroupBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::widgets::DecoderGroupBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__widgets__DecoderGroupBox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int dsv::widgets::DecoderGroupBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void dsv::widgets::DecoderGroupBox::show_hide_decoder()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void dsv::widgets::DecoderGroupBox::show_hide_row()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void dsv::widgets::DecoderGroupBox::del_stack(decode::Decoder * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
