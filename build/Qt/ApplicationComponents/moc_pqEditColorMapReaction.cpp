/****************************************************************************
** Meta object code from reading C++ file 'pqEditColorMapReaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Qt/ApplicationComponents/pqEditColorMapReaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqEditColorMapReaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqEditColorMapReaction_t {
    QByteArrayData data[5];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqEditColorMapReaction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqEditColorMapReaction_t qt_meta_stringdata_pqEditColorMapReaction = {
    {
QT_MOC_LITERAL(0, 0, 22), // "pqEditColorMapReaction"
QT_MOC_LITERAL(1, 23, 17), // "updateEnableState"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 17), // "setRepresentation"
QT_MOC_LITERAL(4, 60, 21) // "pqDataRepresentation*"

    },
    "pqEditColorMapReaction\0updateEnableState\0"
    "\0setRepresentation\0pqDataRepresentation*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqEditColorMapReaction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void pqEditColorMapReaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqEditColorMapReaction *_t = static_cast<pqEditColorMapReaction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateEnableState(); break;
        case 1: _t->setRepresentation((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pqEditColorMapReaction::staticMetaObject = {
    { &pqReaction::staticMetaObject, qt_meta_stringdata_pqEditColorMapReaction.data,
      qt_meta_data_pqEditColorMapReaction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *pqEditColorMapReaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqEditColorMapReaction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_pqEditColorMapReaction.stringdata0))
        return static_cast<void*>(const_cast< pqEditColorMapReaction*>(this));
    return pqReaction::qt_metacast(_clname);
}

int pqEditColorMapReaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqReaction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE