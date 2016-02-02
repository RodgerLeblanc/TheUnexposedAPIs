/****************************************************************************
** Meta object code from reading C++ file 'CellularTechnologies.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CellularTechnologies/CellularTechnologies.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CellularTechnologies.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CellularTechnologies[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      13,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      56,   21,   21,   21, 0x05,
     100,   21,   21,   21, 0x05,
     133,   21,   21,   21, 0x05,
     171,   21,   21,   21, 0x05,
     200,   21,   21,   21, 0x05,
     232,   21,   21,   21, 0x05,
     267,   21,   21,   21, 0x05,
     302,   21,   21,   21, 0x05,
     324,   21,   21,   21, 0x05,
     350,   21,   21,   21, 0x05,
     382,   21,   21,   21, 0x05,
     414,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     451,   21,   21,   21, 0x08,

 // properties: name, type, flags
     487,  479, 0x0a495001,
     516,  504, 0x0b495001,
     539,  479, 0x0a495001,
     555,  479, 0x0a495001,
     576,  479, 0x0a495001,
     593,  588, 0x01495001,
     611,  479, 0x0a495001,
     629,  479, 0x0a495001,
     647,  588, 0x01495001,
     655,  479, 0x0a495001,
     668,  664, 0x02495001,
     687,  664, 0x02495001,
     706,  479, 0x0a495001,

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
      12,

       0        // eod
};

static const char qt_meta_stringdata_CellularTechnologies[] = {
    "CellularTechnologies\0\0"
    "cellSearchStatusChanged(QString&)\0"
    "configuredTechnologiesChanged(QStringList&)\0"
    "connectionStateChanged(QString&)\0"
    "displayedCarrierNameChanged(QString&)\0"
    "homeCountryChanged(QString&)\0"
    "isOnEmergencyCallChanged(bool&)\0"
    "networkTechnologyChanged(QString&)\0"
    "parentCarrierNameChanged(QString&)\0"
    "roamingChanged(bool&)\0scanModeChanged(QString&)\0"
    "signalStrengthBarsChanged(int&)\0"
    "signalStrengthRssiChanged(int&)\0"
    "technologyIndicatorChanged(QString&)\0"
    "onPpsFileReady(QVariantMap)\0QString\0"
    "cellSearchStatus\0QStringList\0"
    "configuredTechnologies\0connectionState\0"
    "displayedCarrierName\0homeCountry\0bool\0"
    "isOnEmergencyCall\0networkTechnology\0"
    "parentCarrierName\0roaming\0scanMode\0"
    "int\0signalStrengthBars\0signalStrengthRssi\0"
    "technologyIndicator\0"
};

void CellularTechnologies::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CellularTechnologies *_t = static_cast<CellularTechnologies *>(_o);
        switch (_id) {
        case 0: _t->cellSearchStatusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->configuredTechnologiesChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->connectionStateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->displayedCarrierNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->homeCountryChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->isOnEmergencyCallChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->networkTechnologyChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->parentCarrierNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->roamingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->scanModeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->signalStrengthBarsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->signalStrengthRssiChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->technologyIndicatorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CellularTechnologies::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CellularTechnologies::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CellularTechnologies,
      qt_meta_data_CellularTechnologies, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CellularTechnologies::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CellularTechnologies::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CellularTechnologies::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CellularTechnologies))
        return static_cast<void*>(const_cast< CellularTechnologies*>(this));
    return QObject::qt_metacast(_clname);
}

int CellularTechnologies::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = cellSearchStatus(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = configuredTechnologies(); break;
        case 2: *reinterpret_cast< QString*>(_v) = connectionState(); break;
        case 3: *reinterpret_cast< QString*>(_v) = displayedCarrierName(); break;
        case 4: *reinterpret_cast< QString*>(_v) = homeCountry(); break;
        case 5: *reinterpret_cast< bool*>(_v) = isOnEmergencyCall(); break;
        case 6: *reinterpret_cast< QString*>(_v) = networkTechnology(); break;
        case 7: *reinterpret_cast< QString*>(_v) = parentCarrierName(); break;
        case 8: *reinterpret_cast< bool*>(_v) = roaming(); break;
        case 9: *reinterpret_cast< QString*>(_v) = scanMode(); break;
        case 10: *reinterpret_cast< int*>(_v) = signalStrengthBars(); break;
        case 11: *reinterpret_cast< int*>(_v) = signalStrengthRssi(); break;
        case 12: *reinterpret_cast< QString*>(_v) = technologyIndicator(); break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 13;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CellularTechnologies::cellSearchStatusChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CellularTechnologies::configuredTechnologiesChanged(QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CellularTechnologies::connectionStateChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CellularTechnologies::displayedCarrierNameChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CellularTechnologies::homeCountryChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CellularTechnologies::isOnEmergencyCallChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CellularTechnologies::networkTechnologyChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CellularTechnologies::parentCarrierNameChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CellularTechnologies::roamingChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CellularTechnologies::scanModeChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CellularTechnologies::signalStrengthBarsChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CellularTechnologies::signalStrengthRssiChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CellularTechnologies::technologyIndicatorChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
