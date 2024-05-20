/****************************************************************************
** Meta object code from reading C++ file 'decodergroupbox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/widgets/decodergroupbox.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decodergroupbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderGroupBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderGroupBoxENDCLASS = QtMocHelpers::stringData(
    "dsv::widgets::DecoderGroupBox",
    "show_hide_decoder",
    "",
    "show_hide_row",
    "del_stack",
    "decode::Decoder*",
    "_dec",
    "tog_icon",
    "on_del_stack"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderGroupBoxENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[30];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[10];
    char stringdata5[17];
    char stringdata6[5];
    char stringdata7[9];
    char stringdata8[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderGroupBoxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderGroupBoxENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderGroupBoxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29),  // "dsv::widgets::DecoderGroupBox"
        QT_MOC_LITERAL(30, 17),  // "show_hide_decoder"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 13),  // "show_hide_row"
        QT_MOC_LITERAL(63, 9),  // "del_stack"
        QT_MOC_LITERAL(73, 16),  // "decode::Decoder*"
        QT_MOC_LITERAL(90, 4),  // "_dec"
        QT_MOC_LITERAL(95, 8),  // "tog_icon"
        QT_MOC_LITERAL(104, 12)   // "on_del_stack"
    },
    "dsv::widgets::DecoderGroupBox",
    "show_hide_decoder",
    "",
    "show_hide_row",
    "del_stack",
    "decode::Decoder*",
    "_dec",
    "tog_icon",
    "on_del_stack"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEwidgetsSCOPEDecoderGroupBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    1,   46,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   49,    2, 0x08,    5 /* Private */,
       8,    0,   50,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::widgets::DecoderGroupBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderGroupBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEwidgetsSCOPEDecoderGroupBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderGroupBoxENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DecoderGroupBox, std::true_type>,
        // method 'show_hide_decoder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_hide_row'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'del_stack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<decode::Decoder *, std::false_type>,
        // method 'tog_icon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_del_stack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::widgets::DecoderGroupBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DecoderGroupBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show_hide_decoder(); break;
        case 1: _t->show_hide_row(); break;
        case 2: _t->del_stack((*reinterpret_cast< std::add_pointer_t<decode::Decoder*>>(_a[1]))); break;
        case 3: _t->tog_icon(); break;
        case 4: _t->on_del_stack(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DecoderGroupBox::*)();
            if (_t _q_method = &DecoderGroupBox::show_hide_decoder; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DecoderGroupBox::*)();
            if (_t _q_method = &DecoderGroupBox::show_hide_row; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DecoderGroupBox::*)(decode::Decoder * );
            if (_t _q_method = &DecoderGroupBox::del_stack; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *dsv::widgets::DecoderGroupBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::widgets::DecoderGroupBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderGroupBoxENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
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
