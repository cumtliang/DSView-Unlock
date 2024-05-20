/****************************************************************************
** Meta object code from reading C++ file 'storeprogress.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/dialogs/storeprogress.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'storeprogress.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEStoreProgressENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEStoreProgressENDCLASS = QtMocHelpers::stringData(
    "dsv::dialogs::StoreProgress",
    "save_done",
    "",
    "save_run",
    "ISessionDataGetter*",
    "getter",
    "export_run",
    "on_progress_updated",
    "timeout",
    "on_change_file",
    "on_ck_origin",
    "ck",
    "on_ck_compress"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEStoreProgressENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[28];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[20];
    char stringdata5[7];
    char stringdata6[11];
    char stringdata7[20];
    char stringdata8[8];
    char stringdata9[15];
    char stringdata10[13];
    char stringdata11[3];
    char stringdata12[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEStoreProgressENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEStoreProgressENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEStoreProgressENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "dsv::dialogs::StoreProgress"
        QT_MOC_LITERAL(28, 9),  // "save_done"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 8),  // "save_run"
        QT_MOC_LITERAL(48, 19),  // "ISessionDataGetter*"
        QT_MOC_LITERAL(68, 6),  // "getter"
        QT_MOC_LITERAL(75, 10),  // "export_run"
        QT_MOC_LITERAL(86, 19),  // "on_progress_updated"
        QT_MOC_LITERAL(106, 7),  // "timeout"
        QT_MOC_LITERAL(114, 14),  // "on_change_file"
        QT_MOC_LITERAL(129, 12),  // "on_ck_origin"
        QT_MOC_LITERAL(142, 2),  // "ck"
        QT_MOC_LITERAL(145, 14)   // "on_ck_compress"
    },
    "dsv::dialogs::StoreProgress",
    "save_done",
    "",
    "save_run",
    "ISessionDataGetter*",
    "getter",
    "export_run",
    "on_progress_updated",
    "timeout",
    "on_change_file",
    "on_ck_origin",
    "ck",
    "on_ck_compress"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEdialogsSCOPEStoreProgressENDCLASS[] = {

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
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   63,    2, 0x0a,    2 /* Public */,
       6,    0,   66,    2, 0x0a,    4 /* Public */,
       7,    0,   67,    2, 0x08,    5 /* Private */,
       8,    0,   68,    2, 0x08,    6 /* Private */,
       9,    0,   69,    2, 0x08,    7 /* Private */,
      10,    1,   70,    2, 0x08,    8 /* Private */,
      12,    1,   73,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::dialogs::StoreProgress::staticMetaObject = { {
    QMetaObject::SuperData::link<DSDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEStoreProgressENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEdialogsSCOPEStoreProgressENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEStoreProgressENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StoreProgress, std::true_type>,
        // method 'save_done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'save_run'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ISessionDataGetter *, std::false_type>,
        // method 'export_run'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_progress_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_change_file'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ck_origin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_ck_compress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void dsv::dialogs::StoreProgress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StoreProgress *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->save_done(); break;
        case 1: _t->save_run((*reinterpret_cast< std::add_pointer_t<ISessionDataGetter*>>(_a[1]))); break;
        case 2: _t->export_run(); break;
        case 3: _t->on_progress_updated(); break;
        case 4: _t->timeout(); break;
        case 5: _t->on_change_file(); break;
        case 6: _t->on_ck_origin((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_ck_compress((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StoreProgress::*)();
            if (_t _q_method = &StoreProgress::save_done; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *dsv::dialogs::StoreProgress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dialogs::StoreProgress::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEdialogsSCOPEStoreProgressENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DSDialog::qt_metacast(_clname);
}

int dsv::dialogs::StoreProgress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DSDialog::qt_metacall(_c, _id, _a);
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
void dsv::dialogs::StoreProgress::save_done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
