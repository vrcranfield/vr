/****************************************************************************
** Meta object code from reading C++ file 'pqVRQueueHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Plugins/VR/pqVRQueueHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqVRQueueHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqVRQueueHandler_t {
    QByteArrayData data[13];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqVRQueueHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqVRQueueHandler_t qt_meta_stringdata_pqVRQueueHandler = {
    {
QT_MOC_LITERAL(0, 0, 16), // "pqVRQueueHandler"
QT_MOC_LITERAL(1, 17, 13), // "stylesChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "start"
QT_MOC_LITERAL(4, 38, 4), // "stop"
QT_MOC_LITERAL(5, 43, 15), // "configureStyles"
QT_MOC_LITERAL(6, 59, 16), // "vtkPVXMLElement*"
QT_MOC_LITERAL(7, 76, 3), // "xml"
QT_MOC_LITERAL(8, 80, 18), // "vtkSMProxyLocator*"
QT_MOC_LITERAL(9, 99, 7), // "locator"
QT_MOC_LITERAL(10, 107, 23), // "saveStylesConfiguration"
QT_MOC_LITERAL(11, 131, 4), // "root"
QT_MOC_LITERAL(12, 136, 13) // "processEvents"

    },
    "pqVRQueueHandler\0stylesChanged\0\0start\0"
    "stop\0configureStyles\0vtkPVXMLElement*\0"
    "xml\0vtkSMProxyLocator*\0locator\0"
    "saveStylesConfiguration\0root\0processEvents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqVRQueueHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    2,   47,    2, 0x0a /* Public */,
      10,    1,   52,    2, 0x0a /* Public */,
      12,    0,   55,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 6,   11,
    QMetaType::Void,

       0        // eod
};

void pqVRQueueHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqVRQueueHandler *_t = static_cast<pqVRQueueHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stylesChanged(); break;
        case 1: _t->start(); break;
        case 2: _t->stop(); break;
        case 3: _t->configureStyles((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1])),(*reinterpret_cast< vtkSMProxyLocator*(*)>(_a[2]))); break;
        case 4: _t->saveStylesConfiguration((*reinterpret_cast< vtkPVXMLElement*(*)>(_a[1]))); break;
        case 5: _t->processEvents(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (pqVRQueueHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&pqVRQueueHandler::stylesChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqVRQueueHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqVRQueueHandler.data,
      qt_meta_data_pqVRQueueHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *pqVRQueueHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqVRQueueHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_pqVRQueueHandler.stringdata0))
        return static_cast<void*>(const_cast< pqVRQueueHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int pqVRQueueHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void pqVRQueueHandler::stylesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
