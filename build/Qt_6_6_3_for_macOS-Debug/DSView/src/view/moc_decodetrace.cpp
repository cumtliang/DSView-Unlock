/****************************************************************************
** Meta object code from reading C++ file 'decodetrace.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/view/decodetrace.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decodetrace.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDecodeTraceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDecodeTraceENDCLASS = QtMocHelpers::stringData(
    "dsv::view::DecodeTrace",
    "decoded_progress",
    "",
    "progress",
    "on_new_decode_data",
    "on_decode_done"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDecodeTraceENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[23];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[19];
    char stringdata5[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDecodeTraceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDecodeTraceENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDecodeTraceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "dsv::view::DecodeTrace"
        QT_MOC_LITERAL(23, 16),  // "decoded_progress"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 8),  // "progress"
        QT_MOC_LITERAL(50, 18),  // "on_new_decode_data"
        QT_MOC_LITERAL(69, 14)   // "on_decode_done"
    },
    "dsv::view::DecodeTrace",
    "decoded_progress",
    "",
    "progress",
    "on_new_decode_data",
    "on_decode_done"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEviewSCOPEDecodeTraceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   35,    2, 0x08,    3 /* Private */,
       5,    0,   36,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::view::DecodeTrace::staticMetaObject = { {
    QMetaObject::SuperData::link<Trace::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDecodeTraceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEviewSCOPEDecodeTraceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDecodeTraceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DecodeTrace, std::true_type>,
        // method 'decoded_progress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_new_decode_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_decode_done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::view::DecodeTrace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DecodeTrace *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->decoded_progress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_new_decode_data(); break;
        case 2: _t->on_decode_done(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DecodeTrace::*)(int );
            if (_t _q_method = &DecodeTrace::decoded_progress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *dsv::view::DecodeTrace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::view::DecodeTrace::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEviewSCOPEDecodeTraceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Trace::qt_metacast(_clname);
}

int dsv::view::DecodeTrace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Trace::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void dsv::view::DecodeTrace::decoded_progress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
