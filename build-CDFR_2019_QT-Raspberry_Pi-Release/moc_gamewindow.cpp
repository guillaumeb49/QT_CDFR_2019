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
    QByteArrayData data[48];
    char stringdata0[906];
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
QT_MOC_LITERAL(3, 35, 20), // "F_RequestSetPosition"
QT_MOC_LITERAL(4, 56, 7), // "int16_t"
QT_MOC_LITERAL(5, 64, 1), // "x"
QT_MOC_LITERAL(6, 66, 1), // "y"
QT_MOC_LITERAL(7, 68, 5), // "theta"
QT_MOC_LITERAL(8, 74, 22), // "F_RequestUpdateGetInfo"
QT_MOC_LITERAL(9, 97, 26), // "F_RequestUpdateGetPosition"
QT_MOC_LITERAL(10, 124, 20), // "F_RequestAddWayPoint"
QT_MOC_LITERAL(11, 145, 24), // "F_TransistionUserReadyOK"
QT_MOC_LITERAL(12, 170, 22), // "F_TransistionRestartOK"
QT_MOC_LITERAL(13, 193, 26), // "F_TransitionSetPosition_OK"
QT_MOC_LITERAL(14, 220, 22), // "F_TransistionTiretteOK"
QT_MOC_LITERAL(15, 243, 30), // "F_TransistionStartWayPoints_OK"
QT_MOC_LITERAL(16, 274, 32), // "F_TransistionStartGame_and_Go_OK"
QT_MOC_LITERAL(17, 307, 18), // "F_TransistionToS51"
QT_MOC_LITERAL(18, 326, 18), // "F_TransistionToS52"
QT_MOC_LITERAL(19, 345, 19), // "F_TransistionToS521"
QT_MOC_LITERAL(20, 365, 18), // "F_TransistionToS53"
QT_MOC_LITERAL(21, 384, 18), // "F_TransistionToS54"
QT_MOC_LITERAL(22, 403, 18), // "F_TransistionToS55"
QT_MOC_LITERAL(23, 422, 18), // "F_TransistionToS56"
QT_MOC_LITERAL(24, 441, 18), // "F_TransistionToS57"
QT_MOC_LITERAL(25, 460, 18), // "F_TransistionToS58"
QT_MOC_LITERAL(26, 479, 31), // "F_TransistionToManageStrategyOK"
QT_MOC_LITERAL(27, 511, 12), // "F_Request_Go"
QT_MOC_LITERAL(28, 524, 14), // "F_Request_Stop"
QT_MOC_LITERAL(29, 539, 27), // "F_RequestResetListWayPoints"
QT_MOC_LITERAL(30, 567, 14), // "F_RequestServo"
QT_MOC_LITERAL(31, 582, 7), // "uint8_t"
QT_MOC_LITERAL(32, 590, 25), // "F_TransistionEndOfGame_OK"
QT_MOC_LITERAL(33, 616, 30), // "F_TransistionDisplayResults_OK"
QT_MOC_LITERAL(34, 647, 25), // "on_btn_start_game_clicked"
QT_MOC_LITERAL(35, 673, 18), // "ManageStateMachine"
QT_MOC_LITERAL(36, 692, 18), // "F_UpdateTimer_game"
QT_MOC_LITERAL(37, 711, 15), // "F_UpdateGetInfo"
QT_MOC_LITERAL(38, 727, 8), // "uint16_t"
QT_MOC_LITERAL(39, 736, 9), // "nb_points"
QT_MOC_LITERAL(40, 746, 20), // "distance_warning_rob"
QT_MOC_LITERAL(41, 767, 15), // "F_UpdateTirette"
QT_MOC_LITERAL(42, 783, 5), // "state"
QT_MOC_LITERAL(43, 789, 16), // "F_UpdatePosition"
QT_MOC_LITERAL(44, 806, 19), // "F_UpdateSetPosition"
QT_MOC_LITERAL(45, 826, 25), // "F_ManageAdditionWayPoints"
QT_MOC_LITERAL(46, 852, 26), // "F_UpdateEnable_DisableAuto"
QT_MOC_LITERAL(47, 879, 26) // "F_UpdateResetListWayPoints"

    },
    "GameWindow\0F_RequestUpdateTirette\0\0"
    "F_RequestSetPosition\0int16_t\0x\0y\0theta\0"
    "F_RequestUpdateGetInfo\0"
    "F_RequestUpdateGetPosition\0"
    "F_RequestAddWayPoint\0F_TransistionUserReadyOK\0"
    "F_TransistionRestartOK\0"
    "F_TransitionSetPosition_OK\0"
    "F_TransistionTiretteOK\0"
    "F_TransistionStartWayPoints_OK\0"
    "F_TransistionStartGame_and_Go_OK\0"
    "F_TransistionToS51\0F_TransistionToS52\0"
    "F_TransistionToS521\0F_TransistionToS53\0"
    "F_TransistionToS54\0F_TransistionToS55\0"
    "F_TransistionToS56\0F_TransistionToS57\0"
    "F_TransistionToS58\0F_TransistionToManageStrategyOK\0"
    "F_Request_Go\0F_Request_Stop\0"
    "F_RequestResetListWayPoints\0F_RequestServo\0"
    "uint8_t\0F_TransistionEndOfGame_OK\0"
    "F_TransistionDisplayResults_OK\0"
    "on_btn_start_game_clicked\0ManageStateMachine\0"
    "F_UpdateTimer_game\0F_UpdateGetInfo\0"
    "uint16_t\0nb_points\0distance_warning_rob\0"
    "F_UpdateTirette\0state\0F_UpdatePosition\0"
    "F_UpdateSetPosition\0F_ManageAdditionWayPoints\0"
    "F_UpdateEnable_DisableAuto\0"
    "F_UpdateResetListWayPoints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      27,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  199,    2, 0x06 /* Public */,
       3,    3,  200,    2, 0x06 /* Public */,
       8,    0,  207,    2, 0x06 /* Public */,
       9,    0,  208,    2, 0x06 /* Public */,
      10,    3,  209,    2, 0x06 /* Public */,
      11,    0,  216,    2, 0x06 /* Public */,
      12,    0,  217,    2, 0x06 /* Public */,
      13,    0,  218,    2, 0x06 /* Public */,
      14,    0,  219,    2, 0x06 /* Public */,
      15,    0,  220,    2, 0x06 /* Public */,
      16,    0,  221,    2, 0x06 /* Public */,
      17,    0,  222,    2, 0x06 /* Public */,
      18,    0,  223,    2, 0x06 /* Public */,
      19,    0,  224,    2, 0x06 /* Public */,
      20,    0,  225,    2, 0x06 /* Public */,
      21,    0,  226,    2, 0x06 /* Public */,
      22,    0,  227,    2, 0x06 /* Public */,
      23,    0,  228,    2, 0x06 /* Public */,
      24,    0,  229,    2, 0x06 /* Public */,
      25,    0,  230,    2, 0x06 /* Public */,
      26,    0,  231,    2, 0x06 /* Public */,
      27,    0,  232,    2, 0x06 /* Public */,
      28,    0,  233,    2, 0x06 /* Public */,
      29,    0,  234,    2, 0x06 /* Public */,
      30,    1,  235,    2, 0x06 /* Public */,
      32,    0,  238,    2, 0x06 /* Public */,
      33,    0,  239,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      34,    0,  240,    2, 0x08 /* Private */,
      35,    0,  241,    2, 0x08 /* Private */,
      36,    0,  242,    2, 0x0a /* Public */,
      37,    5,  243,    2, 0x0a /* Public */,
      41,    1,  254,    2, 0x0a /* Public */,
      43,    3,  257,    2, 0x0a /* Public */,
      44,    0,  264,    2, 0x0a /* Public */,
      45,    1,  265,    2, 0x0a /* Public */,
      46,    1,  268,    2, 0x0a /* Public */,
      47,    0,  271,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4,    5,    6,    7,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38, 0x80000000 | 38, 0x80000000 | 31, 0x80000000 | 31,    5,    6,    7,   39,   40,
    QMetaType::Void, 0x80000000 | 38,   42,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38, 0x80000000 | 38,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,   42,
    QMetaType::Void, 0x80000000 | 38,    2,
    QMetaType::Void,

       0        // eod
};

void GameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameWindow *_t = static_cast<GameWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->F_RequestUpdateTirette(); break;
        case 1: _t->F_RequestSetPosition((*reinterpret_cast< int16_t(*)>(_a[1])),(*reinterpret_cast< int16_t(*)>(_a[2])),(*reinterpret_cast< int16_t(*)>(_a[3]))); break;
        case 2: _t->F_RequestUpdateGetInfo(); break;
        case 3: _t->F_RequestUpdateGetPosition(); break;
        case 4: _t->F_RequestAddWayPoint((*reinterpret_cast< int16_t(*)>(_a[1])),(*reinterpret_cast< int16_t(*)>(_a[2])),(*reinterpret_cast< int16_t(*)>(_a[3]))); break;
        case 5: _t->F_TransistionUserReadyOK(); break;
        case 6: _t->F_TransistionRestartOK(); break;
        case 7: _t->F_TransitionSetPosition_OK(); break;
        case 8: _t->F_TransistionTiretteOK(); break;
        case 9: _t->F_TransistionStartWayPoints_OK(); break;
        case 10: _t->F_TransistionStartGame_and_Go_OK(); break;
        case 11: _t->F_TransistionToS51(); break;
        case 12: _t->F_TransistionToS52(); break;
        case 13: _t->F_TransistionToS521(); break;
        case 14: _t->F_TransistionToS53(); break;
        case 15: _t->F_TransistionToS54(); break;
        case 16: _t->F_TransistionToS55(); break;
        case 17: _t->F_TransistionToS56(); break;
        case 18: _t->F_TransistionToS57(); break;
        case 19: _t->F_TransistionToS58(); break;
        case 20: _t->F_TransistionToManageStrategyOK(); break;
        case 21: _t->F_Request_Go(); break;
        case 22: _t->F_Request_Stop(); break;
        case 23: _t->F_RequestResetListWayPoints(); break;
        case 24: _t->F_RequestServo((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 25: _t->F_TransistionEndOfGame_OK(); break;
        case 26: _t->F_TransistionDisplayResults_OK(); break;
        case 27: _t->on_btn_start_game_clicked(); break;
        case 28: _t->ManageStateMachine(); break;
        case 29: _t->F_UpdateTimer_game(); break;
        case 30: _t->F_UpdateGetInfo((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4])),(*reinterpret_cast< uint8_t(*)>(_a[5]))); break;
        case 31: _t->F_UpdateTirette((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 32: _t->F_UpdatePosition((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3]))); break;
        case 33: _t->F_UpdateSetPosition(); break;
        case 34: _t->F_ManageAdditionWayPoints((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 35: _t->F_UpdateEnable_DisableAuto((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 36: _t->F_UpdateResetListWayPoints(); break;
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_RequestSetPosition)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_RequestUpdateGetInfo)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_RequestUpdateGetPosition)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)(int16_t , int16_t , int16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_RequestAddWayPoint)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionUserReadyOK)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionRestartOK)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransitionSetPosition_OK)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionTiretteOK)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionStartWayPoints_OK)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionStartGame_and_Go_OK)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionToS51)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionToS52)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionToS521)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionToS53)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionToS54)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionToS55)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionToS56)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionToS57)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionToS58)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionToManageStrategyOK)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_Request_Go)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_Request_Stop)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_RequestResetListWayPoints)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)(uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_RequestServo)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionEndOfGame_OK)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (GameWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::F_TransistionDisplayResults_OK)) {
                *result = 26;
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
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void GameWindow::F_RequestUpdateTirette()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GameWindow::F_RequestSetPosition(int16_t _t1, int16_t _t2, int16_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GameWindow::F_RequestUpdateGetInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GameWindow::F_RequestUpdateGetPosition()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GameWindow::F_RequestAddWayPoint(int16_t _t1, int16_t _t2, int16_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GameWindow::F_TransistionUserReadyOK()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void GameWindow::F_TransistionRestartOK()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void GameWindow::F_TransitionSetPosition_OK()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void GameWindow::F_TransistionTiretteOK()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void GameWindow::F_TransistionStartWayPoints_OK()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void GameWindow::F_TransistionStartGame_and_Go_OK()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void GameWindow::F_TransistionToS51()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void GameWindow::F_TransistionToS52()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void GameWindow::F_TransistionToS521()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void GameWindow::F_TransistionToS53()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void GameWindow::F_TransistionToS54()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void GameWindow::F_TransistionToS55()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void GameWindow::F_TransistionToS56()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void GameWindow::F_TransistionToS57()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void GameWindow::F_TransistionToS58()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void GameWindow::F_TransistionToManageStrategyOK()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void GameWindow::F_Request_Go()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void GameWindow::F_Request_Stop()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void GameWindow::F_RequestResetListWayPoints()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void GameWindow::F_RequestServo(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void GameWindow::F_TransistionEndOfGame_OK()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void GameWindow::F_TransistionDisplayResults_OK()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
