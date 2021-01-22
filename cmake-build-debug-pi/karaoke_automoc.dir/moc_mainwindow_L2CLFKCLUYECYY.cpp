/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 4), // "play"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 6), // "replay"
QT_MOC_LITERAL(4, 24, 4), // "next"
QT_MOC_LITERAL(5, 29, 4), // "mute"
QT_MOC_LITERAL(6, 34, 12), // "changeVolume"
QT_MOC_LITERAL(7, 47, 6), // "volume"
QT_MOC_LITERAL(8, 54, 14), // "changePosition"
QT_MOC_LITERAL(9, 69, 8), // "position"
QT_MOC_LITERAL(10, 78, 17), // "changeSearchField"
QT_MOC_LITERAL(11, 96, 8), // "readFile"
QT_MOC_LITERAL(12, 105, 10), // "loadBrowse"
QT_MOC_LITERAL(13, 116, 11), // "resetBrowse"
QT_MOC_LITERAL(14, 128, 5), // "input"
QT_MOC_LITERAL(15, 134, 10), // "selectSong"
QT_MOC_LITERAL(16, 145, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(17, 162, 4), // "item"
QT_MOC_LITERAL(18, 167, 11), // "displayText"
QT_MOC_LITERAL(19, 179, 8), // "songName"
QT_MOC_LITERAL(20, 188, 6) // "singer"

    },
    "MainWindow\0play\0\0replay\0next\0mute\0"
    "changeVolume\0volume\0changePosition\0"
    "position\0changeSearchField\0readFile\0"
    "loadBrowse\0resetBrowse\0input\0selectSong\0"
    "QListWidgetItem*\0item\0displayText\0"
    "songName\0singer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
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
       6,    1,   78,    2, 0x08 /* Private */,
       8,    1,   81,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    1,   87,    2, 0x08 /* Private */,
      15,    1,   90,    2, 0x08 /* Private */,
      18,    2,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   19,   20,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->play(); break;
        case 1: _t->replay(); break;
        case 2: _t->next(); break;
        case 3: _t->mute(); break;
        case 4: _t->changeVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->changePosition((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->changeSearchField(); break;
        case 7: _t->readFile(); break;
        case 8: _t->loadBrowse(); break;
        case 9: _t->resetBrowse((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->selectSong((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: { QString _r = _t->displayText((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
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
QT_END_MOC_NAMESPACE
