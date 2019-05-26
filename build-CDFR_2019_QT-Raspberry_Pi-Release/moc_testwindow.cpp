/****************************************************************************
** Meta object code from reading C++ file 'testwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CDFR_2019_QT/testwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestWindow_t {
    QByteArrayData data[20];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestWindow_t qt_meta_stringdata_TestWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TestWindow"
QT_MOC_LITERAL(1, 11, 14), // "Set_LED_RED_ON"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "Set_LED_GREEN_ON"
QT_MOC_LITERAL(4, 44, 15), // "Set_LED_BLUE_ON"
QT_MOC_LITERAL(5, 60, 23), // "Request_Distance_Update"
QT_MOC_LITERAL(6, 84, 23), // "Request_Position_Update"
QT_MOC_LITERAL(7, 108, 19), // "on_btn_red1_clicked"
QT_MOC_LITERAL(8, 128, 19), // "on_btn_blue_clicked"
QT_MOC_LITERAL(9, 148, 20), // "on_btn_green_clicked"
QT_MOC_LITERAL(10, 169, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(11, 197, 5), // "index"
QT_MOC_LITERAL(12, 203, 18), // "Update_DistancesUI"
QT_MOC_LITERAL(13, 222, 8), // "uint16_t"
QT_MOC_LITERAL(14, 231, 15), // "Distance_Update"
QT_MOC_LITERAL(15, 247, 15), // "Position_Update"
QT_MOC_LITERAL(16, 263, 17), // "Update_PositionUI"
QT_MOC_LITERAL(17, 281, 1), // "x"
QT_MOC_LITERAL(18, 283, 1), // "y"
QT_MOC_LITERAL(19, 285, 5) // "theta"

    },
    "TestWindow\0Set_LED_RED_ON\0\0Set_LED_GREEN_ON\0"
    "Set_LED_BLUE_ON\0Request_Distance_Update\0"
    "Request_Position_Update\0on_btn_red1_clicked\0"
    "on_btn_blue_clicked\0on_btn_green_clicked\0"
    "on_tabWidget_currentChanged\0index\0"
    "Update_DistancesUI\0uint16_t\0Distance_Update\0"
    "Position_Update\0Update_PositionUI\0x\0"
    "y\0theta"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    1,   87,    2, 0x08 /* Private */,
      12,    4,   90,    2, 0x0a /* Public */,
      14,    0,   99,    2, 0x0a /* Public */,
      15,    0,  100,    2, 0x0a /* Public */,
      16,    3,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13, 0x80000000 | 13, 0x80000000 | 13,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13, 0x80000000 | 13,   17,   18,   19,

       0        // eod
};

void TestWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestWindow *_t = static_cast<TestWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Set_LED_RED_ON(); break;
        case 1: _t->Set_LED_GREEN_ON(); break;
        case 2: _t->Set_LED_BLUE_ON(); break;
        case 3: _t->Request_Distance_Update(); break;
        case 4: _t->Request_Position_Update(); break;
        case 5: _t->on_btn_red1_clicked(); break;
        case 6: _t->on_btn_blue_clicked(); break;
        case 7: _t->on_btn_green_clicked(); break;
        case 8: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->Update_DistancesUI((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4]))); break;
        case 10: _t->Distance_Update(); break;
        case 11: _t->Position_Update(); break;
        case 12: _t->Update_PositionUI((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TestWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWindow::Set_LED_RED_ON)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TestWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWindow::Set_LED_GREEN_ON)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TestWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWindow::Set_LED_BLUE_ON)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TestWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWindow::Request_Distance_Update)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TestWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWindow::Request_Position_Update)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TestWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TestWindow.data,
      qt_meta_data_TestWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TestWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void TestWindow::Set_LED_RED_ON()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TestWindow::Set_LED_GREEN_ON()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TestWindow::Set_LED_BLUE_ON()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TestWindow::Request_Distance_Update()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TestWindow::Request_Position_Update()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
