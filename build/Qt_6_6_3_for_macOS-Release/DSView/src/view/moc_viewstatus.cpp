/****************************************************************************
** Meta object code from reading C++ file 'viewstatus.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/view/viewstatus.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewstatus.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewStatusENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewStatusENDCLASS = QtMocHelpers::stringData(
    "dsv::view::ViewStatus",
    "clear",
    "",
    "reload",
    "repeat_unshow",
    "set_trig_time",
    "time",
    "set_rle_depth",
    "uint64_t",
    "depth"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewStatusENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[22];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[14];
    char stringdata5[14];
    char stringdata6[5];
    char stringdata7[14];
    char stringdata8[9];
    char stringdata9[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewStatusENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewStatusENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewStatusENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "dsv::view::ViewStatus"
        QT_MOC_LITERAL(22, 5),  // "clear"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 6),  // "reload"
        QT_MOC_LITERAL(36, 13),  // "repeat_unshow"
        QT_MOC_LITERAL(50, 13),  // "set_trig_time"
        QT_MOC_LITERAL(64, 4),  // "time"
        QT_MOC_LITERAL(69, 13),  // "set_rle_depth"
        QT_MOC_LITERAL(83, 8),  // "uint64_t"
        QT_MOC_LITERAL(92, 5)   // "depth"
    },
    "dsv::view::ViewStatus",
    "clear",
    "",
    "reload",
    "repeat_unshow",
    "set_trig_time",
    "time",
    "set_rle_depth",
    "uint64_t",
    "depth"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEviewSCOPEViewStatusENDCLASS[] = {

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
       1,    0,   44,    2, 0x0a,    1 /* Public */,
       3,    0,   45,    2, 0x0a,    2 /* Public */,
       4,    0,   46,    2, 0x0a,    3 /* Public */,
       5,    1,   47,    2, 0x0a,    4 /* Public */,
       7,    1,   50,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::view::ViewStatus::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewStatusENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEviewSCOPEViewStatusENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewStatusENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ViewStatus, std::true_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'repeat_unshow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_trig_time'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>,
        // method 'set_rle_depth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint64_t, std::false_type>
    >,
    nullptr
} };

void dsv::view::ViewStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewStatus *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->reload(); break;
        case 2: _t->repeat_unshow(); break;
        case 3: _t->set_trig_time((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 4: _t->set_rle_depth((*reinterpret_cast< std::add_pointer_t<uint64_t>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *dsv::view::ViewStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::view::ViewStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewStatusENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int dsv::view::ViewStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
