/****************************************************************************
** Meta object code from reading C++ file 'pqBoxChartView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Qt/Core/pqBoxChartView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqBoxChartView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqBoxChartView_t {
    QByteArrayData data[10];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqBoxChartView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqBoxChartView_t qt_meta_stringdata_pqBoxChartView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "pqBoxChartView"
QT_MOC_LITERAL(1, 15, 7), // "showing"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 21), // "pqDataRepresentation*"
QT_MOC_LITERAL(4, 46, 4), // "repr"
QT_MOC_LITERAL(5, 51, 19), // "onAddRepresentation"
QT_MOC_LITERAL(6, 71, 17), // "pqRepresentation*"
QT_MOC_LITERAL(7, 89, 22), // "onRemoveRepresentation"
QT_MOC_LITERAL(8, 112, 30), // "updateRepresentationVisibility"
QT_MOC_LITERAL(9, 143, 7) // "visible"

    },
    "pqBoxChartView\0showing\0\0pqDataRepresentation*\0"
    "repr\0onAddRepresentation\0pqRepresentation*\0"
    "onRemoveRepresentation\0"
    "updateRepresentationVisibility\0visible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqBoxChartView[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       8,    2,   43,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,    4,    9,

       0        // eod
};

void pqBoxChartView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqBoxChartView *_t = static_cast<pqBoxChartView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showing((*reinterpret_cast< pqDataRepresentation*(*)>(_a[1]))); break;
        case 1: _t->onAddRepresentation((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 2: _t->onRemoveRepresentation((*reinterpret_cast< pqRepresentation*(*)>(_a[1]))); break;
        case 3: _t->updateRepresentationVisibility((*reinterpret_cast< pqRepresentation*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (pqBoxChartView::*_t)(pqDataRepresentation * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&pqBoxChartView::showing)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqBoxChartView::staticMetaObject = {
    { &pqContextView::staticMetaObject, qt_meta_stringdata_pqBoxChartView.data,
      qt_meta_data_pqBoxChartView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *pqBoxChartView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqBoxChartView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_pqBoxChartView.stringdata0))
        return static_cast<void*>(const_cast< pqBoxChartView*>(this));
    return pqContextView::qt_metacast(_clname);
}

int pqBoxChartView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pqContextView::qt_metacall(_c, _id, _a);
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
void pqBoxChartView::showing(pqDataRepresentation * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
