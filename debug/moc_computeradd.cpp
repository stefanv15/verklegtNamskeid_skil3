/****************************************************************************
** Meta object code from reading C++ file 'computeradd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../computeradd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'computeradd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ComputerAdd_t {
    QByteArrayData data[8];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComputerAdd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComputerAdd_t qt_meta_stringdata_ComputerAdd = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ComputerAdd"
QT_MOC_LITERAL(1, 12, 19), // "on_checkBox_toggled"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "checked"
QT_MOC_LITERAL(4, 41, 34), // "on_button_computerAdd_save_cl..."
QT_MOC_LITERAL(5, 76, 45), // "on_checkbox_computerAdd_wasBu..."
QT_MOC_LITERAL(6, 122, 4), // "arg1"
QT_MOC_LITERAL(7, 127, 36) // "on_button_computeradd_cancel_..."

    },
    "ComputerAdd\0on_checkBox_toggled\0\0"
    "checked\0on_button_computerAdd_save_clicked\0"
    "on_checkbox_computerAdd_wasBuilt_stateChanged\0"
    "arg1\0on_button_computeradd_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComputerAdd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void ComputerAdd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ComputerAdd *_t = static_cast<ComputerAdd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_button_computerAdd_save_clicked(); break;
        case 2: _t->on_checkbox_computerAdd_wasBuilt_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_button_computeradd_cancel_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ComputerAdd::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ComputerAdd.data,
      qt_meta_data_ComputerAdd,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ComputerAdd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComputerAdd::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ComputerAdd.stringdata0))
        return static_cast<void*>(const_cast< ComputerAdd*>(this));
    return QDialog::qt_metacast(_clname);
}

int ComputerAdd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
