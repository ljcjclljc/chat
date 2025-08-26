/****************************************************************************
** Meta object code from reading C++ file 'applyfriend.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../applyfriend.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applyfriend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSApplyFriendENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSApplyFriendENDCLASS = QtMocHelpers::stringData(
    "ApplyFriend",
    "ShowMoreLabel",
    "",
    "SlotLabelEnter",
    "SlotRemoveFriendLabel",
    "SlotChangeFriendLabelByTip",
    "ClickLbState",
    "SlotLabelTextChange",
    "text",
    "SlotLabelEditFinished",
    "SlotAddFirendLabelByClickTip",
    "SlotApplySure",
    "SlotApplyCancel"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSApplyFriendENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[12];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[22];
    char stringdata5[27];
    char stringdata6[13];
    char stringdata7[20];
    char stringdata8[5];
    char stringdata9[22];
    char stringdata10[29];
    char stringdata11[14];
    char stringdata12[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSApplyFriendENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSApplyFriendENDCLASS_t qt_meta_stringdata_CLASSApplyFriendENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "ApplyFriend"
        QT_MOC_LITERAL(12, 13),  // "ShowMoreLabel"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 14),  // "SlotLabelEnter"
        QT_MOC_LITERAL(42, 21),  // "SlotRemoveFriendLabel"
        QT_MOC_LITERAL(64, 26),  // "SlotChangeFriendLabelByTip"
        QT_MOC_LITERAL(91, 12),  // "ClickLbState"
        QT_MOC_LITERAL(104, 19),  // "SlotLabelTextChange"
        QT_MOC_LITERAL(124, 4),  // "text"
        QT_MOC_LITERAL(129, 21),  // "SlotLabelEditFinished"
        QT_MOC_LITERAL(151, 28),  // "SlotAddFirendLabelByClickTip"
        QT_MOC_LITERAL(180, 13),  // "SlotApplySure"
        QT_MOC_LITERAL(194, 15)   // "SlotApplyCancel"
    },
    "ApplyFriend",
    "ShowMoreLabel",
    "",
    "SlotLabelEnter",
    "SlotRemoveFriendLabel",
    "SlotChangeFriendLabelByTip",
    "ClickLbState",
    "SlotLabelTextChange",
    "text",
    "SlotLabelEditFinished",
    "SlotAddFirendLabelByClickTip",
    "SlotApplySure",
    "SlotApplyCancel"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSApplyFriendENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    1,   70,    2, 0x0a,    3 /* Public */,
       5,    2,   73,    2, 0x0a,    5 /* Public */,
       7,    1,   78,    2, 0x0a,    8 /* Public */,
       9,    0,   81,    2, 0x0a,   10 /* Public */,
      10,    1,   82,    2, 0x0a,   11 /* Public */,
      11,    0,   85,    2, 0x0a,   13 /* Public */,
      12,    0,   86,    2, 0x0a,   14 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    2,    2,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ApplyFriend::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSApplyFriendENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSApplyFriendENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSApplyFriendENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ApplyFriend, std::true_type>,
        // method 'ShowMoreLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SlotLabelEnter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SlotRemoveFriendLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'SlotChangeFriendLabelByTip'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<ClickLbState, std::false_type>,
        // method 'SlotLabelTextChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SlotLabelEditFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SlotAddFirendLabelByClickTip'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'SlotApplySure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SlotApplyCancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ApplyFriend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ApplyFriend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ShowMoreLabel(); break;
        case 1: _t->SlotLabelEnter(); break;
        case 2: _t->SlotRemoveFriendLabel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->SlotChangeFriendLabelByTip((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ClickLbState>>(_a[2]))); break;
        case 4: _t->SlotLabelTextChange((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->SlotLabelEditFinished(); break;
        case 6: _t->SlotAddFirendLabelByClickTip((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->SlotApplySure(); break;
        case 8: _t->SlotApplyCancel(); break;
        default: ;
        }
    }
}

const QMetaObject *ApplyFriend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplyFriend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSApplyFriendENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ApplyFriend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
