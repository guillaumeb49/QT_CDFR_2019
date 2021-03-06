#include "tcp_thread.h"

TCP_Thread::TCP_Thread()
{
    cmd_id = 0;
    connexion_state = false;

    struct tcp_command s_cmd_to_send;
    qDebug() << "[TCP Socket] Inside Run!";
    socket = new QTcpSocket();
    // Connect Signals / Slots
    connect(socket,SIGNAL(readyRead()),this,SLOT(F_ProcessDataReiceivedTCP()));
    // Try to connect to the Host (STM32)
    socket->connectToHost("192.168.2.21",7);


    if(socket->waitForConnected(5000))
    {
        qDebug() << "[TCP Socket] Connected to STM32!";
        terminated = false;

        connexion_state = true;


        s_cmd_to_send.id = 0x01;
        s_cmd_to_send.nb_octet = 15;
        s_cmd_to_send.cmd = CMD_GET_LED;
        s_cmd_to_send.nb_param = 0;
        s_cmd_to_send.params[0] = 0;
        s_cmd_to_send.params[1] = 0;
        s_cmd_to_send.params[2] = 0;
        s_cmd_to_send.params[3] = 0;

        F_SendDataTCP(s_cmd_to_send);
    }
    else
    {
        qDebug() << "[TCP Socket] Error connexion to STM32.. \r\n";
        qDebug() << socket->errorString();

        terminated = true;

        connexion_state = false;
    }


}

/*
void TCP_Thread::run()
{
struct tcp_command s_cmd_to_send;
    qDebug() << "[TCP Socket] Inside Run!";
    socket = new QTcpSocket();
    // Connect Signals / Slots
    connect(socket,SIGNAL(readyRead()),this,SLOT(F_ProcessDataReiceivedTCP()));
    // Try to connect to the Host (STM32)
    socket->connectToHost("192.168.1.21",7);

    if(socket->waitForConnected(5000))
    {
        qDebug() << "[TCP Socket] Connected to STM32!";
        terminated = false;

        connexion_state = true;


        s_cmd_to_send.id = 0x01;
        s_cmd_to_send.nb_octet = 15;
        s_cmd_to_send.cmd = CMD_GET_LED;
        s_cmd_to_send.nb_param = 0;
        s_cmd_to_send.params[0] = 0;
        s_cmd_to_send.params[1] = 0;
        s_cmd_to_send.params[2] = 0;
        s_cmd_to_send.params[3] = 0;

        F_SendDataTCP(s_cmd_to_send);
    }
    else
    {
        qDebug() << "[TCP Socket] Error connexion to STM32.. \r\n";
        qDebug() << socket->errorString();

        terminated = true;

        connexion_state = false;
    }



 /*   while(terminated != true)
    {
        // if there is command to send to the STM32
        if(list_cmd_to_send.size() != 0)
        {
            // send a command in the waiting list
            F_SendDataTCP(list_cmd_to_send.first());

            // Wait for the answer
            if(socket->waitForReadyRead(5000) == false)
            {
                // Handle the Error we did not received an answer
            }
            else
            {
                // The command was correctly sent and we read back the answer
                // We can safely remove the command from the waiting list
                list_cmd_to_send.removeFirst();
            }
        }
        this->msleep(100);
    }*/
//}


void TCP_Thread::F_TCP_answerTotab(uint8_t *array, struct tcp_answer *s_cmd_answer)
{
    uint8_t i = 0, j = 0;

    array[0] = uint8_t(0x00FF & (s_cmd_answer->id >> 24));
    array[1] = uint8_t(0x00FF & (s_cmd_answer->id >> 16));
    array[2] = uint8_t(0x00FF & (s_cmd_answer->id >> 8));
    array[3] = uint8_t(0x00FF & s_cmd_answer->id);
    array[4] = s_cmd_answer->nb_octet;
    array[5] = s_cmd_answer->cmd;
    array[6] = s_cmd_answer->code_retour;

    for(i=0;i<SIZE_PARAM_CMD;i++)
    {
        array[7+j] = uint8_t(0x00FF & (s_cmd_answer->reponse[i] >> 8));
        array[7+j+1] = uint8_t(0x00FF & s_cmd_answer->reponse[i]);

        j+=2;
    }


}

