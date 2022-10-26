#ifndef NETWORK_H
#define NETWORK_H

#include <QObject>
#include <QTcpSocket>

class Network : public QObject
{
    Q_OBJECT
public:
    explicit Network(QObject *parent = nullptr);

    void connected();
public:
    QTcpSocket *m_tcpSocket;
signals:

public slots:
    void create();
};

#endif // NETWORK_H
