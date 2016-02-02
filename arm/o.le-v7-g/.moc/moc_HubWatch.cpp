/****************************************************************************
** Meta object code from reading C++ file 'HubWatch.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/HubWatch/HubWatch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HubWatch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HubWatch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      46,    9,    9,    9, 0x05,
      89,    9,    9,    9, 0x05,
     128,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     167,    9,    9,    9, 0x08,
     184,    9,    9,    9, 0x08,

 // properties: name, type, flags
     224,  212, 0x08495001,
     247,  239, 0x0a495001,
     278,  273, 0x01495001,
     307,  303, 0x02495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_HubWatch[] = {
    "HubWatch\0\0lastPimUpdatedChanged(QVariantMap&)\0"
    "newPimMessage_accountNameChanged(QString&)\0"
    "newPimMessage_splatShownChanged(bool&)\0"
    "newPimMessage_unreadCountChanged(int&)\0"
    "onDelayTimeout()\0onPpsFileReady(QVariantMap)\0"
    "QVariantMap\0lastPimUpdated\0QString\0"
    "newPimMessage_accountName\0bool\0"
    "newPimMessage_splatShown\0int\0"
    "newPimMessage_unreadCount\0"
};

void HubWatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HubWatch *_t = static_cast<HubWatch *>(_o);
        switch (_id) {
        case 0: _t->lastPimUpdatedChanged((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 1: _t->newPimMessage_accountNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->newPimMessage_splatShownChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->newPimMessage_unreadCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onDelayTimeout(); break;
        case 5: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HubWatch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HubWatch::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HubWatch,
      qt_meta_data_HubWatch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HubWatch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HubWatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HubWatch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HubWatch))
        return static_cast<void*>(const_cast< HubWatch*>(this));
    return QObject::qt_metacast(_clname);
}

int HubWatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = lastPimUpdated(); break;
        case 1: *reinterpret_cast< QString*>(_v) = newPimMessage_accountName(); break;
        case 2: *reinterpret_cast< bool*>(_v) = newPimMessage_splatShown(); break;
        case 3: *reinterpret_cast< int*>(_v) = newPimMessage_unreadCount(); break;
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
void HubWatch::lastPimUpdatedChanged(QVariantMap & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HubWatch::newPimMessage_accountNameChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HubWatch::newPimMessage_splatShownChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HubWatch::newPimMessage_unreadCountChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