void TCP_Thread::F_TCP_TabToAnswer(uint8_t *array, struct tcp_answer *s_cmd_answer)
{
    uint8_t i = 0, j = 0;

    s_cmd_answer->id = uint32_t((array[0] << 24) + (array[1] << 16) +(array[2] << 8) +(array[3]));
    s_cmd_answer->nb_octet = array[4];
    s_cmd_answer->cmd = array[5];
    s_cmd_answer->code_retour = array[6];


    for(i=0;i<SIZE_PARAM_CMD;i++)
    {
        s_cmd_answer->reponse[i] = uint16_t((array[7+j] << 8) + (array[8+j]));
        j+=2;
    }


}




void TCP_Thread::F_TCP_cmdTotab(uint8_t *array, struct tcp_command *s_cmd)
{
    uint8_t i = 0, j = 0;

    array[0] = uint8_t(0x00FF & (s_cmd->id >> 24));
    array[1] = uint8_t(0x00FF & (s_cmd->id >> 16));
    array[2] = uint8_t(0x00FF & (s_cmd->id >> 8));
    array[3] = uint8_t(0x00FF & s_cmd->id);
    array[4] = s_cmd->nb_octet;
    array[5] = s_cmd->cmd;
    array[6] = s_cmd->nb_param;

    for(i=0;i<SIZE_PARAM_CMD;i++)
    {
        array[7+j] = uint8_t(0x00FF & (s_cmd->params[i] >> 8));
        array[7+j+1] = uint8_t(0x00FF & s_cmd->params[i]);

        j+=2;
    }
}

/**
 * @brief TCP_Thread::F_ProcessDataReiceivedTCP Read the TCP socket, handle the data received
 */
void TCP_Thread::F_ProcessDataReiceivedTCP()
{
    QByteArray received_data;
    uint8_t array[20] = {0};
    struct tcp_answer s_cmd_answer;

    received_data = socket->readAll();

  //  qDebug() << "received ("<<received_data.length()<<")\r\n" << received_data << "\r\n";
    for(uint8_t i = 0;i<20;i++)
    {
        array[i] = received_data.at(i);
    }

    F_TCP_TabToAnswer(array, &s_cmd_answer);

    list_answer.append(s_cmd_answer);

 //   qDebug() << "s_cmd_answer.code_retour = " << s_cmd_answer.code_retour ;
    tcp_command last_cmd_send_fromlist =  list_cmd.last();




    if(s_cmd_answer.code_retour != STATUS_OK)
    {
       qDebug() << "[TCP Socket] Erreur last CMD \r\n";
        qDebug() << "[TCP Socket] Last CMD sent :  \r\n";
        qDebug() << "ID : " << last_cmd_send_fromlist.id
                  << "\r\n NB octets : " << last_cmd_send_fromlist.nb_octet
                  << "\r\n CMD : " <<last_cmd_send_fromlist.cmd
                  << "\r\n NB Params : " <<last_cmd_send_fromlist.nb_param
                  << "\r\n Param[0] : " <<last_cmd_send_fromlist.params[0]
                  << "\r\n Param[1] : " <<last_cmd_send_fromlist.params[1]
                  << "\r\n Param[2] : " <<last_cmd_send_fromlist.params[2]
                  << "\r\n Param[3] : " <<last_cmd_send_fromlist.params[3];
    }
    else // command generated a STATUS_OK response code
    {
     /*   qDebug() << "[TCP Socket] Last CMD OK !\r\n";
        qDebug() << "[TCP Socket] Last CMD sent :  \r\n";
        qDebug() << "ID : " << last_cmd_send_fromlist.id
                  << "\r\n NB octets : " << last_cmd_send_fromlist.nb_octet
                  << "\r\n CMD : " <<last_cmd_send_fromlist.cmd
                  << "\r\n NB Params : " <<last_cmd_send_fromlist.nb_param
                  << "\r\n Param[0] : " <<last_cmd_send_fromlist.params[0]
                  << "\r\n Param[1] : " <<last_cmd_send_fromlist.params[1]
                  << "\r\n Param[2] : " <<last_cmd_send_fromlist.params[2]
                  << "\r\n Param[3] : " <<last_cmd_send_fromlist.params[3];

        qDebug() << "[TCP Socket] Answer :  \r\n";
        qDebug() << "ID : " << s_cmd_answer.id
                  << "\r\n NB octets : " << s_cmd_answer.nb_octet
                  << "\r\n CMD : " <<s_cmd_answer.cmd
                  << "\r\n Answer[0] : " <<s_cmd_answer.reponse[0]
                  << "\r\n Answer[1] : " <<s_cmd_answer.reponse[1]
                  << "\r\n Answer[2] : " <<s_cmd_answer.reponse[2]
                  << "\r\n Answer[3] : " <<s_cmd_answer.reponse[3];
*/


        // Process the answer
        switch (s_cmd_answer.cmd) {
            case CMD_INFO:
                emit(Update_Info(s_cmd_answer.reponse[0],s_cmd_answer.reponse[1],s_cmd_answer.reponse[2],(uint8_t)(((s_cmd_answer.reponse[3]) >> 1) & 0xFF),(uint8_t)(s_cmd_answer.reponse[3])& 0x01)); // X, Y, Theta, Number points, Distance Warning, nb_waypoints
            break;

            case CMD_SET_LED:
            break;

            case CMD_GET_LED:
                // trigger signal to update LED values on GUI
                emit(Update_LED((s_cmd_answer.reponse[0] & 0x04) >> 2,(s_cmd_answer.reponse[0] & 0x02) >> 1,(s_cmd_answer.reponse[0] & 0x01)));
            break;

            case CMD_GET_DISTANCES:
                // Trigger signal to update distance value on GUI
                emit(Update_Distance(s_cmd_answer.reponse[0], s_cmd_answer.reponse[1], s_cmd_answer.reponse[2], s_cmd_answer.reponse[3]));
            break;

            case CMD_SET_POSITION:
                emit(Update_SetPositionOK());
            break;

            case CMD_GET_POSITION:
             emit( Update_Position(s_cmd_answer.reponse[0], s_cmd_answer.reponse[1], s_cmd_answer.reponse[2]));
            break;

            case CMD_GO:
                emit( Update_Enable_Disable_regulation(s_cmd_answer.reponse[0]));
            break;

            case CMD_ADD_POINT:
            emit(Update_AddWayPoints(s_cmd_answer.reponse[0])); // Send status of previous Waypoint adding
            break;

            case CMD_RESET_LIST_WAYPOINTS:
            emit(Update_ResetListWayPoints());
            break;

            case CMD_GET_LIST_POINTS:
            break;

            case CMD_GET_TIRETTE:
                // Trigger signal to update tirette state  on GUI
                emit(Update_Tirette(s_cmd_answer.reponse[0]));
            break;

        case CMD_MOVE_SERVO:
        break;

            default:
            break;
        }
    }
}

