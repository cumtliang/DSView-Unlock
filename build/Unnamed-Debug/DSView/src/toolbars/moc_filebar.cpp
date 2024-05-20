/****************************************************************************
** Meta object code from reading C++ file 'filebar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/toolbars/filebar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filebar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__toolbars__FileBar_t {
    QByteArrayData data[13];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__toolbars__FileBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__toolbars__FileBar_t qt_meta_stringdata_dsv__toolbars__FileBar = {
    {
QT_MOC_LITERAL(0, 0, 22), // "dsv::toolbars::FileBar"
QT_MOC_LITERAL(1, 23, 13), // "sig_load_file"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "sig_save"
QT_MOC_LITERAL(4, 47, 10), // "sig_export"
QT_MOC_LITERAL(5, 58, 14), // "sig_screenShot"
QT_MOC_LITERAL(6, 73, 16), // "sig_load_session"
QT_MOC_LITERAL(7, 90, 17), // "sig_store_session"
QT_MOC_LITERAL(8, 108, 23), // "on_actionLoad_triggered"
QT_MOC_LITERAL(9, 132, 24), // "on_actionStore_triggered"
QT_MOC_LITERAL(10, 157, 26), // "on_actionDefault_triggered"
QT_MOC_LITERAL(11, 184, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(12, 208, 26) // "on_actionCapture_triggered"

    },
    "dsv::toolbars::FileBar\0sig_load_file\0"
    "\0sig_save\0sig_export\0sig_screenShot\0"
    "sig_load_session\0sig_store_session\0"
    "on_actionLoad_triggered\0"
    "on_actionStore_triggered\0"
    "on_actionDefault_triggered\0"
    "on_actionOpen_triggered\0"
    "on_actionCapture_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__toolbars__FileBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    0,   72,    2, 0x06 /* Public */,
       4,    0,   73,    2, 0x06 /* Public */,
       5,    0,   74,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,
       7,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,

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

void dsv::toolbars::FileBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sig_load_file((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sig_save(); break;
        case 2: _t->sig_export(); break;
        case 3: _t->sig_screenShot(); break;
        case 4: _t->sig_load_session((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->sig_store_session((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileBar::sig_load_file)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileBar::sig_save)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileBar::sig_export)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileBar::sig_screenShot)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileBar::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileBar::sig_load_session)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FileBar::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileBar::sig_store_session)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::toolbars::FileBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBar::staticMetaObject>(),
    qt_meta_stringdata_dsv__toolbars__FileBar.data,
    qt_meta_data_dsv__toolbars__FileBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::toolbars::FileBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::toolbars::FileBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__toolbars__FileBar.stringdata0))
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
            *reinterpret_cast<int*>(_a[0]) = -1;
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
QT_END_MOC_NAMESPACE
