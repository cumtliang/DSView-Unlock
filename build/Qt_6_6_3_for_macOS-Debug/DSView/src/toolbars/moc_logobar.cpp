/****************************************************************************
** Meta object code from reading C++ file 'logobar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/toolbars/logobar.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logobar.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPELogoBarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPELogoBarENDCLASS = QtMocHelpers::stringData(
    "dsv::toolbars::LogoBar",
    "sig_open_doc",
    "",
    "on_actionEn_triggered",
    "on_actionCn_triggered",
    "on_actionAbout_triggered",
    "on_actionManual_triggered",
    "on_actionIssue_triggered",
    "on_action_update",
    "on_action_setting_log",
    "on_open_log_file",
    "on_clear_log_file"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPELogoBarENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[23];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[22];
    char stringdata5[25];
    char stringdata6[26];
    char stringdata7[25];
    char stringdata8[17];
    char stringdata9[22];
    char stringdata10[17];
    char stringdata11[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPELogoBarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPELogoBarENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPELogoBarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "dsv::toolbars::LogoBar"
        QT_MOC_LITERAL(23, 12),  // "sig_open_doc"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 21),  // "on_actionEn_triggered"
        QT_MOC_LITERAL(59, 21),  // "on_actionCn_triggered"
        QT_MOC_LITERAL(81, 24),  // "on_actionAbout_triggered"
        QT_MOC_LITERAL(106, 25),  // "on_actionManual_triggered"
        QT_MOC_LITERAL(132, 24),  // "on_actionIssue_triggered"
        QT_MOC_LITERAL(157, 16),  // "on_action_update"
        QT_MOC_LITERAL(174, 21),  // "on_action_setting_log"
        QT_MOC_LITERAL(196, 16),  // "on_open_log_file"
        QT_MOC_LITERAL(213, 17)   // "on_clear_log_file"
    },
    "dsv::toolbars::LogoBar",
    "sig_open_doc",
    "",
    "on_actionEn_triggered",
    "on_actionCn_triggered",
    "on_actionAbout_triggered",
    "on_actionManual_triggered",
    "on_actionIssue_triggered",
    "on_action_update",
    "on_action_setting_log",
    "on_open_log_file",
    "on_clear_log_file"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEtoolbarsSCOPELogoBarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    0,   78,    2, 0x08,    5 /* Private */,
       7,    0,   79,    2, 0x08,    6 /* Private */,
       8,    0,   80,    2, 0x08,    7 /* Private */,
       9,    0,   81,    2, 0x08,    8 /* Private */,
      10,    0,   82,    2, 0x08,    9 /* Private */,
      11,    0,   83,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::toolbars::LogoBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBar::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPELogoBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEtoolbarsSCOPELogoBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPELogoBarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LogoBar, std::true_type>,
        // method 'sig_open_doc'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionEn_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCn_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAbout_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionManual_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionIssue_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_setting_log'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_open_log_file'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clear_log_file'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::toolbars::LogoBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogoBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sig_open_doc(); break;
        case 1: _t->on_actionEn_triggered(); break;
        case 2: _t->on_actionCn_triggered(); break;
        case 3: _t->on_actionAbout_triggered(); break;
        case 4: _t->on_actionManual_triggered(); break;
        case 5: _t->on_actionIssue_triggered(); break;
        case 6: _t->on_action_update(); break;
        case 7: _t->on_action_setting_log(); break;
        case 8: _t->on_open_log_file(); break;
        case 9: _t->on_clear_log_file(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogoBar::*)();
            if (_t _q_method = &LogoBar::sig_open_doc; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *dsv::toolbars::LogoBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::toolbars::LogoBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPELogoBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QToolBar::qt_metacast(_clname);
}

int dsv::toolbars::LogoBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void dsv::toolbars::LogoBar::sig_open_doc()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
