/****************************************************************************
** Meta object code from reading C++ file 'DebugToken.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/DebugToken/DebugToken.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebugToken.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DebugToken[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
      10,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      36,   11,   11,   11, 0x05,
      65,   11,   11,   11, 0x05,
     100,   11,   11,   11, 0x05,
     129,   11,   11,   11, 0x05,
     159,   11,   11,   11, 0x05,
     183,   11,   11,   11, 0x05,
     208,   11,   11,   11, 0x05,
     228,   11,   11,   11, 0x05,
     261,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     294,   11,   11,   11, 0x08,

 // properties: name, type, flags
     330,  322, 0x0a495001,
     342,  337, 0x01495001,
     357,  322, 0x0a495001,
     375,  337, 0x01495001,
     400,  390, 0x10495001,
     411,  337, 0x01495001,
     421,  322, 0x0a495001,
     429,  337, 0x01495001,
     435,  322, 0x0a495001,
     455,  451, 0x02495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

       0        // eod
};

static const char qt_meta_stringdata_DebugToken[] = {
    "DebugToken\0\0authorChanged(QString&)\0"
    "devModeEnabledChanged(bool&)\0"
    "devModeExpirationChanged(QString&)\0"
    "devModeWaitingChanged(bool&)\0"
    "expirationChanged(QDateTime&)\0"
    "installedChanged(bool&)\0"
    "timeoutChanged(QString&)\0validChanged(bool&)\0"
    "validationErrorChanged(QString&)\0"
    "validationErrorCodeChanged(int&)\0"
    "onPpsFileReady(QVariantMap)\0QString\0"
    "author\0bool\0devModeEnabled\0devModeExpiration\0"
    "devModeWaiting\0QDateTime\0expiration\0"
    "installed\0timeout\0valid\0validationError\0"
    "int\0validationErrorCode\0"
};

void DebugToken::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DebugToken *_t = static_cast<DebugToken *>(_o);
        switch (_id) {
        case 0: _t->authorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->devModeEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->devModeExpirationChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->devModeWaitingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->expirationChanged((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 5: _t->installedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->timeoutChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->validChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->validationErrorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->validationErrorCodeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DebugToken::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DebugToken::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DebugToken,
      qt_meta_data_DebugToken, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DebugToken::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DebugToken::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DebugToken::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DebugToken))
        return static_cast<void*>(const_cast< DebugToken*>(this));
    return QObject::qt_metacast(_clname);
}

int DebugToken::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = author(); break;
        case 1: *reinterpret_cast< bool*>(_v) = devModeEnabled(); break;
        case 2: *reinterpret_cast< QString*>(_v) = devModeExpiration(); break;
        case 3: *reinterpret_cast< bool*>(_v) = devModeWaiting(); break;
        case 4: *reinterpret_cast< QDateTime*>(_v) = expiration(); break;
        case 5: *reinterpret_cast< bool*>(_v) = installed(); break;
        case 6: *reinterpret_cast< QString*>(_v) = timeout(); break;
        case 7: *reinterpret_cast< bool*>(_v) = valid(); break;
        case 8: *reinterpret_cast< QString*>(_v) = validationError(); break;
        case 9: *reinterpret_cast< int*>(_v) = validationErrorCode(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DebugToken::authorChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DebugToken::devModeEnabledChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DebugToken::devModeExpirationChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DebugToken::devModeWaitingChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DebugToken::expirationChanged(QDateTime & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DebugToken::installedChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DebugToken::timeoutChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DebugToken::validChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DebugToken::validationErrorChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DebugToken::validationErrorCodeChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
