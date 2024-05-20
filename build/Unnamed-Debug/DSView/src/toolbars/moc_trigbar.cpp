/****************************************************************************
** Meta object code from reading C++ file 'trigbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/toolbars/trigbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trigbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__toolbars__TrigBar_t {
    QByteArrayData data[20];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__toolbars__TrigBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__toolbars__TrigBar_t qt_meta_stringdata_dsv__toolbars__TrigBar = {
    {
QT_MOC_LITERAL(0, 0, 22), // "dsv::toolbars::TrigBar"
QT_MOC_LITERAL(1, 23, 12), // "sig_setTheme"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "style"
QT_MOC_LITERAL(4, 43, 12), // "sig_protocol"
QT_MOC_LITERAL(5, 56, 7), // "visible"
QT_MOC_LITERAL(6, 64, 11), // "sig_trigger"
QT_MOC_LITERAL(7, 76, 11), // "sig_measure"
QT_MOC_LITERAL(8, 88, 10), // "sig_search"
QT_MOC_LITERAL(9, 99, 18), // "sig_show_lissajous"
QT_MOC_LITERAL(10, 118, 23), // "on_actionDark_triggered"
QT_MOC_LITERAL(11, 142, 24), // "on_actionLight_triggered"
QT_MOC_LITERAL(12, 167, 28), // "on_actionLissajous_triggered"
QT_MOC_LITERAL(13, 196, 22), // "on_actionFft_triggered"
QT_MOC_LITERAL(14, 219, 23), // "on_actionMath_triggered"
QT_MOC_LITERAL(15, 243, 18), // "on_display_setting"
QT_MOC_LITERAL(16, 262, 16), // "protocol_clicked"
QT_MOC_LITERAL(17, 279, 15), // "trigger_clicked"
QT_MOC_LITERAL(18, 295, 15), // "measure_clicked"
QT_MOC_LITERAL(19, 311, 14) // "search_clicked"

    },
    "dsv::toolbars::TrigBar\0sig_setTheme\0"
    "\0style\0sig_protocol\0visible\0sig_trigger\0"
    "sig_measure\0sig_search\0sig_show_lissajous\0"
    "on_actionDark_triggered\0"
    "on_actionLight_triggered\0"
    "on_actionLissajous_triggered\0"
    "on_actionFft_triggered\0on_actionMath_triggered\0"
    "on_display_setting\0protocol_clicked\0"
    "trigger_clicked\0measure_clicked\0"
    "search_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__toolbars__TrigBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       6,    1,  100,    2, 0x06 /* Public */,
       7,    1,  103,    2, 0x06 /* Public */,
       8,    1,  106,    2, 0x06 /* Public */,
       9,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    0,  114,    2, 0x08 /* Private */,
      13,    0,  115,    2, 0x08 /* Private */,
      14,    0,  116,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,
      16,    0,  118,    2, 0x0a /* Public */,
      17,    0,  119,    2, 0x0a /* Public */,
      18,    0,  120,    2, 0x0a /* Public */,
      19,    0,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,

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
    QMetaType::Void,

       0        // eod
};

void dsv::toolbars::TrigBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrigBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sig_setTheme((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sig_protocol((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sig_trigger((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sig_measure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->sig_search((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->sig_show_lissajous((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_actionDark_triggered(); break;
        case 7: _t->on_actionLight_triggered(); break;
        case 8: _t->on_actionLissajous_triggered(); break;
        case 9: _t->on_actionFft_triggered(); break;
        case 10: _t->on_actionMath_triggered(); break;
        case 11: _t->on_display_setting(); break;
        case 12: _t->protocol_clicked(); break;
        case 13: _t->trigger_clicked(); break;
        case 14: _t->measure_clicked(); break;
        case 15: _t->search_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TrigBar::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrigBar::sig_setTheme)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TrigBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrigBar::sig_protocol)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TrigBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrigBar::sig_trigger)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TrigBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrigBar::sig_measure)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TrigBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrigBar::sig_search)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TrigBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrigBar::sig_show_lissajous)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::toolbars::TrigBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBar::staticMetaObject>(),
    qt_meta_stringdata_dsv__toolbars__TrigBar.data,
    qt_meta_data_dsv__toolbars__TrigBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::toolbars::TrigBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::toolbars::TrigBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__toolbars__TrigBar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QToolBar::qt_metacast(_clname);
}

int dsv::toolbars::TrigBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void dsv::toolbars::TrigBar::sig_setTheme(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dsv::toolbars::TrigBar::sig_protocol(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dsv::toolbars::TrigBar::sig_trigger(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void dsv::toolbars::TrigBar::sig_measure(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void dsv::toolbars::TrigBar::sig_search(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void dsv::toolbars::TrigBar::sig_show_lissajous(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
