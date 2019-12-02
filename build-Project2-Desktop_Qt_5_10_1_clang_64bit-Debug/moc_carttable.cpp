/****************************************************************************
** Meta object code from reading C++ file 'carttable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Project2/carttable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'carttable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CartTable_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CartTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CartTable_t qt_meta_stringdata_CartTable = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CartTable"
QT_MOC_LITERAL(1, 10, 10), // "addToTable"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 13), // "checkoutTable"
QT_MOC_LITERAL(4, 36, 7), // "setCart"
QT_MOC_LITERAL(5, 44, 24), // "QList<QTableWidgetItem*>"
QT_MOC_LITERAL(6, 69, 7) // "getCart"

    },
    "CartTable\0addToTable\0\0checkoutTable\0"
    "setCart\0QList<QTableWidgetItem*>\0"
    "getCart"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CartTable[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       3,    1,   37,    2, 0x0a /* Public */,
       4,    1,   40,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    0x80000000 | 5,

       0        // eod
};

void CartTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CartTable *_t = static_cast<CartTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addToTable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->checkoutTable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setCart((*reinterpret_cast< QList<QTableWidgetItem*>(*)>(_a[1]))); break;
        case 3: { QList<QTableWidgetItem*> _r = _t->getCart();
            if (_a[0]) *reinterpret_cast< QList<QTableWidgetItem*>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CartTable::staticMetaObject = {
    { &DatabaseTable::staticMetaObject, qt_meta_stringdata_CartTable.data,
      qt_meta_data_CartTable,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CartTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CartTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CartTable.stringdata0))
        return static_cast<void*>(this);
    return DatabaseTable::qt_metacast(_clname);
}

int CartTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DatabaseTable::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
