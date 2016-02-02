/****************************************************************************
** Meta object code from reading C++ file 'DataRoaming.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/DataRoaming/DataRoaming.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataRoaming.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataRoaming[] = {

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
      13,   12,   12,   12, 0x05,
      46,   12,   12,   12, 0x05,
      84,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     114,   12,   12,   12, 0x08,

 // properties: name, type, flags
     150,  142, 0x0a495001,
     166,  142, 0x0a495001,
     192,  187, 0x01495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_DataRoaming[] = {
    "DataRoaming\0\0dataRoamingModeChanged(QString&)\0"
    "dataRoamingModeLevelChanged(QString&)\0"
    "dataServiceModeChanged(bool&)\0"
    "onPpsFileReady(QVariantMap)\0QString\0"
    "dataRoamingMode\0dataRoamingModeLevel\0"
    "bool\0dataServiceMode\0"
};

void DataRoaming::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DataRoaming *_t = static_cast<DataRoaming *>(_o);
        switch (_id) {
        case 0: _t->dataRoamingModeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->dataRoamingModeLevelChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->dataServiceModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DataRoaming::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DataRoaming::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataRoaming,
      qt_meta_data_DataRoaming, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataRoaming::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataRoaming::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataRoaming::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataRoaming))
        return static_cast<void*>(const_cast< DataRoaming*>(this));
    return QObject::qt_metacast(_clname);
}

int DataRoaming::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QString*>(_v) = dataRoamingMode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = dataRoamingModeLevel(); break;
        case 2: *reinterpret_cast< bool*>(_v) = dataServiceMode(); break;
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
void DataRoaming::dataRoamingModeChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataRoaming::dataRoamingModeLevelChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataRoaming::dataServiceModeChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
