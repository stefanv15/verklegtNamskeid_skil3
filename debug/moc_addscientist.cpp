/****************************************************************************
** Meta object code from reading C++ file 'addscientist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addscientist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addscientist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddScientist_t {
    QByteArrayData data[8];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddScientist_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddScientist_t qt_meta_stringdata_AddScientist = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AddScientist"
QT_MOC_LITERAL(1, 13, 23), // "on_check_isdead_toggled"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "checked"
QT_MOC_LITERAL(4, 46, 35), // "on_button_addScientist_save_c..."
QT_MOC_LITERAL(5, 82, 37), // "on_button_addScientist_cancel..."
QT_MOC_LITERAL(6, 120, 44), // "on_checkBox_addScientist_isde..."
QT_MOC_LITERAL(7, 165, 4) // "arg1"

    },
    "AddScientist\0on_check_isdead_toggled\0"
    "\0checked\0on_button_addScientist_save_clicked\0"
    "on_button_addScientist_cancel_clicked\0"
    "on_checkBox_addScientist_isdead_stateChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddScientist[] = {

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
       5,    0,   38,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void AddScientist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddScientist *_t = static_cast<AddScientist *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_check_isdead_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_button_addScientist_save_clicked(); break;
        case 2: _t->on_button_addScientist_cancel_clicked(); break;
        case 3: _t->on_checkBox_addScientist_isdead_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AddScientist::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddScientist.data,
      qt_meta_data_AddScientist,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddScientist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddScientist::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddScientist.stringdata0))
        return static_cast<void*>(const_cast< AddScientist*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddScientist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
