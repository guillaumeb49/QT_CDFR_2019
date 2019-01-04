#include "tcp_handler.h"

TCP_Handler::TCP_Handler()
{
    cmd_id = 0;
    connexion_state = false;
}


void TCP_Handler::F_TCP_answerTotab(uint8_t *array, struct tcp_answer *s_cmd_answer)
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

void TCP_Handler::F_TCP_TabToAnswer(uint8_t *array, struct tcp_answer *s_cmd_answer)
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



void TCP_Handler::F_TCP_cmdTotab(uint8_t *array, struct tcp_command *s_cmd)
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


void TCP_Handler::F_ProcessDataReiceivedTCP(QByteArray received_data)
{

    uint8_t array[20] = {0};
    struct tcp_answer s_cmd_answer;

    qDebug() << "received ("<<received_data.length()<<")\r\n" << received_data << "\r\n";
    for(uint8_t i = 0;i<20;i++)
    {
        array[i] = received_data.at(i);
    }

    F_TCP_TabToAnswer(array, &s_cmd_answer);

    list_answer.append(s_cmd_answer);

    qDebug() << "s_cmd_answer.code_retour = " << s_cmd_answer.code_retour ;


    if(s_cmd_answer.code_retour != STATUS_OK)
    {
        qDebug() << "[TCP Socket] Erreur last CMD \r\n";
        qDebug() << "[TCP Socket] Last CMD sent :  \r\n";
        qDebug() << "ID : " << last_cmd_sent.id
                  << "\r\n NB octets : " << last_cmd_sent.nb_octet
                  << "\r\n CMD : " <<last_cmd_sent.cmd
                  << "\r\n NB Params : " <<last_cmd_sent.nb_param
                  << "\r\n Param[0] : " <<last_cmd_sent.params[0]
                  << "\r\n Param[1] : " <<last_cmd_sent.params[1]
                  << "\r\n Param[2] : " <<last_cmd_sent.params[2]
                  << "\r\n Param[3] : " <<last_cmd_sent.params[3];
    }
    else // command generated a STATUS_OK response code
    {
        qDebug() << "[TCP Socket] Last CMD OK !\r\n";
        qDebug() << "[TCP Socket] Last CMD sent :  \r\n";
        qDebug() << "ID : " << last_cmd_sent.id
                  << "\r\n NB octets : " << last_cmd_sent.nb_octet
                  << "\r\n CMD : " <<last_cmd_sent.cmd
                  << "\r\n NB Params : " <<last_cmd_sent.nb_param
                  << "\r\n Param[0] : " <<last_cmd_sent.params[0]
                  << "\r\n Param[1] : " <<last_cmd_sent.params[1]
                  << "\r\n Param[2] : " <<last_cmd_sent.params[2]
                  << "\r\n Param[3] : " <<last_cmd_sent.params[3];

        qDebug() << "[TCP Socket] Answer :  \r\n";
        qDebug() << "ID : " << s_cmd_answer.id
                  << "\r\n NB octets : " << s_cmd_answer.nb_octet
                  << "\r\n CMD : " <<s_cmd_answer.cmd
                  << "\r\n Answer[0] : " <<s_cmd_answer.reponse[0]
                  << "\r\n Answer[1] : " <<s_cmd_answer.reponse[1]
                  << "\r\n Answer[2] : " <<s_cmd_answer.reponse[2]
                  << "\r\n Answer[3] : " <<s_cmd_answer.reponse[3];



        // Process the answer
        switch (s_cmd_answer.cmd) {
            case CMD_INFO:
            break;

            case CMD_SET_LED:
            break;

            case CMD_GET_LED:

            // trigger signal to update LED values on GUI
           // emit(Update_LED((s_cmd_answer.reponse[0] & 0x04) >> 2,(s_cmd_answer.reponse[0] & 0x02) >> 1,(s_cmd_answer.reponse[0] & 0x01)));

            break;

            case CMD_GET_DISTANCES:
            break;

            case CMD_SET_POSITION:
            break;

            case CMD_GET_POSITION:
            break;

            case CMD_GO:
            break;

            case CMD_ADD_POINT:
            break;

            case CMD_REMOVE_POINT:
            break;

            case CMD_GET_LIST_POINTS:
            break;

            default:
            break;
        }

    }

}
/*
void TCP_Handler::F_SendDataTCP(QTcpSocket *socket, tcp_command s_cmd_to_send)
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



void TCP_Handler::F_TCP_SetLED(uint8_t r, uint8_t g, uint8_t b)
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
*/
bool TCP_Handler::getConnexion_state() const
{
    return connexion_state;
}
