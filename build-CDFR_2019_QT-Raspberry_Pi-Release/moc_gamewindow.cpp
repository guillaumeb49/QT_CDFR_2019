/****************************************************************************
** Meta object code from reading C++ file 'gamewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CDFR_2019_QT/gamewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameWindow_t {
    QByteArrayData data[19];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameWindow_t qt_meta_stringdata_GameWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GameWindow"
QT_MOC_LITERAL(1, 11, 22), // "F_RequestUpdateTirette"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "F_RequestAddWayPoint"
QT_MOC_LITERAL(4, 56, 7), // "int16_t"
QT_MOC_LITERAL(5, 64, 1), // "x"
QT_MOC_LITERAL(6, 66, 1), // "y"
QT_MOC_LITERAL(7, 68, 5), // "theta"
QT_MOC_LITERAL(8, 74, 24), // "F_TransistionUserReadyOK"
QT_MOC_LITERAL(9, 99, 22), // "F_TransistionTiretteOK"
QT_MOC_LITERAL(10, 122, 30), // "F_TransistionStartWayPoints_OK"
QT_MOC_LITERAL(11, 153, 32), // "F_TransistionStartGame_and_Go_OK"
QT_MOC_LITERAL(12, 186, 25), // "on_btn_start_game_clicked"
QT_MOC_LITERAL(13, 212, 18), // "ManageStateMachine"
QT_MOC_LITERAL(14, 231, 18), // "F_UpdateTimer_game"
QT_MOC_LITERAL(15, 250, 15), // "F_UpdateTirette"
QT_MOC_LITERAL(16, 266, 8), // "uint16_t"
QT_MOC_LITERAL(17, 275, 5), // "state"
QT_MOC_LITERAL(18, 281, 25) // "F_ManageAdditionWayPoints"

    },
    "GameWindow\0F_RequestUpdateTirette\0\0"
    "F_RequestAddWayPoint\0int16_t\0x\0y\0theta\0"
    "F_TransistionUserReadyOK\0"
    "F_TransistionTiretteOK\0"
    "F_TransistionStartWayPoints_OK\0"
    "F_TransistionStartGame_and_Go_OK\0"
    "on_btn_start_game_clicked\0ManageStateMachine\0"
    "F_UpdateTimer_game\0F_UpdateTirette\0"
    "uint16_t\0state\0F_ManageAdditionWayPoints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    3,   70,    2, 0x06 /* Public */,
       8,    0,   77,    2, 0x06 /* Public */,
       9,    0,   78,    2, 0x06 /* Public */,
      10,    0,   79,    2, 0x06 /* Public */,
      11,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   81,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x0a /* Public */,
      15,    1,   84,    2, 0x0a /* Public */,
      18,    1,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void GameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameWindow *_t = static_cast<GameWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->F_RequestUpdateTirette(); break;
        case 1: _t->F_RequestAddWayPoint((*reinterpret_cast< int16_t(*)>(_a[1])),(*reinterpret_cast< int16_t(*)>(_a[2])),(*reinterpret_cast< int16_t(*)>(_a[3]))); break;
        case 2: _t->F_TransistionUserReadyOK(); break;
        case 3: _t->F_TransistionTiretteOK(); break;
        case 4: _t->F_TransistionStartWayPoints_OK(); break;
        case 5: _t->F_TransistionStartGame_and_Go_OK(); break;
        case 6: _t->on_btn_start_game_clicked(); break;
        case 7: _t->ManageStateMachine(); break;
        case 8: _t->F_UpdateTimer_game(); break;
        case 9: _t->F_UpdateTirette((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 10: _t->F_ManageAdditionWayPoints((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_RequestUpdateTirette)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)(int16_t , int16_t , int16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_RequestAddWayPoint)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionUserReadyOK)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionTiretteOK)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionStartWayPoints_OK)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionStartGame_and_Go_OK)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GameWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GameWindow.data,
      qt_meta_data_GameWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GameWindow::F_RequestUpdateTirette()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GameWindow::F_RequestAddWayPoint(int16_t _t1, int16_t _t2, int16_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GameWindow::F_TransistionUserReadyOK()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GameWindow::F_TransistionTiretteOK()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GameWindow::F_TransistionStartWayPoints_OK()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GameWindow::F_TransistionStartGame_and_Go_OK()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
