/****************************************************************************
** Meta object code from reading C++ file 'imc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TD1 - Calcul du poids ideal/TP_IMC/imc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IMC_t {
    QByteArrayData data[9];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IMC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IMC_t qt_meta_stringdata_IMC = {
    {
QT_MOC_LITERAL(0, 0, 3), // "IMC"
QT_MOC_LITERAL(1, 4, 28), // "on_pushButtonQuitter_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 26), // "on_pushButtonSuite_clicked"
QT_MOC_LITERAL(4, 61, 34), // "on_pushButtonFormuleDevine_cl..."
QT_MOC_LITERAL(5, 96, 35), // "on_pushButtonFormuleLorentz_c..."
QT_MOC_LITERAL(6, 132, 38), // "on_pushButtonFormuleLorentzAg..."
QT_MOC_LITERAL(7, 171, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(8, 199, 5) // "index"

    },
    "IMC\0on_pushButtonQuitter_clicked\0\0"
    "on_pushButtonSuite_clicked\0"
    "on_pushButtonFormuleDevine_clicked\0"
    "on_pushButtonFormuleLorentz_clicked\0"
    "on_pushButtonFormuleLorentzAge_clicked\0"
    "on_tabWidget_currentChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IMC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void IMC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IMC *_t = static_cast<IMC *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonQuitter_clicked(); break;
        case 1: _t->on_pushButtonSuite_clicked(); break;
        case 2: _t->on_pushButtonFormuleDevine_clicked(); break;
        case 3: _t->on_pushButtonFormuleLorentz_clicked(); break;
        case 4: _t->on_pushButtonFormuleLorentzAge_clicked(); break;
        case 5: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IMC::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMC.data,
      qt_meta_data_IMC,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *IMC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IMC::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IMC.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int IMC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
