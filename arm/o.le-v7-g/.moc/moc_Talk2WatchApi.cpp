/****************************************************************************
** Meta object code from reading C++ file 'Talk2WatchApi.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Pebble/Talk2WatchApi.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Talk2WatchApi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Talk2WatchApi[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      29,   15,   14,   14, 0x02,
      84,   61,   14,   14, 0x02,
     119,   15,   14,   14, 0x02,
     156,   15,   14,   14, 0x02,
     181,   15,   14,   14, 0x02,
     217,   15,   14,   14, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_Talk2WatchApi[] = {
    "Talk2WatchApi\0\0_text,_sender\0"
    "sendBbmMessage(QString,QString)\0"
    "_text,_subject,_sender\0"
    "sendEmail(QString,QString,QString)\0"
    "sendFacebookMessage(QString,QString)\0"
    "sendSms(QString,QString)\0"
    "sendTwitterMessage(QString,QString)\0"
    "sendWhatsAppMessage(QString,QString)\0"
};

void Talk2WatchApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Talk2WatchApi *_t = static_cast<Talk2WatchApi *>(_o);
        switch (_id) {
        case 0: _t->sendBbmMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->sendEmail((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->sendFacebookMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->sendSms((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->sendTwitterMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->sendWhatsAppMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Talk2WatchApi::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Talk2WatchApi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Talk2WatchApi,
      qt_meta_data_Talk2WatchApi, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Talk2WatchApi::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Talk2WatchApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Talk2WatchApi::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Talk2WatchApi))
        return static_cast<void*>(const_cast< Talk2WatchApi*>(this));
    return QObject::qt_metacast(_clname);
}

int Talk2WatchApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