void TCP_Thread::F_SendDataTCP(tcp_command s_cmd_to_send)
{
    uint8_t params[20] = {0};
    char params_char[20] = {0};

    F_TCP_cmdTotab(params, &s_cmd_to_send);

    // Only to avoid warning conversion in socket->write() between uint8_t and signed char
    for(uint8_t i = 0;i<20;i++)
    {
        params_char[i] = char(params[i]);
    }

    socket->write(params_char,15);
    socket->flush();
    list_cmd.append(s_cmd_to_send);
}

void TCP_Thread::F_Set_LED_RED_ON()
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_SET_LED;
    s_cmd_to_send.nb_param = 4;


    s_cmd_to_send.params[0] = 4;
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}

void TCP_Thread::F_Set_Servo(uint8_t open)
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_MOVE_SERVO;
    s_cmd_to_send.nb_param = 4;


    s_cmd_to_send.params[0] = (uint16_t)open;
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}

void TCP_Thread::F_Set_LED_BLUE_ON()
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_SET_LED;
    s_cmd_to_send.nb_param = 4;


    s_cmd_to_send.params[0] = 1;
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}

void TCP_Thread::F_Set_LED_GREEN_ON()
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_SET_LED;
    s_cmd_to_send.nb_param = 4;


    s_cmd_to_send.params[0] = 2;
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}

void TCP_Thread::F_Get_Distances()
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_GET_DISTANCES;
    s_cmd_to_send.nb_param = 4;

    // Get all sensors
    s_cmd_to_send.params[0] = 0;
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}

void TCP_Thread::F_Get_Info()
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_INFO;
    s_cmd_to_send.nb_param = 4;

    // Get all sensors
    s_cmd_to_send.params[0] = 0;
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}


void TCP_Thread::F_Get_Position()
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_GET_POSITION;
    s_cmd_to_send.nb_param = 4;

    // Get all sensors
    s_cmd_to_send.params[0] = 0;
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}

