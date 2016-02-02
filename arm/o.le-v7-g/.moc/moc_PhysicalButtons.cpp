/****************************************************************************
** Meta object code from reading C++ file 'PhysicalButtons.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/PhysicalButtons/PhysicalButtons.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PhysicalButtons.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PhysicalButtons[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       4,  139, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      37,   16,   16,   16, 0x05,
      67,   16,   16,   16, 0x05,
     101,   16,   16,   16, 0x05,
     130,   16,   16,   16, 0x05,
     160,   16,   16,   16, 0x05,
     187,   16,   16,   16, 0x05,
     212,   16,   16,   16, 0x05,
     233,   16,   16,   16, 0x05,
     264,   16,   16,   16, 0x05,
     293,   16,   16,   16, 0x05,
     318,   16,   16,   16, 0x05,
     344,   16,   16,   16, 0x05,
     368,   16,   16,   16, 0x05,
     388,   16,   16,   16, 0x05,
     415,   16,   16,   16, 0x05,
     440,   16,   16,   16, 0x05,
     461,   16,   16,   16, 0x05,
     488,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     518,   16,   16,   16, 0x08,
     535,   16,   16,   16, 0x08,
     558,   16,   16,   16, 0x08,
     585,   16,   16,   16, 0x08,
     607,   16,   16,   16, 0x08,
     630,   16,   16,   16, 0x08,

 // properties: name, type, flags
     663,  658, 0x01495001,
     679,  658, 0x01495001,
     699,  658, 0x01495001,
     714,  658, 0x01495001,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,

       0        // eod
};

static const char qt_meta_stringdata_PhysicalButtons[] = {
    "PhysicalButtons\0\0logMessage(QString)\0"
    "minusButtonIsUpChanged(bool&)\0"
    "playpauseButtonIsUpChanged(bool&)\0"
    "plusButtonIsUpChanged(bool&)\0"
    "powerButtonIsUpChanged(bool&)\0"
    "minusButtonDoublePressed()\0"
    "minusButtonLongPressed()\0minusButtonPressed()\0"
    "playpauseButtonDoublePressed()\0"
    "playpauseButtonLongPressed()\0"
    "playpauseButtonPressed()\0"
    "plusButtonDoublePressed()\0"
    "plusButtonLongPressed()\0plusButtonPressed()\0"
    "powerButtonDoublePressed()\0"
    "powerButtonLongPressed()\0powerButtonPressed()\0"
    "screenshotButtonsPressed()\0"
    "softResetButtonsLongPressed()\0"
    "onPpsReadyRead()\0onMinusButtonTimeout()\0"
    "onPlaypauseButtonTimeout()\0"
    "onPlusButtonTimeout()\0onPowerButtonTimeout()\0"
    "onSoftResetButtonsTimeout()\0bool\0"
    "minusButtonIsUp\0playpauseButtonIsUp\0"
    "plusButtonIsUp\0powerButtonIsUp\0"
};

void PhysicalButtons::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PhysicalButtons *_t = static_cast<PhysicalButtons *>(_o);
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->minusButtonIsUpChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->playpauseButtonIsUpChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->plusButtonIsUpChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->powerButtonIsUpChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->minusButtonDoublePressed(); break;
        case 6: _t->minusButtonLongPressed(); break;
        case 7: _t->minusButtonPressed(); break;
        case 8: _t->playpauseButtonDoublePressed(); break;
        case 9: _t->playpauseButtonLongPressed(); break;
        case 10: _t->playpauseButtonPressed(); break;
        case 11: _t->plusButtonDoublePressed(); break;
        case 12: _t->plusButtonLongPressed(); break;
        case 13: _t->plusButtonPressed(); break;
        case 14: _t->powerButtonDoublePressed(); break;
        case 15: _t->powerButtonLongPressed(); break;
        case 16: _t->powerButtonPressed(); break;
        case 17: _t->screenshotButtonsPressed(); break;
        case 18: _t->softResetButtonsLongPressed(); break;
        case 19: _t->onPpsReadyRead(); break;
        case 20: _t->onMinusButtonTimeout(); break;
        case 21: _t->onPlaypauseButtonTimeout(); break;
        case 22: _t->onPlusButtonTimeout(); break;
        case 23: _t->onPowerButtonTimeout(); break;
        case 24: _t->onSoftResetButtonsTimeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PhysicalButtons::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PhysicalButtons::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PhysicalButtons,
      qt_meta_data_PhysicalButtons, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PhysicalButtons::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PhysicalButtons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PhysicalButtons::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PhysicalButtons))
        return static_cast<void*>(const_cast< PhysicalButtons*>(this));
    return QObject::qt_metacast(_clname);
}

int PhysicalButtons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = minusButtonIsUp(); break;
        case 1: *reinterpret_cast< bool*>(_v) = playpauseButtonIsUp(); break;
        case 2: *reinterpret_cast< bool*>(_v) = plusButtonIsUp(); break;
        case 3: *reinterpret_cast< bool*>(_v) = powerButtonIsUp(); break;
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
void PhysicalButtons::logMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PhysicalButtons::minusButtonIsUpChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PhysicalButtons::playpauseButtonIsUpChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PhysicalButtons::plusButtonIsUpChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PhysicalButtons::powerButtonIsUpChanged(bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PhysicalButtons::minusButtonDoublePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void PhysicalButtons::minusButtonLongPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void PhysicalButtons::minusButtonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void PhysicalButtons::playpauseButtonDoublePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void PhysicalButtons::playpauseButtonLongPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void PhysicalButtons::playpauseButtonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void PhysicalButtons::plusButtonDoublePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void PhysicalButtons::plusButtonLongPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void PhysicalButtons::plusButtonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void PhysicalButtons::powerButtonDoublePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void PhysicalButtons::powerButtonLongPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void PhysicalButtons::powerButtonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 16, 0);
}

// SIGNAL 17
void PhysicalButtons::screenshotButtonsPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 17, 0);
}

// SIGNAL 18
void PhysicalButtons::softResetButtonsLongPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}
QT_END_MOC_NAMESPACE
