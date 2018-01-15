#ifndef CLIENT_H
#define CLIENT_H
#include "connection.h"
#include<QtNetwork/QTcpSocket>

class Client : public Connection
{
    private:
    Q_OBJECT
    quint8 comAutchReq = 0;
    QTcpSocket* m_pTcpSocket;
    quint16     m_nNextBlockSize;

public:
    explicit Client();
    void sendToClient(const QString& str);
    void Initialization();

private slots:
    void slotReadyRead   (                            );
    void slotError       (QAbstractSocket::SocketError);
    void slotConnected   (                            );

signals:
   void sendTextToChat();
   void sendServerDisconnected();
   void sendConnectedToChat();
};

#endif // CLIENT_H
