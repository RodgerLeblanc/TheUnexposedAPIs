/****************************************************************************
** Meta object code from reading C++ file 'AppLauncher.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AppLauncher/AppLauncher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AppLauncher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AppLauncher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_AppLauncher[] = {
    "AppLauncher\0\0appId\0openThisApp(QString)\0"
};

void AppLauncher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AppLauncher *_t = static_cast<AppLauncher *>(_o);
        switch (_id) {
        case 0: _t->openThisApp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AppLauncher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AppLauncher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AppLauncher,
      qt_meta_data_AppLauncher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AppLauncher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AppLauncher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AppLauncher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AppLauncher))
        return static_cast<void*>(const_cast< AppLauncher*>(this));
    return QObject::qt_metacast(_clname);
}

int AppLauncher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
