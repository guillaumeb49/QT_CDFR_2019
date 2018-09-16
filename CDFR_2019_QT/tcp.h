#ifndef TCP_H
#define TCP_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QDebug>

class TCP : public QObject
{
    Q_OBJECT
public:
    explicit TCP(QObject *parent = nullptr);

    void doConnect();

signals:

public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();

private:
    QTcpSocket *socket;
};

#endif // TCP_H
