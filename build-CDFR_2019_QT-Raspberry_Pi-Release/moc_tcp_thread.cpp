/****************************************************************************
** Meta object code from reading C++ file 'tcp_thread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CDFR_2019_QT/tcp_thread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcp_thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TCP_Thread_t {
    QByteArrayData data[37];
    char stringdata0[549];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TCP_Thread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TCP_Thread_t qt_meta_stringdata_TCP_Thread = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TCP_Thread"
QT_MOC_LITERAL(1, 11, 10), // "Update_LED"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "uint8_t"
QT_MOC_LITERAL(4, 31, 11), // "Update_Info"
QT_MOC_LITERAL(5, 43, 8), // "uint16_t"
QT_MOC_LITERAL(6, 52, 15), // "Update_Distance"
QT_MOC_LITERAL(7, 68, 15), // "Update_Position"
QT_MOC_LITERAL(8, 84, 32), // "Update_Enable_Disable_regulation"
QT_MOC_LITERAL(9, 117, 19), // "Update_AddWayPoints"
QT_MOC_LITERAL(10, 137, 25), // "Update_ResetListWayPoints"
QT_MOC_LITERAL(11, 163, 14), // "Update_Tirette"
QT_MOC_LITERAL(12, 178, 20), // "Update_SetPositionOK"
QT_MOC_LITERAL(13, 199, 27), // "Update_StatusConnexionSTM32"
QT_MOC_LITERAL(14, 227, 25), // "F_ProcessDataReiceivedTCP"
QT_MOC_LITERAL(15, 253, 13), // "F_SendDataTCP"
QT_MOC_LITERAL(16, 267, 11), // "tcp_command"
QT_MOC_LITERAL(17, 279, 13), // "s_cmd_to_send"
QT_MOC_LITERAL(18, 293, 16), // "F_Set_LED_RED_ON"
QT_MOC_LITERAL(19, 310, 17), // "F_Set_LED_BLUE_ON"
QT_MOC_LITERAL(20, 328, 18), // "F_Set_LED_GREEN_ON"
QT_MOC_LITERAL(21, 347, 15), // "F_Get_Distances"
QT_MOC_LITERAL(22, 363, 11), // "F_Set_Servo"
QT_MOC_LITERAL(23, 375, 4), // "open"
QT_MOC_LITERAL(24, 380, 14), // "F_Get_Position"
QT_MOC_LITERAL(25, 395, 14), // "F_Set_Position"
QT_MOC_LITERAL(26, 410, 7), // "int16_t"
QT_MOC_LITERAL(27, 418, 1), // "x"
QT_MOC_LITERAL(28, 420, 1), // "y"
QT_MOC_LITERAL(29, 422, 5), // "theta"
QT_MOC_LITERAL(30, 428, 13), // "F_Get_Tirette"
QT_MOC_LITERAL(31, 442, 14), // "F_Add_Waypoint"
QT_MOC_LITERAL(32, 457, 21), // "F_Reset_WayPointsList"
QT_MOC_LITERAL(33, 479, 24), // "F_EnableDisableReguation"
QT_MOC_LITERAL(34, 504, 18), // "F_DisableReguation"
QT_MOC_LITERAL(35, 523, 10), // "F_Get_Info"
QT_MOC_LITERAL(36, 534, 14) // "F_ReconnectTCP"

    },
    "TCP_Thread\0Update_LED\0\0uint8_t\0"
    "Update_Info\0uint16_t\0Update_Distance\0"
    "Update_Position\0Update_Enable_Disable_regulation\0"
    "Update_AddWayPoints\0Update_ResetListWayPoints\0"
    "Update_Tirette\0Update_SetPositionOK\0"
    "Update_StatusConnexionSTM32\0"
    "F_ProcessDataReiceivedTCP\0F_SendDataTCP\0"
    "tcp_command\0s_cmd_to_send\0F_Set_LED_RED_ON\0"
    "F_Set_LED_BLUE_ON\0F_Set_LED_GREEN_ON\0"
    "F_Get_Distances\0F_Set_Servo\0open\0"
    "F_Get_Position\0F_Set_Position\0int16_t\0"
    "x\0y\0theta\0F_Get_Tirette\0F_Add_Waypoint\0"
    "F_Reset_WayPointsList\0F_EnableDisableReguation\0"
    "F_DisableReguation\0F_Get_Info\0"
    "F_ReconnectTCP"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCP_Thread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  144,    2, 0x06 /* Public */,
       4,    5,  151,    2, 0x06 /* Public */,
       6,    4,  162,    2, 0x06 /* Public */,
       7,    3,  171,    2, 0x06 /* Public */,
       8,    1,  178,    2, 0x06 /* Public */,
       9,    1,  181,    2, 0x06 /* Public */,
      10,    0,  184,    2, 0x06 /* Public */,
      11,    1,  185,    2, 0x06 /* Public */,
      12,    0,  188,    2, 0x06 /* Public */,
      13,    1,  189,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  192,    2, 0x0a /* Public */,
      15,    1,  193,    2, 0x0a /* Public */,
      18,    0,  196,    2, 0x0a /* Public */,
      19,    0,  197,    2, 0x0a /* Public */,
      20,    0,  198,    2, 0x0a /* Public */,
      21,    0,  199,    2, 0x0a /* Public */,
      22,    1,  200,    2, 0x0a /* Public */,
      24,    0,  203,    2, 0x0a /* Public */,
      25,    3,  204,    2, 0x0a /* Public */,
      30,    0,  211,    2, 0x0a /* Public */,
      31,    3,  212,    2, 0x0a /* Public */,
      32,    0,  219,    2, 0x0a /* Public */,
      33,    0,  220,    2, 0x0a /* Public */,
      34,    0,  221,    2, 0x0a /* Public */,
      35,    0,  222,    2, 0x0a /* Public */,
      36,    0,  223,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 3, 0x80000000 | 3,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 26, 0x80000000 | 26,   27,   28,   29,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 26, 0x80000000 | 26,   27,   28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TCP_Thread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TCP_Thread *_t = static_cast<TCP_Thread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Update_LED((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3]))); break;
        case 1: _t->Update_Info((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4])),(*reinterpret_cast< uint8_t(*)>(_a[5]))); break;
        case 2: _t->Update_Distance((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4]))); break;
        case 3: _t->Update_Position((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3]))); break;
        case 4: _t->Update_Enable_Disable_regulation((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 5: _t->Update_AddWayPoints((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 6: _t->Update_ResetListWayPoints(); break;
        case 7: _t->Update_Tirette((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 8: _t->Update_SetPositionOK(); break;
        case 9: _t->Update_StatusConnexionSTM32((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 10: _t->F_ProcessDataReiceivedTCP(); break;
        case 11: _t->F_SendDataTCP((*reinterpret_cast< tcp_command(*)>(_a[1]))); break;
        case 12: _t->F_Set_LED_RED_ON(); break;
        case 13: _t->F_Set_LED_BLUE_ON(); break;
        case 14: _t->F_Set_LED_GREEN_ON(); break;
        case 15: _t->F_Get_Distances(); break;
        case 16: _t->F_Set_Servo((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 17: _t->F_Get_Position(); break;
        case 18: _t->F_Set_Position((*reinterpret_cast< int16_t(*)>(_a[1])),(*reinterpret_cast< int16_t(*)>(_a[2])),(*reinterpret_cast< int16_t(*)>(_a[3]))); break;
        case 19: _t->F_Get_Tirette(); break;
        case 20: _t->F_Add_Waypoint((*reinterpret_cast< int16_t(*)>(_a[1])),(*reinterpret_cast< int16_t(*)>(_a[2])),(*reinterpret_cast< int16_t(*)>(_a[3]))); break;
        case 21: _t->F_Reset_WayPointsList(); break;
        case 22: _t->F_EnableDisableReguation(); break;
        case 23: _t->F_DisableReguation(); break;
        case 24: _t->F_Get_Info(); break;
        case 25: _t->F_ReconnectTCP(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TCP_Thread::*_t)(uint8_t , uint8_t , uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCP_Thread::Update_LED)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TCP_Thread::*_t)(uint16_t , uint16_t , uint16_t , uint8_t , uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCP_Thread::Update_Info)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TCP_Thread::*_t)(uint16_t , uint16_t , uint16_t , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCP_Thread::Update_Distance)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TCP_Thread::*_t)(uint16_t , uint16_t , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCP_Thread::Update_Position)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TCP_Thread::*_t)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCP_Thread::Update_Enable_Disable_regulation)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TCP_Thread::*_t)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCP_Thread::Update_AddWayPoints)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (TCP_Thread::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCP_Thread::Update_ResetListWayPoints)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (TCP_Thread::*_t)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCP_Thread::Update_Tirette)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (TCP_Thread::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCP_Thread::Update_SetPositionOK)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (TCP_Thread::*_t)(uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCP_Thread::Update_StatusConnexionSTM32)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TCP_Thread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TCP_Thread.data,
      qt_meta_data_TCP_Thread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TCP_Thread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCP_Thread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TCP_Thread.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TCP_Thread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void TCP_Thread::Update_LED(uint8_t _t1, uint8_t _t2, uint8_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TCP_Thread::Update_Info(uint16_t _t1, uint16_t _t2, uint16_t _t3, uint8_t _t4, uint8_t _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TCP_Thread::Update_Distance(uint16_t _t1, uint16_t _t2, uint16_t _t3, uint16_t _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TCP_Thread::Update_Position(uint16_t _t1, uint16_t _t2, uint16_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TCP_Thread::Update_Enable_Disable_regulation(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TCP_Thread::Update_AddWayPoints(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TCP_Thread::Update_ResetListWayPoints()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void TCP_Thread::Update_Tirette(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TCP_Thread::Update_SetPositionOK()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void TCP_Thread::Update_StatusConnexionSTM32(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
