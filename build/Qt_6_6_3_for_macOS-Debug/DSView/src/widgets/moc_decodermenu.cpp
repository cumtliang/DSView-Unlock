/****************************************************************************
** Meta object code from reading C++ file 'decodermenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/widgets/decodermenu.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decodermenu.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderMenuENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderMenuENDCLASS = QtMocHelpers::stringData(
    "dsv::widgets::DecoderMenu",
    "decoder_selected",
    "",
    "srd_decoder*",
    "decoder",
    "selected",
    "on_action",
    "action"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderMenuENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[26];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[8];
    char stringdata5[9];
    char stringdata6[10];
    char stringdata7[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderMenuENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderMenuENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderMenuENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "dsv::widgets::DecoderMenu"
        QT_MOC_LITERAL(26, 16),  // "decoder_selected"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 12),  // "srd_decoder*"
        QT_MOC_LITERAL(57, 7),  // "decoder"
        QT_MOC_LITERAL(65, 8),  // "selected"
        QT_MOC_LITERAL(74, 9),  // "on_action"
        QT_MOC_LITERAL(84, 6)   // "action"
    },
    "dsv::widgets::DecoderMenu",
    "decoder_selected",
    "",
    "srd_decoder*",
    "decoder",
    "selected",
    "on_action",
    "action"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEwidgetsSCOPEDecoderMenuENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       5,    0,   35,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   36,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::widgets::DecoderMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderMenuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEwidgetsSCOPEDecoderMenuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderMenuENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DecoderMenu, std::true_type>,
        // method 'decoder_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<srd_decoder *, std::false_type>,
        // method 'selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void dsv::widgets::DecoderMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DecoderMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->decoder_selected((*reinterpret_cast< std::add_pointer_t<srd_decoder*>>(_a[1]))); break;
        case 1: _t->selected(); break;
        case 2: _t->on_action((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DecoderMenu::*)(srd_decoder * );
            if (_t _q_method = &DecoderMenu::decoder_selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DecoderMenu::*)();
            if (_t _q_method = &DecoderMenu::selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *dsv::widgets::DecoderMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::widgets::DecoderMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEwidgetsSCOPEDecoderMenuENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
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
