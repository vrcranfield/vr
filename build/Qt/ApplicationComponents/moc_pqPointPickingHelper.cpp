/****************************************************************************
** Meta object code from reading C++ file 'pqPointPickingHelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Qt/ApplicationComponents/pqPointPickingHelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPointPickingHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPointPickingHelper_t {
    QByteArrayData data[11];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPointPickingHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPointPickingHelper_t qt_meta_stringdata_pqPointPickingHelper = {
    {
QT_MOC_LITERAL(0, 0, 20), // "pqPointPickingHelper"
QT_MOC_LITERAL(1, 21, 4), // "pick"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 1), // "x"
QT_MOC_LITERAL(4, 29, 1), // "y"
QT_MOC_LITERAL(5, 31, 1), // "z"
QT_MOC_LITERAL(6, 33, 7), // "setView"
QT_MOC_LITERAL(7, 41, 7), // "pqView*"
QT_MOC_LITERAL(8, 49, 4), // "view"
QT_MOC_LITERAL(9, 54, 18), // "setShortcutEnabled"
QT_MOC_LITERAL(10, 73, 9) // "pickPoint"

    },
    "pqPointPickingHelper\0pick\0\0x\0y\0z\0"
    "setView\0pqView*\0view\0setShortcutEnabled\0"
    "pickPoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPointPickingHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   41,    2, 0x0a /* Public */,
       9,    1,   44,    2, 0x0a /* Public */,
      10,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void pqPointPickingHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPointPickingHelper *_t = static_cast<pqPointPickingHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->setView((*reinterpret_cast< pqView*(*)>(_a[1]))); break;
        case 2: _t->setShortcutEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->pickPoint(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (pqPointPickingHelper::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&pqPointPickingHelper::pick)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqPointPickingHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPointPickingHelper.data,
      qt_meta_data_pqPointPickingHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *pqPointPickingHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPointPickingHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_pqPointPickingHelper.stringdata0))
        return static_cast<void*>(const_cast< pqPointPickingHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int pqPointPickingHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void pqPointPickingHelper::pick(double _t1, double _t2, double _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
