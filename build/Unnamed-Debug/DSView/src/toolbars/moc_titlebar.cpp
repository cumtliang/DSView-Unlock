/****************************************************************************
** Meta object code from reading C++ file 'titlebar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/toolbars/titlebar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'titlebar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__toolbars__TitleBar_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__toolbars__TitleBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__toolbars__TitleBar_t qt_meta_stringdata_dsv__toolbars__TitleBar = {
    {
QT_MOC_LITERAL(0, 0, 23), // "dsv::toolbars::TitleBar"
QT_MOC_LITERAL(1, 24, 10), // "normalShow"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "maximizedShow"
QT_MOC_LITERAL(4, 50, 14), // "showMaxRestore"
QT_MOC_LITERAL(5, 65, 16), // "setRestoreButton"
QT_MOC_LITERAL(6, 82, 3), // "max"
QT_MOC_LITERAL(7, 86, 8) // "IsMoving"

    },
    "dsv::toolbars::TitleBar\0normalShow\0\0"
    "maximizedShow\0showMaxRestore\0"
    "setRestoreButton\0max\0IsMoving"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__toolbars__TitleBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Bool,

       0        // eod
};

void dsv::toolbars::TitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TitleBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->normalShow(); break;
        case 1: _t->maximizedShow(); break;
        case 2: _t->showMaxRestore(); break;
        case 3: _t->setRestoreButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { bool _r = _t->IsMoving();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TitleBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::normalShow)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::maximizedShow)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::toolbars::TitleBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_dsv__toolbars__TitleBar.data,
    qt_meta_data_dsv__toolbars__TitleBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::toolbars::TitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::toolbars::TitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__toolbars__TitleBar.stringdata0))
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
            *reinterpret_cast<int*>(_a[0]) = -1;
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
QT_END_MOC_NAMESPACE
