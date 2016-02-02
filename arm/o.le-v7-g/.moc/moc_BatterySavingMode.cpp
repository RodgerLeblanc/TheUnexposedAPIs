/****************************************************************************
** Meta object code from reading C++ file 'BatterySavingMode.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/BatterySavingMode/BatterySavingMode.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BatterySavingMode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BatterySavingMode[] = {

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
      19,   18,   18,   18, 0x05,
      40,   18,   18,   18, 0x05,
      74,   18,   18,   18, 0x05,
     101,   18,   18,   18, 0x05,
     132,   18,   18,   18, 0x05,
     180,   18,   18,   18, 0x05,
     220,   18,   18,   18, 0x05,
     264,   18,   18,   18, 0x05,
     321,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     348,   18,   18,   18, 0x08,

 // properties: name, type, flags
     381,  376, 0x01495001,
     388,  376, 0x01495001,
     412,  408, 0x02495001,
     434,  426, 0x0a495001,
     448,  376, 0x01495001,
     482,  376, 0x01495001,
     508,  376, 0x01495001,
     538,  376, 0x01495001,
     581,  408, 0x02495001,

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

static const char qt_meta_stringdata_BatterySavingMode[] = {
    "BatterySavingMode\0\0activeChanged(bool&)\0"
    "limitCpuPerformanceChanged(bool&)\0"
    "screenTimeoutChanged(int&)\0"
    "triggerSourceChanged(QString&)\0"
    "turnOffAdvancedInteractionsOptionChanged(bool&)\0"
    "turnOffDataServicesOptionChanged(bool&)\0"
    "turnOffLocationServicesOptionChanged(bool&)\0"
    "turnOnBatterySavingModeAutomaticallyOptionChanged(bool&)\0"
    "userThresholdChanged(int&)\0"
    "onPpsFileReady(QVariantMap)\0bool\0"
    "active\0limitCpuPerformance\0int\0"
    "screenTimeout\0QString\0triggerSource\0"
    "turnOffAdvancedInteractionsOption\0"
    "turnOffDataServicesOption\0"
    "turnOffLocationServicesOption\0"
    "turnOnBatterySavingModeAutomaticallyOption\0"
    "userThreshold\0"
};

void BatterySavingMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BatterySavingMode *_t = static_cast<BatterySavingMode *>(_o);
        switch (_id) {
        case 0: _t->activeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->limitCpuPerformanceChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->screenTimeoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->triggerSourceChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->turnOffAdvancedInteractionsOptionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->turnOffDataServicesOptionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->turnOffLocationServicesOptionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->turnOnBatterySavingModeAutomaticallyOptionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->userThresholdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BatterySavingMode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BatterySavingMode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BatterySavingMode,
      qt_meta_data_BatterySavingMode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BatterySavingMode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BatterySavingMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BatterySavingMode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BatterySavingMode))
        return static_cast<void*>(const_cast< BatterySavingMode*>(this));
    return QObject::qt_metacast(_clname);
}

int BatterySavingMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< bool*>(_v) = active(); break;
        case 1: *reinterpret_cast< bool*>(_v) = limitCpuPerformance(); break;
        case 2: *reinterpret_cast< int*>(_v) = screenTimeout(); break;
        case 3: *reinterpret_cast< QString*>(_v) = triggerSource(); break;
        case 4: *reinterpret_cast< bool*>(_v) = turnOffAdvancedInteractionsOption(); break;
        case 5: *reinterpret_cast< bool*>(_v) = turnOffDataServicesOption(); break;
        case 6: *reinterpret_cast< bool*>(_v) = turnOffLocationServicesOption(); break;
        case 7: *reinterpret_cast< bool*>(_v) = turnOnBatterySavingModeAutomaticallyOption(); break;
        case 8: *reinterpret_cast< int*>(_v) = userThreshold(); break;
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
void BatterySavingMode::activeChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BatterySavingMode::limitCpuPerformanceChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BatterySavingMode::screenTimeoutChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BatterySavingMode::triggerSourceChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BatterySavingMode::turnOffAdvancedInteractionsOptionChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BatterySavingMode::turnOffDataServicesOptionChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void BatterySavingMode::turnOffLocationServicesOptionChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void BatterySavingMode::turnOnBatterySavingModeAutomaticallyOptionChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void BatterySavingMode::userThresholdChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
