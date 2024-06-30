/****************************************************************************
** Meta object code from reading C++ file 'decorator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../decorator.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decorator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdecoratorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdecoratorENDCLASS = QtMocHelpers::stringData(
    "decorator",
    "sendfont",
    "",
    "sendheader",
    "on_fontchange_clicked",
    "on_apply_button_clicked",
    "getfont",
    "on_exit_button_clicked",
    "on_pushButton_3_clicked",
    "on_headchange_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdecoratorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       3,    1,   65,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   68,    2, 0x08,    5 /* Private */,
       5,    0,   69,    2, 0x08,    6 /* Private */,
       6,    1,   70,    2, 0x08,    7 /* Private */,
       7,    0,   73,    2, 0x08,    9 /* Private */,
       8,    0,   74,    2, 0x08,   10 /* Private */,
       9,    0,   75,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    2,
    QMetaType::Void, QMetaType::QStringList,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QFont,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject decorator::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSdecoratorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdecoratorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdecoratorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<decorator, std::true_type>,
        // method 'sendfont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFont, std::false_type>,
        // method 'sendheader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'on_fontchange_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_apply_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getfont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFont, std::false_type>,
        // method 'on_exit_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_headchange_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void decorator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<decorator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendfont((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 1: _t->sendheader((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 2: _t->on_fontchange_clicked(); break;
        case 3: _t->on_apply_button_clicked(); break;
        case 4: _t->getfont((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 5: _t->on_exit_button_clicked(); break;
        case 6: _t->on_pushButton_3_clicked(); break;
        case 7: _t->on_headchange_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (decorator::*)(QFont );
            if (_t _q_method = &decorator::sendfont; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (decorator::*)(QStringList );
            if (_t _q_method = &decorator::sendheader; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *decorator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *decorator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdecoratorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int decorator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void decorator::sendfont(QFont _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void decorator::sendheader(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
