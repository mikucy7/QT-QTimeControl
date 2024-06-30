/****************************************************************************
** Meta object code from reading C++ file 'createtask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../createtask.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createtask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScreatetaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScreatetaskENDCLASS = QtMocHelpers::stringData(
    "createtask",
    "senddatetime",
    "",
    "sendqstring",
    "on_dateTimeEdit_dateTimeChanged",
    "dateTime",
    "on_textEdit_textChanged",
    "on_buttonBox_accepted"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScreatetaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       3,    1,   47,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   50,    2, 0x08,    5 /* Private */,
       6,    0,   53,    2, 0x08,    7 /* Private */,
       7,    0,   54,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QDateTime,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject createtask::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASScreatetaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScreatetaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScreatetaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<createtask, std::true_type>,
        // method 'senddatetime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>,
        // method 'sendqstring'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_dateTimeEdit_dateTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>,
        // method 'on_textEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonBox_accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void createtask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<createtask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->senddatetime((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 1: _t->sendqstring((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_dateTimeEdit_dateTimeChanged((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 3: _t->on_textEdit_textChanged(); break;
        case 4: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (createtask::*)(QDateTime );
            if (_t _q_method = &createtask::senddatetime; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (createtask::*)(QString );
            if (_t _q_method = &createtask::sendqstring; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *createtask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *createtask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScreatetaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int createtask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void createtask::senddatetime(QDateTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void createtask::sendqstring(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
