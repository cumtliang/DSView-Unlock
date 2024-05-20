/****************************************************************************
** Meta object code from reading C++ file 'protocolitemlayer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/dock/protocolitemlayer.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocolitemlayer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEProtocolItemLayerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEProtocolItemLayerENDCLASS = QtMocHelpers::stringData(
    "dsv::dock::ProtocolItemLayer",
    "on_set_protocol",
    "",
    "on_del_protocol",
    "on_format_select_changed",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEProtocolItemLayerENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[29];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[25];
    char stringdata5[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEProtocolItemLayerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEProtocolItemLayerENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEProtocolItemLayerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "dsv::dock::ProtocolItemLayer"
        QT_MOC_LITERAL(29, 15),  // "on_set_protocol"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 15),  // "on_del_protocol"
        QT_MOC_LITERAL(62, 24),  // "on_format_select_changed"
        QT_MOC_LITERAL(87, 5)   // "index"
    },
    "dsv::dock::ProtocolItemLayer",
    "on_set_protocol",
    "",
    "on_del_protocol",
    "on_format_select_changed",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEdockSCOPEProtocolItemLayerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    1,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::dock::ProtocolItemLayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QHBoxLayout::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEProtocolItemLayerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEdockSCOPEProtocolItemLayerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEProtocolItemLayerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProtocolItemLayer, std::true_type>,
        // method 'on_set_protocol'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_del_protocol'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_format_select_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void dsv::dock::ProtocolItemLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProtocolItemLayer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_set_protocol(); break;
        case 1: _t->on_del_protocol(); break;
        case 2: _t->on_format_select_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *dsv::dock::ProtocolItemLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dock::ProtocolItemLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEProtocolItemLayerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QHBoxLayout::qt_metacast(_clname);
}

int dsv::dock::ProtocolItemLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHBoxLayout::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
