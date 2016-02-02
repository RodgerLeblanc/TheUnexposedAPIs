/****************************************************************************
** Meta object code from reading C++ file 'SystemSettings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/SystemSettings/SystemSettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
      12,   79, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      54,   15,   15,   15, 0x05,
      86,   15,   15,   15, 0x05,
     117,   15,   15,   15, 0x05,
     151,   15,   15,   15, 0x05,
     175,   15,   15,   15, 0x05,
     208,   15,   15,   15, 0x05,
     239,   15,   15,   15, 0x05,
     281,   15,   15,   15, 0x05,
     323,   15,   15,   15, 0x05,
     357,   15,   15,   15, 0x05,
     385,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     415,   15,   15,   15, 0x08,

 // properties: name, type, flags
     448,  443, 0x01495001,
     472,  443, 0x01495001,
     490,  443, 0x01495001,
     507,  443, 0x01495001,
     531,  527, 0x02495001,
     550,  542, 0x0a495001,
     566,  527, 0x02495001,
     584,  542, 0x0a495001,
     609,  542, 0x0a495001,
     634,  443, 0x01495001,
     654,  443, 0x01495001,
     668,  542, 0x0a495001,

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
      10,
      11,

       0        // eod
};

static const char qt_meta_stringdata_SystemSettings[] = {
    "SystemSettings\0\0allowAlternateAppSourceChanged(bool&)\0"
    "autoHideActionBarChanged(bool&)\0"
    "bypassScreenlockChanged(bool&)\0"
    "checkAppsForMalwareChanged(bool&)\0"
    "hourFormatChanged(int&)\0"
    "langCountryCodeChanged(QString&)\0"
    "lockScreenTimeoutChanged(int&)\0"
    "messageOnLockscreenLine1Changed(QString&)\0"
    "messageOnLockscreenLine2Changed(QString&)\0"
    "showActionBarLabelsChanged(bool&)\0"
    "swipeToWakeupChanged(bool&)\0"
    "tzDatabaseIdChanged(QString&)\0"
    "onPpsFileReady(QVariantMap)\0bool\0"
    "allowAlternateAppSource\0autoHideActionBar\0"
    "bypassScreenlock\0checkAppsForMalware\0"
    "int\0hourFormat\0QString\0langCountryCode\0"
    "lockScreenTimeout\0messageOnLockscreenLine1\0"
    "messageOnLockscreenLine2\0showActionBarLabels\0"
    "swipeToWakeup\0tzDatabaseId\0"
};

void SystemSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SystemSettings *_t = static_cast<SystemSettings *>(_o);
        switch (_id) {
        case 0: _t->allowAlternateAppSourceChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->autoHideActionBarChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->bypassScreenlockChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->checkAppsForMalwareChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->hourFormatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->langCountryCodeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->lockScreenTimeoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->messageOnLockscreenLine1Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->messageOnLockscreenLine2Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->showActionBarLabelsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->swipeToWakeupChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->tzDatabaseIdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SystemSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SystemSettings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SystemSettings,
      qt_meta_data_SystemSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemSettings))
        return static_cast<void*>(const_cast< SystemSettings*>(this));
    return QObject::qt_metacast(_clname);
}

int SystemSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = allowAlternateAppSource(); break;
        case 1: *reinterpret_cast< bool*>(_v) = autoHideActionBar(); break;
        case 2: *reinterpret_cast< bool*>(_v) = bypassScreenlock(); break;
        case 3: *reinterpret_cast< bool*>(_v) = checkAppsForMalware(); break;
        case 4: *reinterpret_cast< int*>(_v) = hourFormat(); break;
        case 5: *reinterpret_cast< QString*>(_v) = langCountryCode(); break;
        case 6: *reinterpret_cast< int*>(_v) = lockScreenTimeout(); break;
        case 7: *reinterpret_cast< QString*>(_v) = messageOnLockscreenLine1(); break;
        case 8: *reinterpret_cast< QString*>(_v) = messageOnLockscreenLine2(); break;
        case 9: *reinterpret_cast< bool*>(_v) = showActionBarLabels(); break;
        case 10: *reinterpret_cast< bool*>(_v) = swipeToWakeup(); break;
        case 11: *reinterpret_cast< QString*>(_v) = tzDatabaseId(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SystemSettings::allowAlternateAppSourceChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemSettings::autoHideActionBarChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SystemSettings::bypassScreenlockChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SystemSettings::checkAppsForMalwareChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SystemSettings::hourFormatChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SystemSettings::langCountryCodeChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SystemSettings::lockScreenTimeoutChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SystemSettings::messageOnLockscreenLine1Changed(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SystemSettings::messageOnLockscreenLine2Changed(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SystemSettings::showActionBarLabelsChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SystemSettings::swipeToWakeupChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void SystemSettings::tzDatabaseIdChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
