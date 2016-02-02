/****************************************************************************
** Meta object code from reading C++ file 'FullscreenPid.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/FullscreenPid/FullscreenPid.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FullscreenPid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FullscreenPid[] = {

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
      15,   14,   14,   14, 0x05,
      62,   14,   14,   14, 0x05,
      89,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     118,   14,   14,   14, 0x08,

 // properties: name, type, flags
     154,  146, 0x0a495001,
     188,  184, 0x02495001,
     207,  202, 0x01495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_FullscreenPid[] = {
    "FullscreenPid\0\0"
    "doNotTrustThisValueCurrWindowChanged(QString&)\0"
    "fullscreenPidChanged(int&)\0"
    "isOnHomescreenChanged(bool&)\0"
    "onPpsFileReady(QVariantMap)\0QString\0"
    "doNotTrustThisValueCurrWindow\0int\0"
    "fullscreenPid\0bool\0isOnHomescreen\0"
};

void FullscreenPid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FullscreenPid *_t = static_cast<FullscreenPid *>(_o);
        switch (_id) {
        case 0: _t->doNotTrustThisValueCurrWindowChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->fullscreenPidChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->isOnHomescreenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FullscreenPid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FullscreenPid::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FullscreenPid,
      qt_meta_data_FullscreenPid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FullscreenPid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FullscreenPid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FullscreenPid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FullscreenPid))
        return static_cast<void*>(const_cast< FullscreenPid*>(this));
    return QObject::qt_metacast(_clname);
}

int FullscreenPid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QString*>(_v) = doNotTrustThisValueCurrWindow(); break;
        case 1: *reinterpret_cast< int*>(_v) = fullscreenPid(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isOnHomescreen(); break;
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
void FullscreenPid::doNotTrustThisValueCurrWindowChanged(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FullscreenPid::fullscreenPidChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FullscreenPid::isOnHomescreenChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
