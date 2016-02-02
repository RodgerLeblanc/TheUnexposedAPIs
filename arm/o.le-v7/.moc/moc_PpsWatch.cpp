/****************************************************************************
** Meta object code from reading C++ file 'PpsWatch.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/PpsWatch/PpsWatch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PpsWatch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PpsWatch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      30,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PpsWatch[] = {
    "PpsWatch\0\0logMessage(QString)\0"
    "ppsFileReady(QVariantMap)\0onPpsReadyRead()\0"
};

void PpsWatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PpsWatch *_t = static_cast<PpsWatch *>(_o);
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->ppsFileReady((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 2: _t->onPpsReadyRead(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PpsWatch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PpsWatch::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PpsWatch,
      qt_meta_data_PpsWatch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PpsWatch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PpsWatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PpsWatch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PpsWatch))
        return static_cast<void*>(const_cast< PpsWatch*>(this));
    return QObject::qt_metacast(_clname);
}

int PpsWatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PpsWatch::logMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PpsWatch::ppsFileReady(const QVariantMap & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
