/****************************************************************************
** Meta object code from reading C++ file 'CalculateForm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PhysicalCalculator/CalculateForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CalculateForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalculateForm_t {
    QByteArrayData data[10];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalculateForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalculateForm_t qt_meta_stringdata_CalculateForm = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CalculateForm"
QT_MOC_LITERAL(1, 14, 14), // "digits_numbers"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 25), // "on_pushButton_dot_clicked"
QT_MOC_LITERAL(4, 56, 10), // "operations"
QT_MOC_LITERAL(5, 67, 15), // "math_operations"
QT_MOC_LITERAL(6, 83, 26), // "on_pushButton_ravn_clicked"
QT_MOC_LITERAL(7, 110, 23), // "on_pushButton_C_clicked"
QT_MOC_LITERAL(8, 134, 31), // "on_pushButton_fisic_cal_clicked"
QT_MOC_LITERAL(9, 166, 25) // "on_pushButton_C_2_clicked"

    },
    "CalculateForm\0digits_numbers\0\0"
    "on_pushButton_dot_clicked\0operations\0"
    "math_operations\0on_pushButton_ravn_clicked\0"
    "on_pushButton_C_clicked\0"
    "on_pushButton_fisic_cal_clicked\0"
    "on_pushButton_C_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalculateForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void CalculateForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CalculateForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->digits_numbers(); break;
        case 1: _t->on_pushButton_dot_clicked(); break;
        case 2: _t->operations(); break;
        case 3: _t->math_operations(); break;
        case 4: _t->on_pushButton_ravn_clicked(); break;
        case 5: _t->on_pushButton_C_clicked(); break;
        case 6: _t->on_pushButton_fisic_cal_clicked(); break;
        case 7: _t->on_pushButton_C_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CalculateForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CalculateForm.data,
    qt_meta_data_CalculateForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CalculateForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalculateForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalculateForm.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CalculateForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE