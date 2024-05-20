/****************************************************************************
** Meta object code from reading C++ file 'mainframe.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/appcore/mainframe.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainframe.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainFrameENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainFrameENDCLASS = QtMocHelpers::stringData(
    "dsv::appcore::MainFrame",
    "unfreezing",
    "",
    "showNormal",
    "showMaximized",
    "showMinimized",
    "show_doc",
    "setTaskbarProgress",
    "progress"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainFrameENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[24];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[14];
    char stringdata5[14];
    char stringdata6[9];
    char stringdata7[19];
    char stringdata8[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainFrameENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainFrameENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainFrameENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "dsv::appcore::MainFrame"
        QT_MOC_LITERAL(24, 10),  // "unfreezing"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 10),  // "showNormal"
        QT_MOC_LITERAL(47, 13),  // "showMaximized"
        QT_MOC_LITERAL(61, 13),  // "showMinimized"
        QT_MOC_LITERAL(75, 8),  // "show_doc"
        QT_MOC_LITERAL(84, 18),  // "setTaskbarProgress"
        QT_MOC_LITERAL(103, 8)   // "progress"
    },
    "dsv::appcore::MainFrame",
    "unfreezing",
    "",
    "showNormal",
    "showMaximized",
    "showMinimized",
    "show_doc",
    "setTaskbarProgress",
    "progress"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEappcoreSCOPEMainFrameENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    1 /* Public */,
       3,    0,   51,    2, 0x0a,    2 /* Public */,
       4,    0,   52,    2, 0x0a,    3 /* Public */,
       5,    0,   53,    2, 0x0a,    4 /* Public */,
       6,    0,   54,    2, 0x0a,    5 /* Public */,
       7,    1,   55,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::appcore::MainFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainFrameENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEappcoreSCOPEMainFrameENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainFrameENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainFrame, std::true_type>,
        // method 'unfreezing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showNormal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMaximized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMinimized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_doc'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTaskbarProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void dsv::appcore::MainFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainFrame *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->unfreezing(); break;
        case 1: _t->showNormal(); break;
        case 2: _t->showMaximized(); break;
        case 3: _t->showMinimized(); break;
        case 4: _t->show_doc(); break;
        case 5: _t->setTaskbarProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *dsv::appcore::MainFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::appcore::MainFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainFrameENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int dsv::appcore::MainFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
