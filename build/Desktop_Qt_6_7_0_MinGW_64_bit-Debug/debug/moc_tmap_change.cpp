/****************************************************************************
** Meta object code from reading C++ file 'tmap_change.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../tmap_change.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tmap_change.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
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
struct qt_meta_stringdata_CLASStmap_changeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASStmap_changeENDCLASS = QtMocHelpers::stringData(
    "tmap_change",
    "sendqstringlist",
    "",
    "senddatetimes",
    "senddatetimee",
    "sendbool",
    "on_buttonBox_accepted",
    "on_deltmap_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASStmap_changeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       3,    1,   53,    2, 0x06,    3 /* Public */,
       4,    1,   56,    2, 0x06,    5 /* Public */,
       5,    1,   59,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   62,    2, 0x08,    9 /* Private */,
       7,    0,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QDateTime,    2,
    QMetaType::Void, QMetaType::QDateTime,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject tmap_change::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASStmap_changeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASStmap_changeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASStmap_changeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<tmap_change, std::true_type>,
        // method 'sendqstringlist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'senddatetimes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>,
        // method 'senddatetimee'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>,
        // method 'sendbool'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_buttonBox_accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deltmap_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void tmap_change::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<tmap_change *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendqstringlist((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 1: _t->senddatetimes((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 2: _t->senddatetimee((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 3: _t->sendbool((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_buttonBox_accepted(); break;
        case 5: _t->on_deltmap_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (tmap_change::*)(QStringList );
            if (_t _q_method = &tmap_change::sendqstringlist; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (tmap_change::*)(QDateTime );
            if (_t _q_method = &tmap_change::senddatetimes; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (tmap_change::*)(QDateTime );
            if (_t _q_method = &tmap_change::senddatetimee; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (tmap_change::*)(bool );
            if (_t _q_method = &tmap_change::sendbool; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *tmap_change::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tmap_change::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASStmap_changeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int tmap_change::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void tmap_change::sendqstringlist(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tmap_change::senddatetimes(QDateTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tmap_change::senddatetimee(QDateTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tmap_change::sendbool(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
