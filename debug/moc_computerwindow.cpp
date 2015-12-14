/****************************************************************************
** Meta object code from reading C++ file 'computerwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../computerwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'computerwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ComputerWindow_t {
    QByteArrayData data[13];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComputerWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComputerWindow_t qt_meta_stringdata_ComputerWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ComputerWindow"
QT_MOC_LITERAL(1, 15, 14), // "sectionClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "index"
QT_MOC_LITERAL(4, 37, 26), // "on_ComputerWindow_accepted"
QT_MOC_LITERAL(5, 64, 33), // "on_button_computer_return_cli..."
QT_MOC_LITERAL(6, 98, 36), // "on_button_computer_deleteCpu_..."
QT_MOC_LITERAL(7, 135, 33), // "on_button_computer_addCpu_cli..."
QT_MOC_LITERAL(8, 169, 21), // "on_buttonEdit_clicked"
QT_MOC_LITERAL(9, 191, 17), // "on_btnAdd_clicked"
QT_MOC_LITERAL(10, 209, 17), // "on_btnDel_clicked"
QT_MOC_LITERAL(11, 227, 25), // "on_EditSearch_textChanged"
QT_MOC_LITERAL(12, 253, 35) // "on_button_computer_relation_c..."

    },
    "ComputerWindow\0sectionClicked\0\0index\0"
    "on_ComputerWindow_accepted\0"
    "on_button_computer_return_clicked\0"
    "on_button_computer_deleteCpu_clicked\0"
    "on_button_computer_addCpu_clicked\0"
    "on_buttonEdit_clicked\0on_btnAdd_clicked\0"
    "on_btnDel_clicked\0on_EditSearch_textChanged\0"
    "on_button_computer_relation_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComputerWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ComputerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ComputerWindow *_t = static_cast<ComputerWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sectionClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_ComputerWindow_accepted(); break;
        case 2: _t->on_button_computer_return_clicked(); break;
        case 3: _t->on_button_computer_deleteCpu_clicked(); break;
        case 4: _t->on_button_computer_addCpu_clicked(); break;
        case 5: _t->on_buttonEdit_clicked(); break;
        case 6: _t->on_btnAdd_clicked(); break;
        case 7: _t->on_btnDel_clicked(); break;
        case 8: _t->on_EditSearch_textChanged(); break;
        case 9: _t->on_button_computer_relation_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ComputerWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ComputerWindow.data,
      qt_meta_data_ComputerWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ComputerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComputerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ComputerWindow.stringdata0))
        return static_cast<void*>(const_cast< ComputerWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int ComputerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
