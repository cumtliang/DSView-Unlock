/****************************************************************************
** Meta object code from reading C++ file 'protocolexp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/dialogs/protocolexp.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocolexp.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEProtocolExpENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEProtocolExpENDCLASS = QtMocHelpers::stringData(
    "dsv::dialogs::ProtocolExp",
    "export_progress",
    "",
    "percent",
    "cancel_export"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEProtocolExpENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[26];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEProtocolExpENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEProtocolExpENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEProtocolExpENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "dsv::dialogs::ProtocolExp"
        QT_MOC_LITERAL(26, 15),  // "export_progress"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 7),  // "percent"
        QT_MOC_LITERAL(51, 13)   // "cancel_export"
    },
    "dsv::dialogs::ProtocolExp",
    "export_progress",
    "",
    "percent",
    "cancel_export"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEdialogsSCOPEProtocolExpENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   29,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::dialogs::ProtocolExp::staticMetaObject = { {
    QMetaObject::SuperData::link<DSDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEProtocolExpENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEdialogsSCOPEProtocolExpENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEProtocolExpENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProtocolExp, std::true_type>,
        // method 'export_progress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cancel_export'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::dialogs::ProtocolExp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProtocolExp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->export_progress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->cancel_export(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProtocolExp::*)(int );
            if (_t _q_method = &ProtocolExp::export_progress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *dsv::dialogs::ProtocolExp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dialogs::ProtocolExp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEProtocolExpENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DSDialog::qt_metacast(_clname);
}

int dsv::dialogs::ProtocolExp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DSDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void dsv::dialogs::ProtocolExp::export_progress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
