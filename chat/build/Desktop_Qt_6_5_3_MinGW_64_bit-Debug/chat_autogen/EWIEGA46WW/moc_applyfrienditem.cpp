/****************************************************************************
** Meta object code from reading C++ file 'applyfrienditem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../applyfrienditem.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applyfrienditem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSApplyFriendItemENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSApplyFriendItemENDCLASS = QtMocHelpers::stringData(
    "ApplyFriendItem",
    "sig_auth_friend",
    "",
    "std::shared_ptr<ApplyInfo>",
    "apply_info"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSApplyFriendItemENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[16];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSApplyFriendItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSApplyFriendItemENDCLASS_t qt_meta_stringdata_CLASSApplyFriendItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "ApplyFriendItem"
        QT_MOC_LITERAL(16, 15),  // "sig_auth_friend"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 26),  // "std::shared_ptr<ApplyInfo>"
        QT_MOC_LITERAL(60, 10)   // "apply_info"
    },
    "ApplyFriendItem",
    "sig_auth_friend",
    "",
    "std::shared_ptr<ApplyInfo>",
    "apply_info"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSApplyFriendItemENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject ApplyFriendItem::staticMetaObject = { {
    QMetaObject::SuperData::link<ListItemBase::staticMetaObject>(),
    qt_meta_stringdata_CLASSApplyFriendItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSApplyFriendItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSApplyFriendItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ApplyFriendItem, std::true_type>,
        // method 'sig_auth_friend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<ApplyInfo>, std::false_type>
    >,
    nullptr
} };

void ApplyFriendItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ApplyFriendItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sig_auth_friend((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<ApplyInfo>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ApplyFriendItem::*)(std::shared_ptr<ApplyInfo> );
            if (_t _q_method = &ApplyFriendItem::sig_auth_friend; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ApplyFriendItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplyFriendItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSApplyFriendItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ListItemBase::qt_metacast(_clname);
}

int ApplyFriendItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ListItemBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ApplyFriendItem::sig_auth_friend(std::shared_ptr<ApplyInfo> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
