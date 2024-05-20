/****************************************************************************
** Meta object code from reading C++ file 'searchdock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/dock/searchdock.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchdock.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEdockSCOPESearchDockENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEdockSCOPESearchDockENDCLASS = QtMocHelpers::stringData(
    "dsv::dock::SearchDock",
    "on_previous",
    "",
    "on_next",
    "on_set"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEdockSCOPESearchDockENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[22];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEdockSCOPESearchDockENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEdockSCOPESearchDockENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEdockSCOPESearchDockENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "dsv::dock::SearchDock"
        QT_MOC_LITERAL(22, 11),  // "on_previous"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 7),  // "on_next"
        QT_MOC_LITERAL(43, 6)   // "on_set"
    },
    "dsv::dock::SearchDock",
    "on_previous",
    "",
    "on_next",
    "on_set"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEdockSCOPESearchDockENDCLASS[] = {

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
       1,    0,   32,    2, 0x0a,    1 /* Public */,
       3,    0,   33,    2, 0x0a,    2 /* Public */,
       4,    0,   34,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::dock::SearchDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEdockSCOPESearchDockENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEdockSCOPESearchDockENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEdockSCOPESearchDockENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SearchDock, std::true_type>,
        // method 'on_previous'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_next'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_set'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::dock::SearchDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_previous(); break;
        case 1: _t->on_next(); break;
        case 2: _t->on_set(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *dsv::dock::SearchDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dock::SearchDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEdockSCOPESearchDockENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int dsv::dock::SearchDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