void TCP_Thread::F_Set_Position(int16_t x, int16_t y, int16_t theta)
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_SET_POSITION;
    s_cmd_to_send.nb_param = 4;

    // Get all sensors
    s_cmd_to_send.params[0] = x;
    s_cmd_to_send.params[1] = y;
    s_cmd_to_send.params[2] = theta;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}


void TCP_Thread::F_Get_Tirette()
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_GET_TIRETTE;
    s_cmd_to_send.nb_param = 4;

    // Get all sensors
    s_cmd_to_send.params[0] = 0;
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}

void TCP_Thread::F_Add_Waypoint(int16_t x, int16_t y,int16_t theta)
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_ADD_POINT;
    s_cmd_to_send.nb_param = 4;

    // Get all sensors
    s_cmd_to_send.params[0] = x;
    s_cmd_to_send.params[1] = y;
    s_cmd_to_send.params[2] = theta;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}

void TCP_Thread::F_Reset_WayPointsList()
{
    struct tcp_command s_cmd_to_send;

    qDebug() <<"RESET LIST" ;
    qDebug() <<"RESET LIST" ;
    qDebug() <<"RESET LIST" ;
    qDebug() <<"RESET LIST" ;
    qDebug() <<"RESET LIST" ;
    qDebug() <<"RESET LIST\r\n" ;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_RESET_LIST_WAYPOINTS;
    s_cmd_to_send.nb_param = 4;

    // Get all sensors
    s_cmd_to_send.params[0] = 0;
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}

void TCP_Thread::F_EnableDisableReguation()
{

    qDebug() << "Send GO !";
    qDebug() << "Send GO !";
    qDebug() << "Send GO !";
    qDebug() << "Send GO !";
    qDebug() << "Send GO !";
    qDebug() << "Send GO !";
    qDebug() << "Send GO !";
    qDebug() << "Send GO !";
    qDebug() << "Send GO !";
    qDebug() << "Send GO !";
    qDebug() << "Send GO !";
    qDebug() << "Send GO !";
    qDebug() << "Send GO !";
    qDebug() << "Send GO ! ON = ";
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_GO;
    s_cmd_to_send.nb_param = 4;

    // Get all sensors
    s_cmd_to_send.params[0] = 1;
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}

void TCP_Thread::F_DisableReguation()
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_GO;
    s_cmd_to_send.nb_param = 4;

    // Get all sensors
    s_cmd_to_send.params[0] = 0;
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}


void TCP_Thread::F_ReconnectTCP()
{
    // Try to connect to the Host
    socket->connectToHost("192.168.2.21",7);


    if(socket->waitForConnected(5000))
    {
        qDebug() << "[TCP Socket] Connected to STM32!";
        terminated = false;

        connexion_state = true;
        emit(Update_StatusConnexionSTM32(1));
    }
    else
    {
        qDebug() << "[TCP Socket] Error connexion to STM32.. \r\n";
        qDebug() << socket->errorString();

        emit(Update_StatusConnexionSTM32(0));

    }
}

void TCP_Thread::F_TCP_SetLED(uint8_t r, uint8_t g, uint8_t b)
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_SET_LED;
    s_cmd_to_send.nb_param = 4;


    //s_cmd_to_send.params[0] = (r & 0x01)+(g & 0x01<< )+(b & 0x01 );
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;


}
/**
 * @brief TCP_Thread::F_TCP_GetLED Send the command to get the value of the LEDs on the STM32 board
 */
void TCP_Thread::F_TCP_GetLED()
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_GET_LED;
    s_cmd_to_send.nb_param = 0;
    s_cmd_to_send.params[0] = 0;
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}



/**
 * @brief TCP_Thread::F_TCP_GetDistances Get the from the sensors connected to the STM32
 * @param sensor_number Sensor number
 */
void TCP_Thread::F_TCP_GetDistances(uint16_t sensor_number)
{
    struct tcp_command s_cmd_to_send;

    s_cmd_to_send.id = cmd_id;
    s_cmd_to_send.nb_octet = 15;
    s_cmd_to_send.cmd = CMD_GET_DISTANCES;
    s_cmd_to_send.nb_param = 1;
    s_cmd_to_send.params[0] = sensor_number;
    s_cmd_to_send.params[1] = 0;
    s_cmd_to_send.params[2] = 0;
    s_cmd_to_send.params[3] = 0;

    F_SendDataTCP(s_cmd_to_send);

    // Increment the command ID
    cmd_id++;
}




bool TCP_Thread::getConnexion_state() const
{
    return connexion_state;
}
