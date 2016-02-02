/****************************************************************************
** Meta object code from reading C++ file 'Backlight.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Backlight/Backlight.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Backlight.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Backlight[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      52,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      92,   10,   10,   10, 0x08,
     147,  127,   10,   10, 0x08,
     184,   10,   10,   10, 0x08,
     218,   10,   10,   10, 0x08,

 // methods: signature, parameters, type, tag, flags
     239,  228,   10,   10, 0x02,
     275,  228,   10,   10, 0x02,
     304,  228,   10,   10, 0x02,

 // properties: name, type, flags
     339,  332, 0x06495001,
     364,  332, 0x06495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_Backlight[] = {
    "Backlight\0\0displayCurrentBrightnessChanged(double&)\0"
    "keypadCurrentBrightnessChanged(double&)\0"
    "onDisplayPpsFileReady(QVariantMap)\0"
    "exitCode,exitStatus\0"
    "onFinished(int,QProcess::ExitStatus)\0"
    "onKeypadPpsFileReady(QVariantMap)\0"
    "setback()\0brightness\0"
    "setBrightnessForThisAppOnly(double)\0"
    "setDisplayBrightness(double)\0"
    "setKeypadBrightness(double)\0double\0"
    "displayCurrentBrightness\0"
    "keypadCurrentBrightness\0"
};

void Backlight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Backlight *_t = static_cast<Backlight *>(_o);
        switch (_id) {
        case 0: _t->displayCurrentBrightnessChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->keypadCurrentBrightnessChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->onDisplayPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 3: _t->onFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 4: _t->onKeypadPpsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 5: _t->setback(); break;
        case 6: _t->setBrightnessForThisAppOnly((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 7: _t->setDisplayBrightness((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 8: _t->setKeypadBrightness((*reinterpret_cast< const double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Backlight::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Backlight::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Backlight,
      qt_meta_data_Backlight, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Backlight::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Backlight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Backlight::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Backlight))
        return static_cast<void*>(const_cast< Backlight*>(this));
    return QObject::qt_metacast(_clname);
}

int Backlight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< double*>(_v) = displayCurrentBrightness(); break;
        case 1: *reinterpret_cast< double*>(_v) = keypadCurrentBrightness(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Backlight::displayCurrentBrightnessChanged(double & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Backlight::keypadCurrentBrightnessChanged(double & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
