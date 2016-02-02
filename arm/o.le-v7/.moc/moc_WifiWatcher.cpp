/****************************************************************************
** Meta object code from reading C++ file 'WifiWatcher.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/WifiWatcher/WifiWatcher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WifiWatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WifiWatcher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      49,   12,   12,   12, 0x05,
      81,   12,   12,   12, 0x05,
     115,   12,   12,   12, 0x05,
     139,   12,   12,   12, 0x05,
     172,   12,   12,   12, 0x05,
     204,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     237,   12,   12,   12, 0x08,

 // properties: name, type, flags
     270,  265, 0x01495001,
     300,  292, 0x0a495001,
     328,  315, 0x09495001,
     340,  265, 0x01495001,
     350,  292, 0x0a495001,
     366,  292, 0x0a495001,
     381,  292, 0x0a495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

static const char qt_meta_stringdata_WifiWatcher[] = {
    "WifiWatcher\0\0lanTetherPowerEnabledChanged(bool&)\0"
    "lanTetherStateChanged(QString&)\0"
    "scanResultsChanged(QVariantList&)\0"
    "connectedChanged(bool&)\0"
    "connectionStateChanged(QString&)\0"
    "connectionSsidChanged(QString&)\0"
    "connectionBssidChanged(QString&)\0"
    "onPpsFileReady(QVariantMap)\0bool\0"
    "lanTetherPowerEnabled\0QString\0"
    "lanTetherState\0QVariantList\0scanResults\0"
    "connected\0connectionState\0connectionSsid\0"
    "connectionBssid\0"
};

void WifiWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WifiWatcher *_t = static_cast<WifiWatcher *>(_o);
        switch (_id) {
        case 0: _t->lanTetherPowerEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->lanTetherStateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->scanResultsChanged((*reinterpret_cast< QVariantList(*)>(_a[1]))); break;
        case 3: _t->connectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->connectionStateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->connectionSsidChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->connectionBssidChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WifiWatcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WifiWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WifiWatcher,
      qt_meta_data_WifiWatcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WifiWatcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WifiWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WifiWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WifiWatcher))
        return static_cast<void*>(const_cast< WifiWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int WifiWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = lanTetherPowerEnabled(); break;
        case 1: *reinterpret_cast< QString*>(_v) = lanTetherState(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = scanResults(); break;
        case 3: *reinterpret_cast< bool*>(_v) = connected(); break;
        case 4: *reinterpret_cast< QString*>(_v) = connectionState(); break;
        case 5: *reinterpret_cast< QString*>(_v) = connectionSsid(); break;
        case 6: *reinterpret_cast< QString*>(_v) = connectionBssid(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WifiWatcher::lanTetherPowerEnabledChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WifiWatcher::lanTetherStateChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WifiWatcher::scanResultsChanged(QVariantList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WifiWatcher::connectedChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WifiWatcher::connectionStateChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WifiWatcher::connectionSsidChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WifiWatcher::connectionBssidChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
