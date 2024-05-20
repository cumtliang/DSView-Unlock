/****************************************************************************
** Meta object code from reading C++ file 'header.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/view/header.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'header.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEHeaderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEHeaderENDCLASS = QtMocHelpers::stringData(
    "dsv::view::Header",
    "traces_moved",
    "",
    "header_updated",
    "vDial_changed",
    "acdc_changed",
    "ch_changed",
    "on_action_set_name_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEHeaderENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[18];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[14];
    char stringdata5[13];
    char stringdata6[11];
    char stringdata7[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEHeaderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEHeaderENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEHeaderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "dsv::view::Header"
        QT_MOC_LITERAL(18, 12),  // "traces_moved"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 14),  // "header_updated"
        QT_MOC_LITERAL(47, 13),  // "vDial_changed"
        QT_MOC_LITERAL(61, 12),  // "acdc_changed"
        QT_MOC_LITERAL(74, 10),  // "ch_changed"
        QT_MOC_LITERAL(85, 28)   // "on_action_set_name_triggered"
    },
    "dsv::view::Header",
    "traces_moved",
    "",
    "header_updated",
    "vDial_changed",
    "acdc_changed",
    "ch_changed",
    "on_action_set_name_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEviewSCOPEHeaderENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,
       4,    1,   52,    2, 0x06,    3 /* Public */,
       5,    1,   55,    2, 0x06,    5 /* Public */,
       6,    1,   58,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   61,    2, 0x08,    9 /* Private */,

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

Q_CONSTINIT const QMetaObject dsv::view::Header::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEHeaderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEviewSCOPEHeaderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEHeaderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Header, std::true_type>,
        // method 'traces_moved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'header_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'vDial_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'acdc_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'ch_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'on_action_set_name_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::view::Header::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Header *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->traces_moved(); break;
        case 1: _t->header_updated(); break;
        case 2: _t->vDial_changed((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1]))); break;
        case 3: _t->acdc_changed((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1]))); break;
        case 4: _t->ch_changed((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1]))); break;
        case 5: _t->on_action_set_name_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Header::*)();
            if (_t _q_method = &Header::traces_moved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Header::*)();
            if (_t _q_method = &Header::header_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Header::*)(quint16 );
            if (_t _q_method = &Header::vDial_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Header::*)(quint16 );
            if (_t _q_method = &Header::acdc_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Header::*)(quint16 );
            if (_t _q_method = &Header::ch_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *dsv::view::Header::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::view::Header::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEHeaderENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
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
