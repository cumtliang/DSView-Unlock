/****************************************************************************
** Meta object code from reading C++ file 'viewport.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/view/viewport.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewport.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewportENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewportENDCLASS = QtMocHelpers::stringData(
    "dsv::view::Viewport",
    "measure_updated",
    "",
    "prgRate",
    "progress",
    "on_trigger_timer",
    "on_drag_timer",
    "show_contextmenu",
    "pos",
    "add_cursor_x",
    "add_cursor_y"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewportENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[20];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[9];
    char stringdata5[17];
    char stringdata6[14];
    char stringdata7[17];
    char stringdata8[4];
    char stringdata9[13];
    char stringdata10[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewportENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewportENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewportENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "dsv::view::Viewport"
        QT_MOC_LITERAL(20, 15),  // "measure_updated"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 7),  // "prgRate"
        QT_MOC_LITERAL(45, 8),  // "progress"
        QT_MOC_LITERAL(54, 16),  // "on_trigger_timer"
        QT_MOC_LITERAL(71, 13),  // "on_drag_timer"
        QT_MOC_LITERAL(85, 16),  // "show_contextmenu"
        QT_MOC_LITERAL(102, 3),  // "pos"
        QT_MOC_LITERAL(106, 12),  // "add_cursor_x"
        QT_MOC_LITERAL(119, 12)   // "add_cursor_y"
    },
    "dsv::view::Viewport",
    "measure_updated",
    "",
    "prgRate",
    "progress",
    "on_trigger_timer",
    "on_drag_timer",
    "show_contextmenu",
    "pos",
    "add_cursor_x",
    "add_cursor_y"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEviewSCOPEViewportENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    1,   57,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   60,    2, 0x08,    4 /* Private */,
       6,    0,   61,    2, 0x08,    5 /* Private */,
       7,    1,   62,    2, 0x08,    6 /* Private */,
       9,    0,   65,    2, 0x08,    8 /* Private */,
      10,    0,   66,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::view::Viewport::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewportENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEviewSCOPEViewportENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewportENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Viewport, std::true_type>,
        // method 'measure_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prgRate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_trigger_timer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_drag_timer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_contextmenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'add_cursor_x'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add_cursor_y'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::view::Viewport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Viewport *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->measure_updated(); break;
        case 1: _t->prgRate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_trigger_timer(); break;
        case 3: _t->on_drag_timer(); break;
        case 4: _t->show_contextmenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 5: _t->add_cursor_x(); break;
        case 6: _t->add_cursor_y(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Viewport::*)();
            if (_t _q_method = &Viewport::measure_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Viewport::*)(int );
            if (_t _q_method = &Viewport::prgRate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *dsv::view::Viewport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::view::Viewport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEViewportENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QWidget::qt_metacast(_clname);
}

int dsv::view::Viewport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void dsv::view::Viewport::measure_updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void dsv::view::Viewport::prgRate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
