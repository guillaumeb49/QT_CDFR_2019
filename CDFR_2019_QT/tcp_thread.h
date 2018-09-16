#ifndef TCP_THREAD_H
#define TCP_THREAD_H

#include <QDebug>

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <QVector>


#define NB_OCTETS_CMD       15
#define SIZE_PARAM_CMD      4

#define CMD_INFO			0x01
#define CMD_SET_LED			0x02
#define CMD_GET_LED			0x03

#define CMD_GET_DISTANCES	0x04

#define CMD_SET_POSITION	0x05
#define CMD_GET_POSITION	0x06
#define CMD_GO				0x07
#define CMD_ADD_POINT		0x08
#define CMD_REMOVE_POINT	0x09
#define CMD_GET_LIST_POINTS	0x0A

#define STATUS_OK			0x00
#define STATUS_UNKNOWN_CMD	0x01
#define STATUS_ERROR_PARAM	0x02




/* structure that represents a command between the Raspberry Pi and the STM32*/
struct tcp_command
{
    uint32_t id;
    uint8_t nb_octet;
    uint8_t cmd;
    uint8_t nb_param;
    uint16_t params[SIZE_PARAM_CMD];
};

/* structure that represents an answer between the STM32 and the Raspberry Pi*/
struct tcp_answer
{
    uint32_t id;
    uint8_t nb_octet;
    uint8_t cmd;
    uint8_t code_retour;
    uint16_t reponse[SIZE_PARAM_CMD];
};




class TCP_Thread : public QThread
{
    Q_OBJECT
public:
    TCP_Thread();
    void run();
    void F_TCP_answerTotab(uint8_t *array, struct tcp_answer *s_cmd_answer);
    void F_TCP_cmdTotab(uint8_t *array, struct tcp_command *s_cmd);
    void F_TCP_TabToAnswer(uint8_t *array, struct tcp_answer *s_cmd_answer);

    void F_TCP_GetINFO();
    void F_TCP_SetLED(uint8_t r,uint8_t g,uint8_t b);
    void F_TCP_GetLED();
    void F_TCP_GetDistances();

    void F_TCP_SetPosition();
    void F_TCP_GetPosition();

    void F_TCP_Go();
    void F_TCP_AddPoint();
    void F_TCP_RemovePoint();
    void F_TCP_GetlistPoints();

private :
    bool terminated;
    QTcpSocket *socket;
    tcp_command last_cmd_sent;
    tcp_answer last_answer_received;
    uint32_t cmd_id;
    QVector <tcp_command> list_cmd;
    QVector <tcp_command> list_cmd_to_send;
    QVector <tcp_answer> list_answer;


signals:

    void Update_LED(uint8_t, uint8_t, uint8_t);

public slots:
    void F_ProcessDataReiceivedTCP(void);
    void F_SendDataTCP(tcp_command s_cmd_to_send);
};

#endif // TCP_THREAD_H
