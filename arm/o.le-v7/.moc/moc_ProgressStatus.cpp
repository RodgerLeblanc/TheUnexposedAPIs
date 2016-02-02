/****************************************************************************
** Meta object code from reading C++ file 'ProgressStatus.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ProgressStatus/ProgressStatus.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProgressStatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProgressStatus[] = {

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
      16,   15,   15,   15, 0x05,
      37,   15,   15,   15, 0x05,
      63,   15,   15,   15, 0x05,
      85,   15,   15,   15, 0x05,
     108,   15,   15,   15, 0x05,
     130,   15,   15,   15, 0x05,
     157,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     180,   15,   15,   15, 0x08,

 // properties: name, type, flags
     216,  208, 0x0a495001,
     224,  220, 0x02495001,
     237,  220, 0x02495001,
     246,  208, 0x0a495001,
     252,  208, 0x0a495001,
     257,  208, 0x0a495001,
     267,  208, 0x0a495001,

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

static const char qt_meta_stringdata_ProgressStatus[] = {
    "ProgressStatus\0\0appChanged(QString&)\0"
    "currentValueChanged(int&)\0"
    "endValueChanged(int&)\0errorChanged(QString&)\0"
    "itemChanged(QString&)\0operationChanged(QString&)\0"
    "unitsChanged(QString&)\0"
    "onPpsFileReady(QVariantMap)\0QString\0"
    "app\0int\0currentValue\0endValue\0error\0"
    "item\0operation\0units\0"
};

void ProgressStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProgressStatus *_t = static_cast<ProgressStatus *>(_o);
        switch (_id) {
        case 0: _t->appChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->currentValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->endValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->errorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->itemChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->operationChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->unitsChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProgressStatus::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProgressStatus::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ProgressStatus,
      qt_meta_data_ProgressStatus, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProgressStatus::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProgressStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProgressStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProgressStatus))
        return static_cast<void*>(const_cast< ProgressStatus*>(this));
    return QObject::qt_metacast(_clname);
}

int ProgressStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QString*>(_v) = app(); break;
        case 1: *reinterpret_cast< int*>(_v) = currentValue(); break;
        case 2: *reinterpret_cast< int*>(_v) = endValue(); break;
        case 3: *reinterpret_cast< QString*>(_v) = error(); break;
        case 4: *reinterpret_cast< QString*>(_v) = item(); break;
        case 5: *reinterpret_cast< QString*>(_v) = operation(); break;
        case 6: *reinterpret_cast< QString*>(_v) = units(); break;
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
void ProgressStatus::appChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProgressStatus::currentValueChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProgressStatus::endValueChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProgressStatus::errorChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ProgressStatus::itemChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ProgressStatus::operationChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ProgressStatus::unitsChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
