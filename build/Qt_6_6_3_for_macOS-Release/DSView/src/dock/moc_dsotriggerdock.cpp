/****************************************************************************
** Meta object code from reading C++ file 'dsotriggerdock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/dock/dsotriggerdock.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dsotriggerdock.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEDsoTriggerDockENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEDsoTriggerDockENDCLASS = QtMocHelpers::stringData(
    "dsv::dock::DsoTriggerDock",
    "set_trig_pos",
    "",
    "percent",
    "auto_trig",
    "index",
    "pos_changed",
    "pos",
    "hold_changed",
    "hold",
    "margin_changed",
    "margin",
    "source_changed",
    "type_changed",
    "channel_changed",
    "ch"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEDsoTriggerDockENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[26];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[10];
    char stringdata5[6];
    char stringdata6[12];
    char stringdata7[4];
    char stringdata8[13];
    char stringdata9[5];
    char stringdata10[15];
    char stringdata11[7];
    char stringdata12[15];
    char stringdata13[13];
    char stringdata14[16];
    char stringdata15[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEDsoTriggerDockENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEDsoTriggerDockENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEDsoTriggerDockENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "dsv::dock::DsoTriggerDock"
        QT_MOC_LITERAL(26, 12),  // "set_trig_pos"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 7),  // "percent"
        QT_MOC_LITERAL(48, 9),  // "auto_trig"
        QT_MOC_LITERAL(58, 5),  // "index"
        QT_MOC_LITERAL(64, 11),  // "pos_changed"
        QT_MOC_LITERAL(76, 3),  // "pos"
        QT_MOC_LITERAL(80, 12),  // "hold_changed"
        QT_MOC_LITERAL(93, 4),  // "hold"
        QT_MOC_LITERAL(98, 14),  // "margin_changed"
        QT_MOC_LITERAL(113, 6),  // "margin"
        QT_MOC_LITERAL(120, 14),  // "source_changed"
        QT_MOC_LITERAL(135, 12),  // "type_changed"
        QT_MOC_LITERAL(148, 15),  // "channel_changed"
        QT_MOC_LITERAL(164, 2)   // "ch"
    },
    "dsv::dock::DsoTriggerDock",
    "set_trig_pos",
    "",
    "percent",
    "auto_trig",
    "index",
    "pos_changed",
    "pos",
    "hold_changed",
    "hold",
    "margin_changed",
    "margin",
    "source_changed",
    "type_changed",
    "channel_changed",
    "ch"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEdockSCOPEDsoTriggerDockENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   65,    2, 0x0a,    3 /* Public */,
       6,    1,   68,    2, 0x08,    5 /* Private */,
       8,    1,   71,    2, 0x08,    7 /* Private */,
      10,    1,   74,    2, 0x08,    9 /* Private */,
      12,    0,   77,    2, 0x08,   11 /* Private */,
      13,    0,   78,    2, 0x08,   12 /* Private */,
      14,    1,   79,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::dock::DsoTriggerDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEDsoTriggerDockENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEdockSCOPEDsoTriggerDockENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEDsoTriggerDockENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DsoTriggerDock, std::true_type>,
        // method 'set_trig_pos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'auto_trig'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'pos_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'hold_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'margin_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'source_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'type_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'channel_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void dsv::dock::DsoTriggerDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DsoTriggerDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->set_trig_pos((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->auto_trig((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->pos_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->hold_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->margin_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->source_changed(); break;
        case 6: _t->type_changed(); break;
        case 7: _t->channel_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DsoTriggerDock::*)(int );
            if (_t _q_method = &DsoTriggerDock::set_trig_pos; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *dsv::dock::DsoTriggerDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dock::DsoTriggerDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEdockSCOPEDsoTriggerDockENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int dsv::dock::DsoTriggerDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void dsv::dock::DsoTriggerDock::set_trig_pos(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
