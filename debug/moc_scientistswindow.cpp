/****************************************************************************
** Meta object code from reading C++ file 'scientistswindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scientistswindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scientistswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScientistsWindow_t {
    QByteArrayData data[10];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScientistsWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScientistsWindow_t qt_meta_stringdata_ScientistsWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ScientistsWindow"
QT_MOC_LITERAL(1, 17, 21), // "on_ret_button_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 40), // "on_button_scientist_addScient..."
QT_MOC_LITERAL(4, 81, 41), // "on_button_scientist_editscien..."
QT_MOC_LITERAL(5, 123, 30), // "on_search_students_textChanged"
QT_MOC_LITERAL(6, 154, 40), // "on_button_Scientist_delscient..."
QT_MOC_LITERAL(7, 195, 36), // "on_button_scientist_relation_..."
QT_MOC_LITERAL(8, 232, 33), // "on_table_scientists_doubleCli..."
QT_MOC_LITERAL(9, 266, 5) // "index"

    },
    "ScientistsWindow\0on_ret_button_clicked\0"
    "\0on_button_scientist_addScientist_clicked\0"
    "on_button_scientist_editscientist_clicked\0"
    "on_search_students_textChanged\0"
    "on_button_Scientist_delscientist_clicked\0"
    "on_button_scientist_relation_clicked\0"
    "on_table_scientists_doubleClicked\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScientistsWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    9,

       0        // eod
};

void ScientistsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScientistsWindow *_t = static_cast<ScientistsWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ret_button_clicked(); break;
        case 1: _t->on_button_scientist_addScientist_clicked(); break;
        case 2: _t->on_button_scientist_editscientist_clicked(); break;
        case 3: _t->on_search_students_textChanged(); break;
        case 4: _t->on_button_Scientist_delscientist_clicked(); break;
        case 5: _t->on_button_scientist_relation_clicked(); break;
        case 6: _t->on_table_scientists_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ScientistsWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ScientistsWindow.data,
      qt_meta_data_ScientistsWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScientistsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScientistsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScientistsWindow.stringdata0))
        return static_cast<void*>(const_cast< ScientistsWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int ScientistsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
