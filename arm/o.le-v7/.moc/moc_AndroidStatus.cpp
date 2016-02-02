/****************************************************************************
** Meta object code from reading C++ file 'AndroidStatus.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AndroidStatus/AndroidStatus.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AndroidStatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AndroidStatus[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      40,   14,   14,   14, 0x05,
      68,   14,   14,   14, 0x05,
      94,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,   14,   14,   14, 0x08,

 // properties: name, type, flags
     150,  145, 0x01495001,
     161,  145, 0x01495001,
     179,  175, 0x02495001,
     200,  192, 0x0a495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_AndroidStatus[] = {
    "AndroidStatus\0\0fullscreenChanged(bool&)\0"
    "keyboardShownChanged(bool&)\0"
    "keyboardSizeChanged(int&)\0"
    "stateChanged(QString&)\0"
    "onPpsFileReady(QVariantMap)\0bool\0"
    "fullscreen\0keyboardShown\0int\0keyboardSize\0"
    "QString\0state\0"
};

void AndroidStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AndroidStatus *_t = static_cast<AndroidStatus *>(_o);
        switch (_id) {
        case 0: _t->fullscreenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->keyboardShownChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->keyboardSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AndroidStatus::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AndroidStatus::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AndroidStatus,
      qt_meta_data_AndroidStatus, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AndroidStatus::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AndroidStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AndroidStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AndroidStatus))
        return static_cast<void*>(const_cast< AndroidStatus*>(this));
    return QObject::qt_metacast(_clname);
}

int AndroidStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = fullscreen(); break;
        case 1: *reinterpret_cast< bool*>(_v) = keyboardShown(); break;
        case 2: *reinterpret_cast< int*>(_v) = keyboardSize(); break;
        case 3: *reinterpret_cast< QString*>(_v) = state(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AndroidStatus::fullscreenChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AndroidStatus::keyboardShownChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AndroidStatus::keyboardSizeChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AndroidStatus::stateChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
