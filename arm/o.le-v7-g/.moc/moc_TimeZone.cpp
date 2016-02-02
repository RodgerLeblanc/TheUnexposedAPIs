/****************************************************************************
** Meta object code from reading C++ file 'TimeZone.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/TimeZone/TimeZone.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimeZone.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TimeZone[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      43,    9,    9,    9, 0x05,
      77,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,    9,    9,    9, 0x08,

 // properties: name, type, flags
     145,  140, 0x01495001,
     172,  164, 0x0a495001,
     189,  140, 0x01495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_TimeZone[] = {
    "TimeZone\0\0autoUpdateTimeZoneChanged(bool&)\0"
    "lastZoneDetectedChanged(QString&)\0"
    "setTimeAutomaticallyChanged(bool&)\0"
    "onPpsFileReady(QVariantMap)\0bool\0"
    "autoUpdateTimeZone\0QString\0lastZoneDetected\0"
    "setTimeAutomatically\0"
};

void TimeZone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TimeZone *_t = static_cast<TimeZone *>(_o);
        switch (_id) {
        case 0: _t->autoUpdateTimeZoneChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->lastZoneDetectedChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setTimeAutomaticallyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TimeZone::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TimeZone::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TimeZone,
      qt_meta_data_TimeZone, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TimeZone::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TimeZone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TimeZone::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeZone))
        return static_cast<void*>(const_cast< TimeZone*>(this));
    return QObject::qt_metacast(_clname);
}

int TimeZone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< bool*>(_v) = autoUpdateTimeZone(); break;
        case 1: *reinterpret_cast< QString*>(_v) = lastZoneDetected(); break;
        case 2: *reinterpret_cast< bool*>(_v) = setTimeAutomatically(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TimeZone::autoUpdateTimeZoneChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TimeZone::lastZoneDetectedChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TimeZone::setTimeAutomaticallyChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
