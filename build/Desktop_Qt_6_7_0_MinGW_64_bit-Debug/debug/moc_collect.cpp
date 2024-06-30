/****************************************************************************
** Meta object code from reading C++ file 'collect.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../collect.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collect.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCollectENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCollectENDCLASS = QtMocHelpers::stringData(
    "Collect",
    "on_Collect_the_Star_clicked",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCollectENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Collect::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSCollectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCollectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCollectENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Collect, std::true_type>,
        // method 'on_Collect_the_Star_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Collect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Collect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Collect_the_Star_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Collect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Collect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCollectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Collect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
