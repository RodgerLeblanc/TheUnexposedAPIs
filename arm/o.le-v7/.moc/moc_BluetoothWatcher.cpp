/****************************************************************************
** Meta object code from reading C++ file 'BluetoothWatcher.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/BluetoothWatcher/BluetoothWatcher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BluetoothWatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BluetoothWatcher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      52,   17,   17,   17, 0x05,
      89,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     127,   17,   17,   17, 0x08,

 // properties: name, type, flags
     167,  155, 0x0b495001,

 // properties: notify_signal_id
       2,

       0        // eod
};

static const char qt_meta_stringdata_BluetoothWatcher[] = {
    "BluetoothWatcher\0\0bluetoothDeviceConnected(QString)\0"
    "bluetoothDeviceDisconnected(QString)\0"
    "connectedDevicesChanged(QStringList&)\0"
    "onPpsFileReady(QVariantMap)\0QStringList\0"
    "connectedDevices\0"
};

void BluetoothWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BluetoothWatcher *_t = static_cast<BluetoothWatcher *>(_o);
        switch (_id) {
        case 0: _t->bluetoothDeviceConnected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->bluetoothDeviceDisconnected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->connectedDevicesChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BluetoothWatcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BluetoothWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BluetoothWatcher,
      qt_meta_data_BluetoothWatcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BluetoothWatcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BluetoothWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BluetoothWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BluetoothWatcher))
        return static_cast<void*>(const_cast< BluetoothWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int BluetoothWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = connectedDevices(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BluetoothWatcher::bluetoothDeviceConnected(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BluetoothWatcher::bluetoothDeviceDisconnected(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BluetoothWatcher::connectedDevicesChanged(QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
