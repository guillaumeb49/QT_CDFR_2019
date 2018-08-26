#include "tcp_thread.h"

void TCP_Thread::run()
{

    socket = new QTcpSocket();

    // Try to connect to the Host (STM32)
    socket->connectToHost("192.168.0.26",7);

    if(socket->waitForConnected(5000))
    {
        std::cout << "[TCP Socket] Connected to STM32!";
        terminated = false;

        // Connect Signals / Slots
        connect(socket,SIGNAL(readyRead()),this,SLOT(F_ProcessDataReiceivedTCP()));

    }
    else
    {
        std::cout << "[TCP Socket] Error connexion to STM32.. \r\n";
        std::cout << socket->errorString().toStdString();

        terminated = true;
    }

    while(terminated != true)
    {

    }

}


void TCP_Thread::F_TCP_answerTotab(uint8_t *array, struct tcp_answer *s_cmd_answer)
{
    uint8_t i = 0, j = 0;

    array[0] = uint8_t(0x000F & (s_cmd_answer->id >> 24));
    array[1] = uint8_t(0x000F & (s_cmd_answer->id >> 16));
    array[2] = uint8_t(0x000F & (s_cmd_answer->id >> 8));
    array[3] = uint8_t(0x000F & s_cmd_answer->id);
    array[4] = s_cmd_answer->nb_octet;
    array[5] = s_cmd_answer->cmd;
    array[6] = s_cmd_answer->code_retour;

    for(i=0;i<SIZE_PARAM_CMD;i++)
    {
        array[7+j] = uint8_t(0x000F & (s_cmd_answer->reponse[i] >> 8));
        array[7+j+1] = uint8_t(0x000F & s_cmd_answer->reponse[i]);

        j+=2;
    }


}

void TCP_Thread::F_TCP_cmdTotab(uint8_t *array, struct tcp_command *s_cmd)
{
    uint8_t i = 0, j = 0;

    array[0] = uint8_t(0x000F & (s_cmd->id >> 24));
    array[1] = uint8_t(0x000F & (s_cmd->id >> 16));
    array[2] = uint8_t(0x000F & (s_cmd->id >> 8));
    array[3] = uint8_t(0x000F & s_cmd->id);
    array[4] = s_cmd->nb_octet;
    array[5] = s_cmd->cmd;
    array[6] = s_cmd->nb_param;

    for(i=0;i<SIZE_PARAM_CMD;i++)
    {
        array[7+j] = uint8_t(0x000F & (s_cmd->params[i] >> 8));
        array[7+j+1] = uint8_t(0x000F & s_cmd->params[i]);

        j+=2;
    }
}


void TCP_Thread::F_ProcessDataReiceivedTCP()
{
    QByteArray received_data;
    uint8_t array[20] = {0};
    struct tcp_answer s_cmd_answer;

    received_data = socket->readAll();

    for(uint8_t i = 0;i<20;i++)
    {
        array[i] = received_data.at(i);
    }

    F_TCP_answerTotab(array, &s_cmd_answer);

    if(s_cmd_answer.code_retour != STATUS_OK)
    {
        std::cout << "[TCP Socket] Erreur last CMD \r\n";
        std::cout << "[TCP Socket] Last CMD sent :  \r\n";
        std::cout << "ID : " << last_cmd_sent.id
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
        std::cout << "[TCP Socket] Last CMD OK !\r\n";
        std::cout << "[TCP Socket] Last CMD sent :  \r\n";
        std::cout << "ID : " << last_cmd_sent.id
                  << "\r\n NB octets : " << last_cmd_sent.nb_octet
                  << "\r\n CMD : " <<last_cmd_sent.cmd
                  << "\r\n NB Params : " <<last_cmd_sent.nb_param
                  << "\r\n Param[0] : " <<last_cmd_sent.params[0]
                  << "\r\n Param[1] : " <<last_cmd_sent.params[1]
                  << "\r\n Param[2] : " <<last_cmd_sent.params[2]
                  << "\r\n Param[3] : " <<last_cmd_sent.params[3];


        // Process the answer
        switch (s_cmd_answer.cmd) {
            case CMD_INFO:
            break;

            case CMD_SET_LED:
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
}
