/****************************************************************************
** Meta object code from reading C++ file 'triggerdock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/dock/triggerdock.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'triggerdock.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEdockSCOPETriggerDockENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEdockSCOPETriggerDockENDCLASS = QtMocHelpers::stringData(
    "dsv::dock::TriggerDock",
    "simple_trigger",
    "",
    "adv_trigger",
    "widget_enable",
    "index",
    "value_changed",
    "on_hex_checkbox_click",
    "ck",
    "on_serial_value_changed",
    "v",
    "on_serial_hex_changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEdockSCOPETriggerDockENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[23];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[14];
    char stringdata5[6];
    char stringdata6[14];
    char stringdata7[22];
    char stringdata8[3];
    char stringdata9[24];
    char stringdata10[2];
    char stringdata11[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEdockSCOPETriggerDockENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEdockSCOPETriggerDockENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEdockSCOPETriggerDockENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "dsv::dock::TriggerDock"
        QT_MOC_LITERAL(23, 14),  // "simple_trigger"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 11),  // "adv_trigger"
        QT_MOC_LITERAL(51, 13),  // "widget_enable"
        QT_MOC_LITERAL(65, 5),  // "index"
        QT_MOC_LITERAL(71, 13),  // "value_changed"
        QT_MOC_LITERAL(85, 21),  // "on_hex_checkbox_click"
        QT_MOC_LITERAL(107, 2),  // "ck"
        QT_MOC_LITERAL(110, 23),  // "on_serial_value_changed"
        QT_MOC_LITERAL(134, 1),  // "v"
        QT_MOC_LITERAL(136, 21)   // "on_serial_hex_changed"
    },
    "dsv::dock::TriggerDock",
    "simple_trigger",
    "",
    "adv_trigger",
    "widget_enable",
    "index",
    "value_changed",
    "on_hex_checkbox_click",
    "ck",
    "on_serial_value_changed",
    "v",
    "on_serial_hex_changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEdockSCOPETriggerDockENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    1,   58,    2, 0x08,    3 /* Private */,
       6,    0,   61,    2, 0x08,    5 /* Private */,
       7,    1,   62,    2, 0x08,    6 /* Private */,
       9,    1,   65,    2, 0x08,    8 /* Private */,
      11,    0,   68,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::dock::TriggerDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEdockSCOPETriggerDockENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEdockSCOPETriggerDockENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEdockSCOPETriggerDockENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TriggerDock, std::true_type>,
        // method 'simple_trigger'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'adv_trigger'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'widget_enable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'value_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_hex_checkbox_click'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_serial_value_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_serial_hex_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::dock::TriggerDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TriggerDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->simple_trigger(); break;
        case 1: _t->adv_trigger(); break;
        case 2: _t->widget_enable((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->value_changed(); break;
        case 4: _t->on_hex_checkbox_click((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_serial_value_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_serial_hex_changed(); break;
        default: ;
        }
    }
}

const QMetaObject *dsv::dock::TriggerDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dock::TriggerDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEdockSCOPETriggerDockENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int dsv::dock::TriggerDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
