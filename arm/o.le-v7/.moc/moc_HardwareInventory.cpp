/****************************************************************************
** Meta object code from reading C++ file 'HardwareInventory.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/HardwareInventory/HardwareInventory.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HardwareInventory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HardwareInventory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
      23,  134, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      45,   18,   18,   18, 0x05,
      72,   18,   18,   18, 0x05,
     103,   18,   18,   18, 0x05,
     138,   18,   18,   18, 0x05,
     175,   18,   18,   18, 0x05,
     205,   18,   18,   18, 0x05,
     239,   18,   18,   18, 0x05,
     264,   18,   18,   18, 0x05,
     294,   18,   18,   18, 0x05,
     333,   18,   18,   18, 0x05,
     366,   18,   18,   18, 0x05,
     394,   18,   18,   18, 0x05,
     416,   18,   18,   18, 0x05,
     442,   18,   18,   18, 0x05,
     472,   18,   18,   18, 0x05,
     504,   18,   18,   18, 0x05,
     538,   18,   18,   18, 0x05,
     573,   18,   18,   18, 0x05,
     604,   18,   18,   18, 0x05,
     634,   18,   18,   18, 0x05,
     659,   18,   18,   18, 0x05,
     686,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     715,   18,   18,   18, 0x08,

 // properties: name, type, flags
     751,  743, 0x0a495001,
     760,  743, 0x0a495001,
     770,  743, 0x0a495001,
     784,  743, 0x0a495001,
     802,  743, 0x0a495001,
     822,  743, 0x0a495001,
     835,  743, 0x0a495001,
     852,  743, 0x0a495001,
     860,  743, 0x0a495001,
     865,  743, 0x0a495001,
     878,  743, 0x0a495001,
     900,  743, 0x0a495001,
     916,  743, 0x0a495001,
     927,  743, 0x0a495001,
     936,  743, 0x0a495001,
     954,  949, 0x01495001,
     972,  743, 0x0a495001,
     989,  743, 0x0a495001,
    1007,  743, 0x0a495001,
    1025, 1021, 0x02495001,
    1042,  743, 0x0a495001,
    1050,  743, 0x0a495001,
    1060,  743, 0x0a495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
      12,
       8,
       9,
      10,
      11,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      22,

       0        // eod
};

static const char qt_meta_stringdata_HardwareInventory[] = {
    "HardwareInventory\0\0boardRevChanged(QString&)\0"
    "boardTypeChanged(QString&)\0"
    "cameraFrontIdChanged(QString&)\0"
    "cameraFrontVendorChanged(QString&)\0"
    "cameraRearExtraInfoChanged(QString&)\0"
    "cameraRearIdChanged(QString&)\0"
    "cameraRearVendorChanged(QString&)\0"
    "cpuTypeChanged(QString&)\0"
    "emmcDiskSizeChanged(QString&)\0"
    "emmcManufacturingDateChanged(QString&)\0"
    "emmcProductNameChanged(QString&)\0"
    "emmcVendorChanged(QString&)\0"
    "hdmiChanged(QString&)\0keyboardChanged(QString&)\0"
    "keyboardTypeChanged(QString&)\0"
    "miracastSupportedChanged(bool&)\0"
    "processorCpuNameChanged(QString&)\0"
    "processorCpuSpeedChanged(QString&)\0"
    "processorNameChanged(QString&)\0"
    "processorNumbersChanged(int&)\0"
    "ramSizeChanged(QString&)\0"
    "sdramSizeChanged(QString&)\0"
    "sdramVendorChanged(QString&)\0"
    "onPpsFileReady(QVariantMap)\0QString\0"
    "boardRev\0boardType\0cameraFrontId\0"
    "cameraFrontVendor\0cameraRearExtraInfo\0"
    "cameraRearId\0cameraRearVendor\0cpuType\0"
    "hdmi\0emmcDiskSize\0emmcManufacturingDate\0"
    "emmcProductName\0emmcVendor\0keyboard\0"
    "keyboardType\0bool\0miracastSupported\0"
    "processorCpuName\0processorCpuSpeed\0"
    "processorName\0int\0processorNumbers\0"
    "ramSize\0sdramSize\0sdramVendor\0"
};

void HardwareInventory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HardwareInventory *_t = static_cast<HardwareInventory *>(_o);
        switch (_id) {
        case 0: _t->boardRevChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->boardTypeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->cameraFrontIdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->cameraFrontVendorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->cameraRearExtraInfoChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->cameraRearIdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->cameraRearVendorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->cpuTypeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->emmcDiskSizeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->emmcManufacturingDateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->emmcProductNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->emmcVendorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->hdmiChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->keyboardChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->keyboardTypeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->miracastSupportedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->processorCpuNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->processorCpuSpeedChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->processorNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->processorNumbersChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->ramSizeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->sdramSizeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->sdramVendorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HardwareInventory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HardwareInventory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HardwareInventory,
      qt_meta_data_HardwareInventory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HardwareInventory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HardwareInventory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HardwareInventory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HardwareInventory))
        return static_cast<void*>(const_cast< HardwareInventory*>(this));
    return QObject::qt_metacast(_clname);
}

int HardwareInventory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = boardRev(); break;
        case 1: *reinterpret_cast< QString*>(_v) = boardType(); break;
        case 2: *reinterpret_cast< QString*>(_v) = cameraFrontId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = cameraFrontVendor(); break;
        case 4: *reinterpret_cast< QString*>(_v) = cameraRearExtraInfo(); break;
        case 5: *reinterpret_cast< QString*>(_v) = cameraRearId(); break;
        case 6: *reinterpret_cast< QString*>(_v) = cameraRearVendor(); break;
        case 7: *reinterpret_cast< QString*>(_v) = cpuType(); break;
        case 8: *reinterpret_cast< QString*>(_v) = hdmi(); break;
        case 9: *reinterpret_cast< QString*>(_v) = emmcDiskSize(); break;
        case 10: *reinterpret_cast< QString*>(_v) = emmcManufacturingDate(); break;
        case 11: *reinterpret_cast< QString*>(_v) = emmcProductName(); break;
        case 12: *reinterpret_cast< QString*>(_v) = emmcVendor(); break;
        case 13: *reinterpret_cast< QString*>(_v) = keyboard(); break;
        case 14: *reinterpret_cast< QString*>(_v) = keyboardType(); break;
        case 15: *reinterpret_cast< bool*>(_v) = miracastSupported(); break;
        case 16: *reinterpret_cast< QString*>(_v) = processorCpuName(); break;
        case 17: *reinterpret_cast< QString*>(_v) = processorCpuSpeed(); break;
        case 18: *reinterpret_cast< QString*>(_v) = processorName(); break;
        case 19: *reinterpret_cast< int*>(_v) = processorNumbers(); break;
        case 20: *reinterpret_cast< QString*>(_v) = ramSize(); break;
        case 21: *reinterpret_cast< QString*>(_v) = sdramSize(); break;
        case 22: *reinterpret_cast< QString*>(_v) = sdramVendor(); break;
        }
        _id -= 23;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 23;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 23;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void HardwareInventory::boardRevChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HardwareInventory::boardTypeChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HardwareInventory::cameraFrontIdChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HardwareInventory::cameraFrontVendorChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HardwareInventory::cameraRearExtraInfoChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HardwareInventory::cameraRearIdChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HardwareInventory::cameraRearVendorChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void HardwareInventory::cpuTypeChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void HardwareInventory::emmcDiskSizeChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void HardwareInventory::emmcManufacturingDateChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void HardwareInventory::emmcProductNameChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void HardwareInventory::emmcVendorChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void HardwareInventory::hdmiChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void HardwareInventory::keyboardChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void HardwareInventory::keyboardTypeChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void HardwareInventory::miracastSupportedChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void HardwareInventory::processorCpuNameChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void HardwareInventory::processorCpuSpeedChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void HardwareInventory::processorNameChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void HardwareInventory::processorNumbersChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void HardwareInventory::ramSizeChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void HardwareInventory::sdramSizeChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void HardwareInventory::sdramVendorChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}
QT_END_MOC_NAMESPACE
