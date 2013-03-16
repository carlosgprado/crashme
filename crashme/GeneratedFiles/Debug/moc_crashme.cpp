/****************************************************************************
** Meta object code from reading C++ file 'crashme.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../crashme.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crashme.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_crashme_t {
    QByteArrayData data[7];
    char stringdata[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_crashme_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_crashme_t qt_meta_stringdata_crashme = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 22),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 24),
QT_MOC_LITERAL(4, 57, 24),
QT_MOC_LITERAL(5, 82, 24),
QT_MOC_LITERAL(6, 107, 24)
    },
    "crashme\0on_crashButton_clicked\0\0"
    "on_boradioButton_clicked\0"
    "on_horadioButton_clicked\0"
    "on_umradioButton_clicked\0"
    "on_zpradioButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_crashme[] = {

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
       1,    0,   39,    2, 0x0a,
       3,    0,   40,    2, 0x0a,
       4,    0,   41,    2, 0x0a,
       5,    0,   42,    2, 0x0a,
       6,    0,   43,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void crashme::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        crashme *_t = static_cast<crashme *>(_o);
        switch (_id) {
        case 0: _t->on_crashButton_clicked(); break;
        case 1: _t->on_boradioButton_clicked(); break;
        case 2: _t->on_horadioButton_clicked(); break;
        case 3: _t->on_umradioButton_clicked(); break;
        case 4: _t->on_zpradioButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject crashme::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_crashme.data,
      qt_meta_data_crashme,  qt_static_metacall, 0, 0}
};


const QMetaObject *crashme::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *crashme::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_crashme.stringdata))
        return static_cast<void*>(const_cast< crashme*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int crashme::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
