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
    QByteArrayData data[18];
    char stringdata0[264];
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
QT_MOC_LITERAL(4, 31, 15), // "Update_Distance"
QT_MOC_LITERAL(5, 47, 8), // "uint16_t"
QT_MOC_LITERAL(6, 56, 14), // "Update_Tirette"
QT_MOC_LITERAL(7, 71, 27), // "Update_StatusConnexionSTM32"
QT_MOC_LITERAL(8, 99, 25), // "F_ProcessDataReiceivedTCP"
QT_MOC_LITERAL(9, 125, 13), // "F_SendDataTCP"
QT_MOC_LITERAL(10, 139, 11), // "tcp_command"
QT_MOC_LITERAL(11, 151, 13), // "s_cmd_to_send"
QT_MOC_LITERAL(12, 165, 16), // "F_Set_LED_RED_ON"
QT_MOC_LITERAL(13, 182, 17), // "F_Set_LED_BLUE_ON"
QT_MOC_LITERAL(14, 200, 18), // "F_Set_LED_GREEN_ON"
QT_MOC_LITERAL(15, 219, 15), // "F_Get_Distances"
QT_MOC_LITERAL(16, 235, 13), // "F_Get_Tirette"
QT_MOC_LITERAL(17, 249, 14) // "F_ReconnectTCP"

    },
    "TCP_Thread\0Update_LED\0\0uint8_t\0"
    "Update_Distance\0uint16_t\0Update_Tirette\0"
    "Update_StatusConnexionSTM32\0"
    "F_ProcessDataReiceivedTCP\0F_SendDataTCP\0"
    "tcp_command\0s_cmd_to_send\0F_Set_LED_RED_ON\0"
    "F_Set_LED_BLUE_ON\0F_Set_LED_GREEN_ON\0"
    "F_Get_Distances\0F_Get_Tirette\0"
    "F_ReconnectTCP"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCP_Thread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x06 /* Public */,
       4,    4,   81,    2, 0x06 /* Public */,
       6,    1,   90,    2, 0x06 /* Public */,
       7,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   96,    2, 0x0a /* Public */,
       9,    1,   97,    2, 0x0a /* Public */,
      12,    0,  100,    2, 0x0a /* Public */,
      13,    0,  101,    2, 0x0a /* Public */,
      14,    0,  102,    2, 0x0a /* Public */,
      15,    0,  103,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x0a /* Public */,
      17,    0,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
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
        case 1: _t->Update_Distance((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4]))); break;
        case 2: _t->Update_Tirette((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 3: _t->Update_StatusConnexionSTM32((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 4: _t->F_ProcessDataReiceivedTCP(); break;
        case 5: _t->F_SendDataTCP((*reinterpret_cast< tcp_command(*)>(_a[1]))); break;
        case 6: _t->F_Set_LED_RED_ON(); break;
        case 7: _t->F_Set_LED_BLUE_ON(); break;
        case 8: _t->F_Set_LED_GREEN_ON(); break;
        case 9: _t->F_Get_Distances(); break;
        case 10: _t->F_Get_Tirette(); break;
        case 11: _t->F_ReconnectTCP(); break;
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
            typedef void (TCP_Thread::*_t)(uint16_t , uint16_t , uint16_t , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCP_Thread::Update_Distance)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TCP_Thread::*_t)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCP_Thread::Update_Tirette)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TCP_Thread::*_t)(uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCP_Thread::Update_StatusConnexionSTM32)) {
                *result = 3;
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

// SIGNAL 0
void TCP_Thread::Update_LED(uint8_t _t1, uint8_t _t2, uint8_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TCP_Thread::Update_Distance(uint16_t _t1, uint16_t _t2, uint16_t _t3, uint16_t _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TCP_Thread::Update_Tirette(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TCP_Thread::Update_StatusConnexionSTM32(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
