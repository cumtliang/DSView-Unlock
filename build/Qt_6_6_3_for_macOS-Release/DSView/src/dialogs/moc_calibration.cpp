/****************************************************************************
** Meta object code from reading C++ file 'calibration.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/dialogs/calibration.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibration.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPECalibrationENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPECalibrationENDCLASS = QtMocHelpers::stringData(
    "dsv::dialogs::Calibration",
    "set_value",
    "",
    "value",
    "on_save",
    "on_abort",
    "on_reset",
    "reload_value"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPECalibrationENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[26];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[8];
    char stringdata5[9];
    char stringdata6[9];
    char stringdata7[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPECalibrationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPECalibrationENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPECalibrationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "dsv::dialogs::Calibration"
        QT_MOC_LITERAL(26, 9),  // "set_value"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 5),  // "value"
        QT_MOC_LITERAL(43, 7),  // "on_save"
        QT_MOC_LITERAL(51, 8),  // "on_abort"
        QT_MOC_LITERAL(60, 8),  // "on_reset"
        QT_MOC_LITERAL(69, 12)   // "reload_value"
    },
    "dsv::dialogs::Calibration",
    "set_value",
    "",
    "value",
    "on_save",
    "on_abort",
    "on_reset",
    "reload_value"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEdialogsSCOPECalibrationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x08,    1 /* Private */,
       4,    0,   47,    2, 0x08,    3 /* Private */,
       5,    0,   48,    2, 0x08,    4 /* Private */,
       6,    0,   49,    2, 0x08,    5 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::dialogs::Calibration::staticMetaObject = { {
    QMetaObject::SuperData::link<DSDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPECalibrationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEdialogsSCOPECalibrationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPECalibrationENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Calibration, std::true_type>,
        // method 'set_value'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_save'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_abort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reload_value'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::dialogs::Calibration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calibration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->set_value((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_save(); break;
        case 2: _t->on_abort(); break;
        case 3: _t->on_reset(); break;
        case 4: _t->reload_value(); break;
        default: ;
        }
    }
}

const QMetaObject *dsv::dialogs::Calibration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dialogs::Calibration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPECalibrationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DSDialog::qt_metacast(_clname);
}

int dsv::dialogs::Calibration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DSDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
