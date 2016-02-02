/****************************************************************************
** Meta object code from reading C++ file 'DeviceProperties.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/DeviceProperties/DeviceProperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceProperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeviceProperties[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       8,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      48,   17,   17,   17, 0x05,
      64,   17,   17,   17, 0x05,
      91,   17,   17,   17, 0x05,
     120,   17,   17,   17, 0x05,
     147,   17,   17,   17, 0x05,
     181,   17,   17,   17, 0x05,
     208,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     242,   17,   17,   17, 0x08,

 // properties: name, type, flags
     278,  270, 0x0a495001,
     295,  291, 0x02495001,
     298,  270, 0x0a495001,
     308,  270, 0x0a495001,
     320,  270, 0x0a495001,
     330,  270, 0x0a495001,
     347,  270, 0x0a495001,
     357,  270, 0x0a495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

static const char qt_meta_stringdata_DeviceProperties[] = {
    "DeviceProperties\0\0defaultThemeChanged(QString&)\0"
    "duChanged(int&)\0modelNameChanged(QString&)\0"
    "modelNumberChanged(QString&)\0"
    "osVersionChanged(QString&)\0"
    "screenDimensionsChanged(QString&)\0"
    "screenDpiChanged(QString&)\0"
    "screenResolutionChanged(QString&)\0"
    "onPpsFileReady(QVariantMap)\0QString\0"
    "defaultTheme\0int\0du\0modelName\0modelNumber\0"
    "osVersion\0screenDimensions\0screenDpi\0"
    "screenResolution\0"
};

void DeviceProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeviceProperties *_t = static_cast<DeviceProperties *>(_o);
        switch (_id) {
        case 0: _t->defaultThemeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->duChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->modelNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->modelNumberChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->osVersionChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->screenDimensionsChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->screenDpiChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->screenResolutionChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DeviceProperties::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DeviceProperties::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DeviceProperties,
      qt_meta_data_DeviceProperties, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeviceProperties::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeviceProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeviceProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceProperties))
        return static_cast<void*>(const_cast< DeviceProperties*>(this));
    return QObject::qt_metacast(_clname);
}

int DeviceProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = defaultTheme(); break;
        case 1: *reinterpret_cast< int*>(_v) = du(); break;
        case 2: *reinterpret_cast< QString*>(_v) = modelName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = modelNumber(); break;
        case 4: *reinterpret_cast< QString*>(_v) = osVersion(); break;
        case 5: *reinterpret_cast< QString*>(_v) = screenDimensions(); break;
        case 6: *reinterpret_cast< QString*>(_v) = screenDpi(); break;
        case 7: *reinterpret_cast< QString*>(_v) = screenResolution(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DeviceProperties::defaultThemeChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceProperties::duChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceProperties::modelNameChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceProperties::modelNumberChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DeviceProperties::osVersionChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DeviceProperties::screenDimensionsChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DeviceProperties::screenDpiChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DeviceProperties::screenResolutionChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
