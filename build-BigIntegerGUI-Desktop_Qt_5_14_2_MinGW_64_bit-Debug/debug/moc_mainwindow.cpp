/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[356];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "on_pushButtonExit_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 25), // "on_pushButtonPlus_clicked"
QT_MOC_LITERAL(4, 64, 26), // "on_pushButtonMinus_clicked"
QT_MOC_LITERAL(5, 91, 29), // "on_pushButtonMultiply_clicked"
QT_MOC_LITERAL(6, 121, 29), // "on_pushButtonDivision_clicked"
QT_MOC_LITERAL(7, 151, 27), // "on_pushButtonModulo_clicked"
QT_MOC_LITERAL(8, 179, 28), // "on_pushButtonGreater_clicked"
QT_MOC_LITERAL(9, 208, 25), // "on_pushButtonLess_clicked"
QT_MOC_LITERAL(10, 234, 33), // "on_pushButtonGreaterEqual_cli..."
QT_MOC_LITERAL(11, 268, 30), // "on_pushButtonLessEqual_clicked"
QT_MOC_LITERAL(12, 299, 26), // "on_pushButtonEqual_clicked"
QT_MOC_LITERAL(13, 326, 29) // "on_pushButtonNotEqual_clicked"

    },
    "MainWindow\0on_pushButtonExit_clicked\0"
    "\0on_pushButtonPlus_clicked\0"
    "on_pushButtonMinus_clicked\0"
    "on_pushButtonMultiply_clicked\0"
    "on_pushButtonDivision_clicked\0"
    "on_pushButtonModulo_clicked\0"
    "on_pushButtonGreater_clicked\0"
    "on_pushButtonLess_clicked\0"
    "on_pushButtonGreaterEqual_clicked\0"
    "on_pushButtonLessEqual_clicked\0"
    "on_pushButtonEqual_clicked\0"
    "on_pushButtonNotEqual_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonExit_clicked(); break;
        case 1: _t->on_pushButtonPlus_clicked(); break;
        case 2: _t->on_pushButtonMinus_clicked(); break;
        case 3: _t->on_pushButtonMultiply_clicked(); break;
        case 4: _t->on_pushButtonDivision_clicked(); break;
        case 5: _t->on_pushButtonModulo_clicked(); break;
        case 6: _t->on_pushButtonGreater_clicked(); break;
        case 7: _t->on_pushButtonLess_clicked(); break;
        case 8: _t->on_pushButtonGreaterEqual_clicked(); break;
        case 9: _t->on_pushButtonLessEqual_clicked(); break;
        case 10: _t->on_pushButtonEqual_clicked(); break;
        case 11: _t->on_pushButtonNotEqual_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
