/****************************************************************************
** Meta object code from reading C++ file 'ApplicationWindowSize.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ApplicationWindowSize/ApplicationWindowSize.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApplicationWindowSize.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ApplicationWindowSize[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      42,   22,   22,   22, 0x05,
      62,   22,   22,   22, 0x05,
      86,   22,   22,   22, 0x05,

 // properties: name, type, flags
     115,  111, 0x02495001,
     121,  111, 0x02495001,
     128,  111, 0x02495001,
     139,  111, 0x02495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_ApplicationWindowSize[] = {
    "ApplicationWindowSize\0\0widthChanged(int&)\0"
    "heightChanged(int&)\0coverWidthChanged(int&)\0"
    "coverHeightChanged(int&)\0int\0width\0"
    "height\0coverWidth\0coverHeight\0"
};

void ApplicationWindowSize::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ApplicationWindowSize *_t = static_cast<ApplicationWindowSize *>(_o);
        switch (_id) {
        case 0: _t->widthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->coverWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->coverHeightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ApplicationWindowSize::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ApplicationWindowSize::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ApplicationWindowSize,
      qt_meta_data_ApplicationWindowSize, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ApplicationWindowSize::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ApplicationWindowSize::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ApplicationWindowSize::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationWindowSize))
        return static_cast<void*>(const_cast< ApplicationWindowSize*>(this));
    return QObject::qt_metacast(_clname);
}

int ApplicationWindowSize::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< int*>(_v) = width(); break;
        case 1: *reinterpret_cast< int*>(_v) = height(); break;
        case 2: *reinterpret_cast< int*>(_v) = coverWidth(); break;
        case 3: *reinterpret_cast< int*>(_v) = coverHeight(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ApplicationWindowSize::widthChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ApplicationWindowSize::heightChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ApplicationWindowSize::coverWidthChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ApplicationWindowSize::coverHeightChanged(int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
