/****************************************************************************
** Meta object code from reading C++ file 'pqProgressWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Qt/Widgets/pqProgressWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqProgressWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqProgressWidget_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqProgressWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqProgressWidget_t qt_meta_stringdata_pqProgressWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "pqProgressWidget"
QT_MOC_LITERAL(1, 17, 12), // "abortPressed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "setProgress"
QT_MOC_LITERAL(4, 43, 7), // "message"
QT_MOC_LITERAL(5, 51, 5), // "value"
QT_MOC_LITERAL(6, 57, 14), // "enableProgress"
QT_MOC_LITERAL(7, 72, 7), // "enabled"
QT_MOC_LITERAL(8, 80, 11) // "enableAbort"

    },
    "pqProgressWidget\0abortPressed\0\0"
    "setProgress\0message\0value\0enableProgress\0"
    "enabled\0enableAbort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqProgressWidget[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   35,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void pqProgressWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqProgressWidget *_t = static_cast<pqProgressWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->abortPressed(); break;
        case 1: _t->setProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->enableProgress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableAbort((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (pqProgressWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&pqProgressWidget::abortPressed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject pqProgressWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pqProgressWidget.data,
      qt_meta_data_pqProgressWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *pqProgressWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqProgressWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_pqProgressWidget.stringdata0))
        return static_cast<void*>(const_cast< pqProgressWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int pqProgressWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void pqProgressWidget::abortPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
