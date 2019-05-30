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
#define CMD_RESET_LIST_WAYPOINTS	0x09
#define CMD_GET_LIST_POINTS	0x0A

#define CMD_GET_TIRETTE     0x0B
#define CMD_MOVE_SERVO     	0x0C

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




class TCP_Thread : public QObject
{
    Q_OBJECT
public:
    TCP_Thread();
    void F_TCP_answerTotab(uint8_t *array, struct tcp_answer *s_cmd_answer);
    void F_TCP_cmdTotab(uint8_t *array, struct tcp_command *s_cmd);
    void F_TCP_TabToAnswer(uint8_t *array, struct tcp_answer *s_cmd_answer);

    void F_TCP_GetINFO();
    void F_TCP_SetLED(uint8_t r,uint8_t g,uint8_t b);
    void F_TCP_GetLED();
    void F_TCP_GetDistances(uint16_t sensor_number);

    void F_TCP_SetPosition();


    void F_TCP_Go();
    void F_TCP_AddPoint();
    void F_TCP_RemovePoint();
    void F_TCP_GetlistPoints();
    bool getConnexion_state() const;



private :
    bool terminated;
    QTcpSocket *socket;
    tcp_command last_cmd_sent;
    tcp_answer last_answer_received;
    uint32_t cmd_id;
    QVector <tcp_command> list_cmd;
    QVector <tcp_command> list_cmd_to_send;
    QVector <tcp_answer> list_answer;

    bool connexion_state;


signals:

    void Update_LED(uint8_t, uint8_t, uint8_t);

    /**
     * @brief Update_Distance
     */
    void Update_Info(uint16_t,uint16_t,uint16_t,uint8_t,uint8_t);


    /**
     * @brief Update_Distance Update the Sensor distance value (get info from STM32)
     */
    void Update_Distance(uint16_t,uint16_t,uint16_t,uint16_t);

    /**
     * @brief Update_Distance
     */
    void Update_Position(uint16_t,uint16_t,uint16_t);


    void Update_Enable_Disable_regulation(uint16_t);


    /**
     * @brief Update_Position
     */
    void Update_AddWayPoints(uint16_t);

    void Update_ResetListWayPoints();

    /**
     * @brief Update_Tirette Update the current state of the tirette : 1 tirette is armed, 0 tirette is out
     */
    void Update_Tirette(uint16_t);

    void Update_SetPositionOK();


    void Update_StatusConnexionSTM32(uint8_t);



public slots:
    void F_ProcessDataReiceivedTCP(void);
    void F_SendDataTCP(tcp_command s_cmd_to_send);
    void F_Set_LED_RED_ON();
    void F_Set_LED_BLUE_ON();
    void F_Set_LED_GREEN_ON();
    void F_Get_Distances();
    void F_Set_Servo(uint8_t open);

    void F_Get_Position();
    void F_Set_Position(int16_t x, int16_t y,int16_t theta);

    void F_Get_Tirette();
    void F_Add_Waypoint(int16_t x, int16_t y,int16_t theta);
    void F_Reset_WayPointsList();

    void F_EnableDisableReguation();
    void F_DisableReguation();

    void F_Get_Info();

    void F_ReconnectTCP();

};

#endif // TCP_THREAD_H
