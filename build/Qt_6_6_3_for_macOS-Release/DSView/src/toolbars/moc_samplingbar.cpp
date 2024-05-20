/****************************************************************************
** Meta object code from reading C++ file 'samplingbar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/toolbars/samplingbar.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'samplingbar.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPESamplingBarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPESamplingBarENDCLASS = QtMocHelpers::stringData(
    "dsv::toolbars::SamplingBar",
    "sig_store_session_data",
    "",
    "on_collect_mode",
    "on_run_stop",
    "on_instant_stop",
    "on_device_selected",
    "on_samplerate_sel",
    "index",
    "on_samplecount_sel",
    "on_sample_limit_changed",
    "on_configure",
    "zero_adj",
    "on_run_stop_action",
    "on_instant_stop_action"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPESamplingBarENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[27];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[12];
    char stringdata5[16];
    char stringdata6[19];
    char stringdata7[18];
    char stringdata8[6];
    char stringdata9[19];
    char stringdata10[24];
    char stringdata11[13];
    char stringdata12[9];
    char stringdata13[19];
    char stringdata14[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPESamplingBarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPESamplingBarENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPESamplingBarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "dsv::toolbars::SamplingBar"
        QT_MOC_LITERAL(27, 22),  // "sig_store_session_data"
        QT_MOC_LITERAL(50, 0),  // ""
        QT_MOC_LITERAL(51, 15),  // "on_collect_mode"
        QT_MOC_LITERAL(67, 11),  // "on_run_stop"
        QT_MOC_LITERAL(79, 15),  // "on_instant_stop"
        QT_MOC_LITERAL(95, 18),  // "on_device_selected"
        QT_MOC_LITERAL(114, 17),  // "on_samplerate_sel"
        QT_MOC_LITERAL(132, 5),  // "index"
        QT_MOC_LITERAL(138, 18),  // "on_samplecount_sel"
        QT_MOC_LITERAL(157, 23),  // "on_sample_limit_changed"
        QT_MOC_LITERAL(181, 12),  // "on_configure"
        QT_MOC_LITERAL(194, 8),  // "zero_adj"
        QT_MOC_LITERAL(203, 18),  // "on_run_stop_action"
        QT_MOC_LITERAL(222, 22)   // "on_instant_stop_action"
    },
    "dsv::toolbars::SamplingBar",
    "sig_store_session_data",
    "",
    "on_collect_mode",
    "on_run_stop",
    "on_instant_stop",
    "on_device_selected",
    "on_samplerate_sel",
    "index",
    "on_samplecount_sel",
    "on_sample_limit_changed",
    "on_configure",
    "zero_adj",
    "on_run_stop_action",
    "on_instant_stop_action"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEtoolbarsSCOPESamplingBarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    1,   91,    2, 0x08,    6 /* Private */,
       9,    1,   94,    2, 0x08,    8 /* Private */,
      10,    0,   97,    2, 0x08,   10 /* Private */,
      11,    0,   98,    2, 0x08,   11 /* Private */,
      12,    0,   99,    2, 0x08,   12 /* Private */,
      13,    0,  100,    2, 0x08,   13 /* Private */,
      14,    0,  101,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::toolbars::SamplingBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBar::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPESamplingBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEtoolbarsSCOPESamplingBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPESamplingBarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SamplingBar, std::true_type>,
        // method 'sig_store_session_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_collect_mode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_run_stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_instant_stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_device_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_samplerate_sel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_samplecount_sel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_sample_limit_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_configure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zero_adj'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_run_stop_action'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_instant_stop_action'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::toolbars::SamplingBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SamplingBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sig_store_session_data(); break;
        case 1: _t->on_collect_mode(); break;
        case 2: _t->on_run_stop(); break;
        case 3: _t->on_instant_stop(); break;
        case 4: _t->on_device_selected(); break;
        case 5: _t->on_samplerate_sel((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_samplecount_sel((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_sample_limit_changed(); break;
        case 8: _t->on_configure(); break;
        case 9: _t->zero_adj(); break;
        case 10: _t->on_run_stop_action(); break;
        case 11: _t->on_instant_stop_action(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SamplingBar::*)();
            if (_t _q_method = &SamplingBar::sig_store_session_data; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *dsv::toolbars::SamplingBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::toolbars::SamplingBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEtoolbarsSCOPESamplingBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IFontForm"))
        return static_cast< IFontForm*>(this);
    return QToolBar::qt_metacast(_clname);
}

int dsv::toolbars::SamplingBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void dsv::toolbars::SamplingBar::sig_store_session_data()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
