/****************************************************************************
** Meta object code from reading C++ file 'pqPluginDocumentationBehavior.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Qt/ApplicationComponents/pqPluginDocumentationBehavior.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqPluginDocumentationBehavior.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pqPluginDocumentationBehavior_t {
    QByteArrayData data[6];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pqPluginDocumentationBehavior_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pqPluginDocumentationBehavior_t qt_meta_stringdata_pqPluginDocumentationBehavior = {
    {
QT_MOC_LITERAL(0, 0, 29), // "pqPluginDocumentationBehavior"
QT_MOC_LITERAL(1, 30, 12), // "updatePlugin"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 12), // "vtkPVPlugin*"
QT_MOC_LITERAL(4, 57, 13), // "updatePlugins"
QT_MOC_LITERAL(5, 71, 17) // "refreshHelpEngine"

    },
    "pqPluginDocumentationBehavior\0"
    "updatePlugin\0\0vtkPVPlugin*\0updatePlugins\0"
    "refreshHelpEngine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pqPluginDocumentationBehavior[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x09 /* Protected */,
       4,    0,   32,    2, 0x09 /* Protected */,
       5,    0,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pqPluginDocumentationBehavior::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pqPluginDocumentationBehavior *_t = static_cast<pqPluginDocumentationBehavior *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePlugin((*reinterpret_cast< vtkPVPlugin*(*)>(_a[1]))); break;
        case 1: _t->updatePlugins(); break;
        case 2: _t->refreshHelpEngine(); break;
        default: ;
        }
    }
}

const QMetaObject pqPluginDocumentationBehavior::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqPluginDocumentationBehavior.data,
      qt_meta_data_pqPluginDocumentationBehavior,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *pqPluginDocumentationBehavior::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pqPluginDocumentationBehavior::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_pqPluginDocumentationBehavior.stringdata0))
        return static_cast<void*>(const_cast< pqPluginDocumentationBehavior*>(this));
    return QObject::qt_metacast(_clname);
}

int pqPluginDocumentationBehavior::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
