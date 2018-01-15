#ifndef SERVER_H
#define SERVER_H
#include "connection.h"
#include<QtNetwork/QTcpSocket>
#include<QtNetwork/QTcpServer>

class Server : public Connection
{  
private:
    QTcpServer* m_ptcpServer;
    QTcpSocket* pClientSocket;
    quint16     m_nNextBlockSize;
    QList<QPair<int,QString>> Users;
    QMap<int,QTcpSocket *> SClients;
    int flag;
    Q_OBJECT

public:
    Server();
    void Initialization();
    void sendToClient(const QString& str);
    void setFlag(int i);
    int getCountClients();
    ~Server();

public slots:
    void slotNewConnection();
    void slotReadClient();

signals:
    void sendClientDisconnected();
    void sendClientConnected();
    void sendServerStarted();
    void sendTextToChat();

};

#endif // SERVER_H
