/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DSView/src/appcore/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainWindowENDCLASS = QtMocHelpers::stringData(
    "dsv::appcore::MainWindow",
    "prgRate",
    "",
    "progress",
    "switchTheme",
    "style",
    "restore_dock",
    "on_load_file",
    "file_name",
    "on_open_doc",
    "on_protocol",
    "visible",
    "on_trigger",
    "on_measure",
    "on_search",
    "on_screenShot",
    "on_save",
    "on_export",
    "on_load_session",
    "name",
    "on_store_session",
    "on_data_updated",
    "on_session_error",
    "on_signals_changed",
    "on_receive_trigger",
    "trigger_pos",
    "on_frame_ended",
    "on_frame_began",
    "on_decode_done",
    "on_receive_data_len",
    "len",
    "on_cur_snap_samplerate_changed",
    "on_trigger_message",
    "msg",
    "on_delay_prop_msg"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainWindowENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[25];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[12];
    char stringdata5[6];
    char stringdata6[13];
    char stringdata7[13];
    char stringdata8[10];
    char stringdata9[12];
    char stringdata10[12];
    char stringdata11[8];
    char stringdata12[11];
    char stringdata13[11];
    char stringdata14[10];
    char stringdata15[14];
    char stringdata16[8];
    char stringdata17[10];
    char stringdata18[16];
    char stringdata19[5];
    char stringdata20[17];
    char stringdata21[16];
    char stringdata22[17];
    char stringdata23[19];
    char stringdata24[19];
    char stringdata25[12];
    char stringdata26[15];
    char stringdata27[15];
    char stringdata28[15];
    char stringdata29[20];
    char stringdata30[4];
    char stringdata31[31];
    char stringdata32[19];
    char stringdata33[4];
    char stringdata34[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainWindowENDCLASS_t qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "dsv::appcore::MainWindow"
        QT_MOC_LITERAL(25, 7),  // "prgRate"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 8),  // "progress"
        QT_MOC_LITERAL(43, 11),  // "switchTheme"
        QT_MOC_LITERAL(55, 5),  // "style"
        QT_MOC_LITERAL(61, 12),  // "restore_dock"
        QT_MOC_LITERAL(74, 12),  // "on_load_file"
        QT_MOC_LITERAL(87, 9),  // "file_name"
        QT_MOC_LITERAL(97, 11),  // "on_open_doc"
        QT_MOC_LITERAL(109, 11),  // "on_protocol"
        QT_MOC_LITERAL(121, 7),  // "visible"
        QT_MOC_LITERAL(129, 10),  // "on_trigger"
        QT_MOC_LITERAL(140, 10),  // "on_measure"
        QT_MOC_LITERAL(151, 9),  // "on_search"
        QT_MOC_LITERAL(161, 13),  // "on_screenShot"
        QT_MOC_LITERAL(175, 7),  // "on_save"
        QT_MOC_LITERAL(183, 9),  // "on_export"
        QT_MOC_LITERAL(193, 15),  // "on_load_session"
        QT_MOC_LITERAL(209, 4),  // "name"
        QT_MOC_LITERAL(214, 16),  // "on_store_session"
        QT_MOC_LITERAL(231, 15),  // "on_data_updated"
        QT_MOC_LITERAL(247, 16),  // "on_session_error"
        QT_MOC_LITERAL(264, 18),  // "on_signals_changed"
        QT_MOC_LITERAL(283, 18),  // "on_receive_trigger"
        QT_MOC_LITERAL(302, 11),  // "trigger_pos"
        QT_MOC_LITERAL(314, 14),  // "on_frame_ended"
        QT_MOC_LITERAL(329, 14),  // "on_frame_began"
        QT_MOC_LITERAL(344, 14),  // "on_decode_done"
        QT_MOC_LITERAL(359, 19),  // "on_receive_data_len"
        QT_MOC_LITERAL(379, 3),  // "len"
        QT_MOC_LITERAL(383, 30),  // "on_cur_snap_samplerate_changed"
        QT_MOC_LITERAL(414, 18),  // "on_trigger_message"
        QT_MOC_LITERAL(433, 3),  // "msg"
        QT_MOC_LITERAL(437, 17)   // "on_delay_prop_msg"
    },
    "dsv::appcore::MainWindow",
    "prgRate",
    "",
    "progress",
    "switchTheme",
    "style",
    "restore_dock",
    "on_load_file",
    "file_name",
    "on_open_doc",
    "on_protocol",
    "visible",
    "on_trigger",
    "on_measure",
    "on_search",
    "on_screenShot",
    "on_save",
    "on_export",
    "on_load_session",
    "name",
    "on_store_session",
    "on_data_updated",
    "on_session_error",
    "on_signals_changed",
    "on_receive_trigger",
    "trigger_pos",
    "on_frame_ended",
    "on_frame_began",
    "on_decode_done",
    "on_receive_data_len",
    "len",
    "on_cur_snap_samplerate_changed",
    "on_trigger_message",
    "msg",
    "on_delay_prop_msg"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdsvSCOPEappcoreSCOPEMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  164,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,  167,    2, 0x0a,    3 /* Public */,
       6,    0,  170,    2, 0x0a,    5 /* Public */,
       7,    1,  171,    2, 0x08,    6 /* Private */,
       9,    0,  174,    2, 0x08,    8 /* Private */,
      10,    1,  175,    2, 0x08,    9 /* Private */,
      12,    1,  178,    2, 0x08,   11 /* Private */,
      13,    1,  181,    2, 0x08,   13 /* Private */,
      14,    1,  184,    2, 0x08,   15 /* Private */,
      15,    0,  187,    2, 0x08,   17 /* Private */,
      16,    0,  188,    2, 0x08,   18 /* Private */,
      17,    0,  189,    2, 0x08,   19 /* Private */,
      18,    1,  190,    2, 0x08,   20 /* Private */,
      20,    1,  193,    2, 0x08,   22 /* Private */,
      21,    0,  196,    2, 0x08,   24 /* Private */,
      22,    0,  197,    2, 0x08,   25 /* Private */,
      23,    0,  198,    2, 0x08,   26 /* Private */,
      24,    1,  199,    2, 0x08,   27 /* Private */,
      26,    0,  202,    2, 0x08,   29 /* Private */,
      27,    0,  203,    2, 0x08,   30 /* Private */,
      28,    0,  204,    2, 0x08,   31 /* Private */,
      29,    1,  205,    2, 0x08,   32 /* Private */,
      31,    0,  208,    2, 0x08,   34 /* Private */,
      32,    1,  209,    2, 0x08,   35 /* Private */,
      34,    0,  212,    2, 0x08,   37 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   19,
    QMetaType::Bool, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dsv::appcore::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdsvSCOPEappcoreSCOPEMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'prgRate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'switchTheme'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'restore_dock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_load_file'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_open_doc'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_protocol'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_trigger'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_measure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_search'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_screenShot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_save'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_export'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_load_session'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_store_session'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_data_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_session_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signals_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_receive_trigger'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'on_frame_ended'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_frame_began'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_decode_done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_receive_data_len'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'on_cur_snap_samplerate_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_trigger_message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_delay_prop_msg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dsv::appcore::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->prgRate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->switchTheme((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->restore_dock(); break;
        case 3: _t->on_load_file((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_open_doc(); break;
        case 5: _t->on_protocol((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_trigger((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_measure((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_search((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_screenShot(); break;
        case 10: _t->on_save(); break;
        case 11: _t->on_export(); break;
        case 12: { bool _r = _t->on_load_session((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->on_store_session((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->on_data_updated(); break;
        case 15: _t->on_session_error(); break;
        case 16: _t->on_signals_changed(); break;
        case 17: _t->on_receive_trigger((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 18: _t->on_frame_ended(); break;
        case 19: _t->on_frame_began(); break;
        case 20: _t->on_decode_done(); break;
        case 21: _t->on_receive_data_len((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 22: _t->on_cur_snap_samplerate_changed(); break;
        case 23: _t->on_trigger_message((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->on_delay_prop_msg(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int );
            if (_t _q_method = &MainWindow::prgRate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *dsv::appcore::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dsv::appcore::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdsvSCOPEappcoreSCOPEMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ISessionCallback"))
        return static_cast< ISessionCallback*>(this);
    if (!strcmp(_clname, "IMainForm"))
        return static_cast< IMainForm*>(this);
    if (!strcmp(_clname, "ISessionDataGetter"))
        return static_cast< ISessionDataGetter*>(this);
    if (!strcmp(_clname, "IMessageListener"))
        return static_cast< IMessageListener*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int dsv::appcore::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void dsv::appcore::MainWindow::prgRate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
