/****************************************************************************
** Meta object code from reading C++ file 'pqSplinePropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Qt/ApplicationComponents/pqSplinePropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqSplinePropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqSplinePropertyWidget_t {
    QByteArrayData data[10];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqSplinePropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqSplinePropertyWidget_t qt_meta_stringdata_pqSplinePropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "pqSplinePropertyWidget"
QT_MOC_LITERAL(1, 23, 12), // "setLineColor"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "placeWidget"
QT_MOC_LITERAL(4, 49, 8), // "addPoint"
QT_MOC_LITERAL(5, 58, 12), // "removePoints"
QT_MOC_LITERAL(6, 71, 4), // "pick"
QT_MOC_LITERAL(7, 76, 1), // "x"
QT_MOC_LITERAL(8, 78, 1), // "y"
QT_MOC_LITERAL(9, 80, 1) // "z"

    },
    "pqSplinePropertyWidget\0setLineColor\0"
    "\0placeWidget\0addPoint\0removePoints\0"
    "pick\0x\0y\0z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqSplinePropertyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       3,    0,   42,    2, 0x09 /* Protected */,
       4,    0,   43,    2, 0x08 /* Private */,
       5,    0,   44,    2, 0x08 /* Private */,
       6,    3,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    7,    8,    9,

       0        // eod
};

void pqSplinePropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqSplinePropertyWidget *_t = static_cast<pqSplinePropertyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setLineColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->placeWidget(); break;
        case 2: _t->addPoint(); break;
        case 3: _t->removePoints(); break;
        case 4: _t->pick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject pqSplinePropertyWidget::staticMetaObject = {
    { &pqInteractivePropertyWidget::staticMetaObject, qt_meta_stringdata_pqSplinePropertyWidget.data,
      qt_meta_data_pqSplinePropertyWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *pqSplinePropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqSplinePropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_pqSplinePropertyWidget.stringdata0))
        return static_cast<void*>(const_cast< pqSplinePropertyWidget*>(this));
    return pqInteractivePropertyWidget::qt_metacast(_clname);
}

int pqSplinePropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqInteractivePropertyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
