/****************************************************************************
** Meta object code from reading C++ file 'devmode.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/view/devmode.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devmode.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDevModeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDevModeENDCLASS = QtMocHelpers::stringData(
    "dsv::view::DevMode",
    "set_device",
    "",
    "on_mode_change",
    "on_close"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDevModeENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[19];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDevModeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDevModeENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDevModeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "dsv::view::DevMode"
        QT_MOC_LITERAL(19, 10),  // "set_device"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 14),  // "on_mode_change"
        QT_MOC_LITERAL(46, 8)   // "on_close"
    },
    "dsv::view::DevMode",
    "set_device",
    "",
    "on_mode_change",
    "on_close"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEviewSCOPEDevModeENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject dsv::view::DevMode::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDevModeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEviewSCOPEDevModeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDevModeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DevMode, std::true_type>,
        // method 'set_device'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_mode_change'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_close'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::view::DevMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DevMode *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->set_device(); break;
        case 1: _t->on_mode_change(); break;
        case 2: _t->on_close(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *dsv::view::DevMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::view::DevMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDevModeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int dsv::view::DevMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
