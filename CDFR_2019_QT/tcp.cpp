#include "tcp.h"

TCP::TCP(QObject *parent) : QObject(parent)
{

}

void TCP::doConnect()
{
    socket = new QTcpSocket(this);

    connect(socket, SIGNAL(connected()),this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()),this, SLOT(disconnected()));
    connect(socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead()));

    qDebug() << "connecting...";

    // this is not blocking call
    socket->connectToHost("192.168.1.21",7);

    // we need to wait...
    if(!socket->waitForConnected(5000))
    {
        qDebug() << "[TCP Socket] Error connexion to STM32.. \r\n";
        qDebug() << "Error: " << socket->errorString();
    }
    else
    {
        qDebug() << "[TCP Socket] Connected to STM32!";
    }
}

void TCP::connected()
{
    qDebug() << "connected...";

    // Hey server, tell me about you.
    socket->write("HEAD / HTTP/1.0\r\n\r\n\r\n\r\n");
}

void TCP::disconnected()
{
    qDebug() << "[TCP Socket] Disconnected from STM32!";
}

void TCP::bytesWritten(qint64 bytes)
{
    qDebug() << bytes << " bytes written...";
}

void TCP::readyRead()
{
    qDebug() << "[TCP Socket] reading...";

    // read the data from the socket
    qDebug() << socket->readAll();
}
