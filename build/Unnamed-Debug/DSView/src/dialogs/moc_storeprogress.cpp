/****************************************************************************
** Meta object code from reading C++ file 'storeprogress.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../DSView/src/dialogs/storeprogress.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'storeprogress.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dsv__dialogs__StoreProgress_t {
    QByteArrayData data[13];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dsv__dialogs__StoreProgress_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dsv__dialogs__StoreProgress_t qt_meta_stringdata_dsv__dialogs__StoreProgress = {
    {
QT_MOC_LITERAL(0, 0, 27), // "dsv::dialogs::StoreProgress"
QT_MOC_LITERAL(1, 28, 9), // "save_done"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "save_run"
QT_MOC_LITERAL(4, 48, 19), // "ISessionDataGetter*"
QT_MOC_LITERAL(5, 68, 6), // "getter"
QT_MOC_LITERAL(6, 75, 10), // "export_run"
QT_MOC_LITERAL(7, 86, 19), // "on_progress_updated"
QT_MOC_LITERAL(8, 106, 7), // "timeout"
QT_MOC_LITERAL(9, 114, 14), // "on_change_file"
QT_MOC_LITERAL(10, 129, 12), // "on_ck_origin"
QT_MOC_LITERAL(11, 142, 2), // "ck"
QT_MOC_LITERAL(12, 145, 14) // "on_ck_compress"

    },
    "dsv::dialogs::StoreProgress\0save_done\0"
    "\0save_run\0ISessionDataGetter*\0getter\0"
    "export_run\0on_progress_updated\0timeout\0"
    "on_change_file\0on_ck_origin\0ck\0"
    "on_ck_compress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dsv__dialogs__StoreProgress[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    1,   62,    2, 0x08 /* Private */,
      12,    1,   65,    2, 0x08 /* Private */,

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

void dsv::dialogs::StoreProgress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StoreProgress *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->save_done(); break;
        case 1: _t->save_run((*reinterpret_cast< ISessionDataGetter*(*)>(_a[1]))); break;
        case 2: _t->export_run(); break;
        case 3: _t->on_progress_updated(); break;
        case 4: _t->timeout(); break;
        case 5: _t->on_change_file(); break;
        case 6: _t->on_ck_origin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_ck_compress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StoreProgress::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StoreProgress::save_done)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dsv::dialogs::StoreProgress::staticMetaObject = { {
    QMetaObject::SuperData::link<DSDialog::staticMetaObject>(),
    qt_meta_stringdata_dsv__dialogs__StoreProgress.data,
    qt_meta_data_dsv__dialogs__StoreProgress,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dsv::dialogs::StoreProgress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::dialogs::StoreProgress::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dsv__dialogs__StoreProgress.stringdata0))
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
            *reinterpret_cast<int*>(_a[0]) = -1;
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
QT_END_MOC_NAMESPACE
