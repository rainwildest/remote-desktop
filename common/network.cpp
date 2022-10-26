#include "network.h"
#include <QDebug>
#define _COUT qDebug() << "[" << __FILE__ <<":" << __LINE__ << "]"

Network::Network(QObject *parent)
    : QObject{parent}
{

}

void Network::connected()
{
    _COUT << "连接上了";
}

void Network::create()
{
    m_tcpSocket = new QTcpSocket(this);

    connect(m_tcpSocket, &QTcpSocket::connected, this, &Network::connected);

    m_tcpSocket->connectToHost("www.baidu.com", 80);
}

