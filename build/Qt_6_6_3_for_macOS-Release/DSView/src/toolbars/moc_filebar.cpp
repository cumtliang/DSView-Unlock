/****************************************************************************
** Meta object code from reading C++ file 'filebar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/toolbars/filebar.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filebar.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPEFileBarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPEFileBarENDCLASS = QtMocHelpers::stringData(
    "dsv::toolbars::FileBar",
    "sig_load_file",
    "",
    "sig_save",
    "sig_export",
    "sig_screenShot",
    "sig_load_session",
    "sig_store_session",
    "on_actionLoad_triggered",
    "on_actionStore_triggered",
    "on_actionDefault_triggered",
    "on_actionOpen_triggered",
    "on_actionCapture_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPEFileBarENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[23];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[11];
    char stringdata5[15];
    char stringdata6[17];
    char stringdata7[18];
    char stringdata8[24];
    char stringdata9[25];
    char stringdata10[27];
    char stringdata11[24];
    char stringdata12[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPEFileBarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPEFileBarENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPEFileBarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "dsv::toolbars::FileBar"
        QT_MOC_LITERAL(23, 13),  // "sig_load_file"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 8),  // "sig_save"
        QT_MOC_LITERAL(47, 10),  // "sig_export"
        QT_MOC_LITERAL(58, 14),  // "sig_screenShot"
        QT_MOC_LITERAL(73, 16),  // "sig_load_session"
        QT_MOC_LITERAL(90, 17),  // "sig_store_session"
        QT_MOC_LITERAL(108, 23),  // "on_actionLoad_triggered"
        QT_MOC_LITERAL(132, 24),  // "on_actionStore_triggered"
        QT_MOC_LITERAL(157, 26),  // "on_actionDefault_triggered"
        QT_MOC_LITERAL(184, 23),  // "on_actionOpen_triggered"
        QT_MOC_LITERAL(208, 26)   // "on_actionCapture_triggered"
    },
    "dsv::toolbars::FileBar",
    "sig_load_file",
    "",
    "sig_save",
    "sig_export",
    "sig_screenShot",
    "sig_load_session",
    "sig_store_session",
    "on_actionLoad_triggered",
    "on_actionStore_triggered",
    "on_actionDefault_triggered",
    "on_actionOpen_triggered",
    "on_actionCapture_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEtoolbarsSCOPEFileBarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,
       3,    0,   83,    2, 0x06,    3 /* Public */,
       4,    0,   84,    2, 0x06,    4 /* Public */,
       5,    0,   85,    2, 0x06,    5 /* Public */,
       6,    1,   86,    2, 0x06,    6 /* Public */,
       7,    1,   89,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   92,    2, 0x08,   10 /* Private */,
       9,    0,   93,    2, 0x08,   11 /* Private */,
      10,    0,   94,    2, 0x08,   12 /* Private */,
      11,    0,   95,    2, 0x08,   13 /* Private */,
      12,    0,   96,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::toolbars::FileBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBar::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPEFileBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEtoolbarsSCOPEFileBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPEFileBarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileBar, std::true_type>,
        // method 'sig_load_file'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sig_save'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sig_export'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sig_screenShot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sig_load_session'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sig_store_session'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_actionLoad_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionStore_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDefault_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCapture_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::toolbars::FileBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sig_load_file((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->sig_save(); break;
        case 2: _t->sig_export(); break;
        case 3: _t->sig_screenShot(); break;
        case 4: _t->sig_load_session((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->sig_store_session((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_actionLoad_triggered(); break;
        case 7: _t->on_actionStore_triggered(); break;
        case 8: _t->on_actionDefault_triggered(); break;
        case 9: _t->on_actionOpen_triggered(); break;
        case 10: _t->on_actionCapture_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileBar::*)(QString );
            if (_t _q_method = &FileBar::sig_load_file; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileBar::*)();
            if (_t _q_method = &FileBar::sig_save; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileBar::*)();
            if (_t _q_method = &FileBar::sig_export; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileBar::*)();
            if (_t _q_method = &FileBar::sig_screenShot; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileBar::*)(QString );
            if (_t _q_method = &FileBar::sig_load_session; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FileBar::*)(QString );
            if (_t _q_method = &FileBar::sig_store_session; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *dsv::toolbars::FileBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::toolbars::FileBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPEFileBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QToolBar::qt_metacast(_clname);
}

int dsv::toolbars::FileBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void dsv::toolbars::FileBar::sig_load_file(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dsv::toolbars::FileBar::sig_save()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void dsv::toolbars::FileBar::sig_export()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void dsv::toolbars::FileBar::sig_screenShot()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void dsv::toolbars::FileBar::sig_load_session(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void dsv::toolbars::FileBar::sig_store_session(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
