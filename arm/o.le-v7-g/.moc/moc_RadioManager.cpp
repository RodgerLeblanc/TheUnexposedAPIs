/****************************************************************************
** Meta object code from reading C++ file 'RadioManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/RadioManager/RadioManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RadioManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RadioManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       9,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      48,   13,   13,   13, 0x05,
      81,   13,   13,   13, 0x05,
     112,   13,   13,   13, 0x05,
     142,   13,   13,   13, 0x05,
     179,   13,   13,   13, 0x05,
     208,   13,   13,   13, 0x05,
     233,   13,   13,   13, 0x05,
     258,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     284,   13,   13,   13, 0x08,

 // properties: name, type, flags
     317,  312, 0x01495001,
     337,  312, 0x01495001,
     356,  312, 0x01495001,
     373,  312, 0x01495001,
     389,  312, 0x01495001,
     412,  312, 0x01495001,
     427,  312, 0x01495001,
     438,  312, 0x01495001,
     449,  312, 0x01495001,

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

       0        // eod
};

static const char qt_meta_stringdata_RadioManager[] = {
    "RadioManager\0\0airplaneModeEnabledChanged(bool&)\0"
    "bedsideModeEnabledChanged(bool&)\0"
    "bluetoothEnabledChanged(bool&)\0"
    "cellularEnabledChanged(bool&)\0"
    "dataServiceModeEnabledChanged(bool&)\0"
    "ecmModeEnabledChanged(bool&)\0"
    "gpsEnabledChanged(bool&)\0"
    "nfcEnabledChanged(bool&)\0"
    "wifiEnabledChanged(bool&)\0"
    "onPpsFileReady(QVariantMap)\0bool\0"
    "airplaneModeEnabled\0bedsideModeEnabled\0"
    "bluetoothEnabled\0cellularEnabled\0"
    "dataServiceModeEnabled\0ecmModeEnabled\0"
    "gpsEnabled\0nfcEnabled\0wifiEnabled\0"
};

void RadioManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RadioManager *_t = static_cast<RadioManager *>(_o);
        switch (_id) {
        case 0: _t->airplaneModeEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->bedsideModeEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->bluetoothEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->cellularEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->dataServiceModeEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->ecmModeEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->gpsEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->nfcEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->wifiEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RadioManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RadioManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RadioManager,
      qt_meta_data_RadioManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RadioManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RadioManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RadioManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RadioManager))
        return static_cast<void*>(const_cast< RadioManager*>(this));
    return QObject::qt_metacast(_clname);
}

int RadioManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = airplaneModeEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = bedsideModeEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = bluetoothEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = cellularEnabled(); break;
        case 4: *reinterpret_cast< bool*>(_v) = dataServiceModeEnabled(); break;
        case 5: *reinterpret_cast< bool*>(_v) = ecmModeEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = gpsEnabled(); break;
        case 7: *reinterpret_cast< bool*>(_v) = nfcEnabled(); break;
        case 8: *reinterpret_cast< bool*>(_v) = wifiEnabled(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RadioManager::airplaneModeEnabledChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RadioManager::bedsideModeEnabledChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RadioManager::bluetoothEnabledChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RadioManager::cellularEnabledChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RadioManager::dataServiceModeEnabledChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RadioManager::ecmModeEnabledChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RadioManager::gpsEnabledChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RadioManager::nfcEnabledChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RadioManager::wifiEnabledChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
