/****************************************************************************
** Meta object code from reading C++ file 'decoderoptionsdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/dialogs/decoderoptionsdlg.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decoderoptionsdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDecoderOptionsDlgENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDecoderOptionsDlgENDCLASS = QtMocHelpers::stringData(
    "dsv::dialogs::DecoderOptionsDlg",
    "on_probe_selected",
    "",
    "on_region_set",
    "index",
    "on_accept",
    "on_trans_pramas"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDecoderOptionsDlgENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[32];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[6];
    char stringdata5[10];
    char stringdata6[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDecoderOptionsDlgENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDecoderOptionsDlgENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDecoderOptionsDlgENDCLASS = {
    {
        QT_MOC_LITERAL(0, 31),  // "dsv::dialogs::DecoderOptionsDlg"
        QT_MOC_LITERAL(32, 17),  // "on_probe_selected"
        QT_MOC_LITERAL(50, 0),  // ""
        QT_MOC_LITERAL(51, 13),  // "on_region_set"
        QT_MOC_LITERAL(65, 5),  // "index"
        QT_MOC_LITERAL(71, 9),  // "on_accept"
        QT_MOC_LITERAL(81, 15)   // "on_trans_pramas"
    },
    "dsv::dialogs::DecoderOptionsDlg",
    "on_probe_selected",
    "",
    "on_region_set",
    "index",
    "on_accept",
    "on_trans_pramas"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEdialogsSCOPEDecoderOptionsDlgENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x08,    1 /* Private */,
       3,    1,   41,    2, 0x08,    3 /* Private */,
       5,    0,   44,    2, 0x08,    5 /* Private */,
       6,    0,   45,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::dialogs::DecoderOptionsDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<DSDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDecoderOptionsDlgENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEdialogsSCOPEDecoderOptionsDlgENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDecoderOptionsDlgENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DecoderOptionsDlg, std::true_type>,
        // method 'on_probe_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_region_set'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_trans_pramas'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::dialogs::DecoderOptionsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DecoderOptionsDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_probe_selected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_region_set((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_accept(); break;
        case 3: _t->on_trans_pramas(); break;
        default: ;
        }
    }
}

const QMetaObject *dsv::dialogs::DecoderOptionsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dialogs::DecoderOptionsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEDecoderOptionsDlgENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DSDialog::qt_metacast(_clname);
}

int dsv::dialogs::DecoderOptionsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DSDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
