/****************************************************************************
** Meta object code from reading C++ file 'FacedownAndPickup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/FacedownAndPickup/FacedownAndPickup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FacedownAndPickup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FacedownAndPickup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      11,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      49,   18,   18,   18, 0x05,
      77,   18,   18,   18, 0x05,
     108,   18,   18,   18, 0x05,
     144,   18,   18,   18, 0x05,
     173,   18,   18,   18, 0x05,
     207,   18,   18,   18, 0x05,
     236,   18,   18,   18, 0x05,
     270,   18,   18,   18, 0x05,
     301,   18,   18,   18, 0x05,
     337,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     358,   18,   18,   18, 0x08,

 // properties: name, type, flags
     391,  386, 0x01495001,
     407,  386, 0x01495001,
     425,  421, 0x02495001,
     443,  421, 0x02495001,
     466,  421, 0x02495001,
     482,  421, 0x02495001,
     503,  421, 0x02495001,
     519,  421, 0x02495001,
     540,  421, 0x02495001,
     558,  421, 0x02495001,
     581,  386, 0x01495001,

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

       0        // eod
};

static const char qt_meta_stringdata_FacedownAndPickup[] = {
    "FacedownAndPickup\0\0facedownEnabledChanged(bool&)\0"
    "pickupEnabledChanged(bool&)\0"
    "awakeFromFacedownChanged(int&)\0"
    "awakeFromFacedownTodayChanged(int&)\0"
    "awakeFromPickupChanged(int&)\0"
    "awakeFromPickupTodayChanged(int&)\0"
    "screenTimeSavedChanged(int&)\0"
    "screenTimeSavedTodayChanged(int&)\0"
    "standbyByFacedownChanged(int&)\0"
    "standbyByFacedownTodayChanged(int&)\0"
    "inHandChanged(bool&)\0onPpsFileReady(QVariantMap)\0"
    "bool\0facedownEnabled\0pickupEnabled\0"
    "int\0awakeFromFacedown\0awakeFromFacedownToday\0"
    "awakeFromPickup\0awakeFromPickupToday\0"
    "screenTimeSaved\0screenTimeSavedToday\0"
    "standbyByFacedown\0standbyByFacedownToday\0"
    "inHand\0"
};

void FacedownAndPickup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FacedownAndPickup *_t = static_cast<FacedownAndPickup *>(_o);
        switch (_id) {
        case 0: _t->facedownEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->pickupEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->awakeFromFacedownChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->awakeFromFacedownTodayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->awakeFromPickupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->awakeFromPickupTodayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->screenTimeSavedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->screenTimeSavedTodayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->standbyByFacedownChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->standbyByFacedownTodayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->inHandChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FacedownAndPickup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FacedownAndPickup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FacedownAndPickup,
      qt_meta_data_FacedownAndPickup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FacedownAndPickup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FacedownAndPickup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FacedownAndPickup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FacedownAndPickup))
        return static_cast<void*>(const_cast< FacedownAndPickup*>(this));
    return QObject::qt_metacast(_clname);
}

int FacedownAndPickup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = facedownEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = pickupEnabled(); break;
        case 2: *reinterpret_cast< int*>(_v) = awakeFromFacedown(); break;
        case 3: *reinterpret_cast< int*>(_v) = awakeFromFacedownToday(); break;
        case 4: *reinterpret_cast< int*>(_v) = awakeFromPickup(); break;
        case 5: *reinterpret_cast< int*>(_v) = awakeFromPickupToday(); break;
        case 6: *reinterpret_cast< int*>(_v) = screenTimeSaved(); break;
        case 7: *reinterpret_cast< int*>(_v) = screenTimeSavedToday(); break;
        case 8: *reinterpret_cast< int*>(_v) = standbyByFacedown(); break;
        case 9: *reinterpret_cast< int*>(_v) = standbyByFacedownToday(); break;
        case 10: *reinterpret_cast< bool*>(_v) = inHand(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FacedownAndPickup::facedownEnabledChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FacedownAndPickup::pickupEnabledChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FacedownAndPickup::awakeFromFacedownChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FacedownAndPickup::awakeFromFacedownTodayChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FacedownAndPickup::awakeFromPickupChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FacedownAndPickup::awakeFromPickupTodayChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FacedownAndPickup::screenTimeSavedChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FacedownAndPickup::screenTimeSavedTodayChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FacedownAndPickup::standbyByFacedownChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FacedownAndPickup::standbyByFacedownTodayChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FacedownAndPickup::inHandChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
