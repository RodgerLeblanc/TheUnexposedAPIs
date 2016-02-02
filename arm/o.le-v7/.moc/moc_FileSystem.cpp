/****************************************************************************
** Meta object code from reading C++ file 'FileSystem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/FileSystem/FileSystem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileSystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileSystem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
      14,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      37,   11,   11,   11, 0x05,
      63,   11,   11,   11, 0x05,
      87,   11,   11,   11, 0x05,
     116,   11,   11,   11, 0x05,
     146,   11,   11,   11, 0x05,
     174,   11,   11,   11, 0x05,
     198,   11,   11,   11, 0x05,
     225,   11,   11,   11, 0x05,
     253,   11,   11,   11, 0x05,
     279,   11,   11,   11, 0x05,
     300,   11,   11,   11, 0x05,
     324,   11,   11,   11, 0x05,
     349,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     372,   11,   11,   11, 0x08,
     408,   11,   11,   11, 0x08,
     448,   11,   11,   11, 0x08,
     486,   11,   11,   11, 0x08,

 // properties: name, type, flags
     525,  521, 0x02495001,
     537,  521, 0x02495001,
     555,  550, 0x01495001,
     565,  521, 0x02495001,
     581,  521, 0x02495001,
     598,  550, 0x01495001,
     612,  550, 0x01495001,
     622,  521, 0x02495001,
     636,  521, 0x02495001,
     651,  550, 0x01495001,
     663,  550, 0x01495001,
     670,  521, 0x02495001,
     681,  521, 0x02495001,
     693,  550, 0x01495001,

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
      13,

       0        // eod
};

static const char qt_meta_stringdata_FileSystem[] = {
    "FileSystem\0\0boxCapacityChanged(int&)\0"
    "boxFreespaceChanged(int&)\0"
    "boxOnlineChanged(bool&)\0"
    "dropboxCapacityChanged(int&)\0"
    "dropboxFreespaceChanged(int&)\0"
    "dropboxOnlineChanged(bool&)\0"
    "localBusyChanged(bool&)\0"
    "localCapacityChanged(int&)\0"
    "localFreespaceChanged(int&)\0"
    "localOnlineChanged(bool&)\0"
    "sdBusyChanged(bool&)\0sdCapacityChanged(int&)\0"
    "sdFreespaceChanged(int&)\0"
    "sdOnlineChanged(bool&)\0"
    "onBoxDrivePpsFileReady(QVariantMap)\0"
    "onDropboxDrivePpsFileReady(QVariantMap)\0"
    "onLocalDrivePpsFileReady(QVariantMap)\0"
    "onSdDrivePpsFileReady(QVariantMap)\0"
    "int\0boxCapacity\0boxFreespace\0bool\0"
    "boxOnline\0dropboxCapacity\0dropboxFreespace\0"
    "dropboxOnline\0localBusy\0localCapacity\0"
    "localFreespace\0localOnline\0sdBusy\0"
    "sdCapacity\0sdFreespace\0sdOnline\0"
};

void FileSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileSystem *_t = static_cast<FileSystem *>(_o);
        switch (_id) {
        case 0: _t->boxCapacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->boxFreespaceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->boxOnlineChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->dropboxCapacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->dropboxFreespaceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->dropboxOnlineChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->localBusyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->localCapacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->localFreespaceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->localOnlineChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->sdBusyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->sdCapacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->sdFreespaceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->sdOnlineChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->onBoxDrivePpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 15: _t->onDropboxDrivePpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 16: _t->onLocalDrivePpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 17: _t->onSdDrivePpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileSystem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileSystem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileSystem,
      qt_meta_data_FileSystem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileSystem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileSystem))
        return static_cast<void*>(const_cast< FileSystem*>(this));
    return QObject::qt_metacast(_clname);
}

int FileSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = boxCapacity(); break;
        case 1: *reinterpret_cast< int*>(_v) = boxFreespace(); break;
        case 2: *reinterpret_cast< bool*>(_v) = boxOnline(); break;
        case 3: *reinterpret_cast< int*>(_v) = dropboxCapacity(); break;
        case 4: *reinterpret_cast< int*>(_v) = dropboxFreespace(); break;
        case 5: *reinterpret_cast< bool*>(_v) = dropboxOnline(); break;
        case 6: *reinterpret_cast< bool*>(_v) = localBusy(); break;
        case 7: *reinterpret_cast< int*>(_v) = localCapacity(); break;
        case 8: *reinterpret_cast< int*>(_v) = localFreespace(); break;
        case 9: *reinterpret_cast< bool*>(_v) = localOnline(); break;
        case 10: *reinterpret_cast< bool*>(_v) = sdBusy(); break;
        case 11: *reinterpret_cast< int*>(_v) = sdCapacity(); break;
        case 12: *reinterpret_cast< int*>(_v) = sdFreespace(); break;
        case 13: *reinterpret_cast< bool*>(_v) = sdOnline(); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 14;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FileSystem::boxCapacityChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileSystem::boxFreespaceChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileSystem::boxOnlineChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileSystem::dropboxCapacityChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileSystem::dropboxFreespaceChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FileSystem::dropboxOnlineChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FileSystem::localBusyChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FileSystem::localCapacityChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FileSystem::localFreespaceChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FileSystem::localOnlineChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FileSystem::sdBusyChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FileSystem::sdCapacityChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FileSystem::sdFreespaceChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void FileSystem::sdOnlineChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
