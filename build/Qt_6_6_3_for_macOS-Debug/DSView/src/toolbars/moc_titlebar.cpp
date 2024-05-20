/****************************************************************************
** Meta object code from reading C++ file 'titlebar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/toolbars/titlebar.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'titlebar.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPETitleBarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPETitleBarENDCLASS = QtMocHelpers::stringData(
    "dsv::toolbars::TitleBar",
    "normalShow",
    "",
    "maximizedShow",
    "showMaxRestore",
    "setRestoreButton",
    "max",
    "IsMoving"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPETitleBarENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[24];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[15];
    char stringdata5[17];
    char stringdata6[4];
    char stringdata7[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPETitleBarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPETitleBarENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPETitleBarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "dsv::toolbars::TitleBar"
        QT_MOC_LITERAL(24, 10),  // "normalShow"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 13),  // "maximizedShow"
        QT_MOC_LITERAL(50, 14),  // "showMaxRestore"
        QT_MOC_LITERAL(65, 16),  // "setRestoreButton"
        QT_MOC_LITERAL(82, 3),  // "max"
        QT_MOC_LITERAL(86, 8)   // "IsMoving"
    },
    "dsv::toolbars::TitleBar",
    "normalShow",
    "",
    "maximizedShow",
    "showMaxRestore",
    "setRestoreButton",
    "max",
    "IsMoving"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEtoolbarsSCOPETitleBarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   46,    2, 0x0a,    3 /* Public */,
       5,    1,   47,    2, 0x0a,    4 /* Public */,
       7,    0,   50,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Bool,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::toolbars::TitleBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPETitleBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEtoolbarsSCOPETitleBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPETitleBarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TitleBar, std::true_type>,
        // method 'normalShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maximizedShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMaxRestore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setRestoreButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'IsMoving'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void dsv::toolbars::TitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TitleBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->normalShow(); break;
        case 1: _t->maximizedShow(); break;
        case 2: _t->showMaxRestore(); break;
        case 3: _t->setRestoreButton((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: { bool _r = _t->IsMoving();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TitleBar::*)();
            if (_t _q_method = &TitleBar::normalShow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)();
            if (_t _q_method = &TitleBar::maximizedShow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *dsv::toolbars::TitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::toolbars::TitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPETitleBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int dsv::toolbars::TitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void dsv::toolbars::TitleBar::normalShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void dsv::toolbars::TitleBar::maximizedShow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
