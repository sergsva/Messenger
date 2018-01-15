#include "server.h"
#include <QCoreApplication>
#include"ui_connection.h"
#include "mainwindow.h"
#include"ui_mainwindow_new.h"
#include<QObject>

Server::Server():flag(0)
{
      QList<QHostAddress> addr = QNetworkInterface::allAddresses();
      ui2->le_Server->setReadOnly(true);
      ui2->le_Port->setReadOnly(true);
      ui2->le_Server->setText(addr.first().toString());
      ui2->le_Port->setText(QVariant(1024 + rand()%(65565 - 1024)).toString());
 }

void Server::setFlag(int i)
{
    if(i>=0 && i<3)
    {
        this->flag = i;
    }
}

int Server::getCountClients()
{
    return Users.count();
}

void Server::Initialization(){

     m_ptcpServer = new QTcpServer(this);
     m_nNextBlockSize = 0;
     if(this->username.count() <= 3  || this->password == "")
     {
         slotShowStatusInfo("Unable to start the server! Input data is not correct!");
         return;
     }
    if (!m_ptcpServer->listen(QHostAddress::Any, this->serverPort.toInt()))
     {
      slotShowStatusInfo("Unable to start the server:" + m_ptcpServer->errorString());
      m_ptcpServer->close();
     }
      else
    {
      emit this->sendServerStarted();
     connect(m_ptcpServer, SIGNAL(newConnection()), this,SLOT(slotNewConnection()));
    }
}

void Server::slotNewConnection()
{
    pClientSocket = m_ptcpServer->nextPendingConnection();
    int idUserSocet=pClientSocket->socketDescriptor();
    SClients[idUserSocet]=pClientSocket;
    connect(SClients[idUserSocet],SIGNAL(readyRead()),this, SLOT(slotReadClient()));
    connect(SClients[idUserSocet], SIGNAL(disconnected()),SIGNAL(sendClientDisconnected()));
    connect(SClients[idUserSocet], SIGNAL(disconnected()), SClients[idUserSocet], SLOT(deleteLater()));
    setFlag(1);
}

void Server::slotReadClient()
{
   pClientSocket = (QTcpSocket*)sender();
   m_nNextBlockSize = 0;
    QDataStream in(pClientSocket);
    in.setVersion(QDataStream::Qt_5_3);
        for (;;)
        {
            if (!m_nNextBlockSize)
            {
                if (pClientSocket->bytesAvailable() < sizeof(quint16))
                {
                    break;
                }
                in >> m_nNextBlockSize;
            }

            if (pClientSocket->bytesAvailable() < m_nNextBlockSize)
            {
                break;
            }
            in >> textMessage;
            int temp = 0;
            for(; temp<Users.count(); temp++)
            {
                if(Users[temp].first == pClientSocket->socketDescriptor()) break;
            }

            if(temp!=Users.count())
            {
                emit this->sendTextToChat();
                setFlag(2);
                sendToClient(Users[temp].second + ":" + textMessage);
            }
            else
            {
               QStringList firstMessage = textMessage.split(":");
               if(firstMessage.value(1) == this->password){
               Users.push_back(qMakePair(pClientSocket->socketDescriptor(),firstMessage.value(0)));
               connect(SClients[SClients.key(pClientSocket)],SIGNAL(readyRead()),this, SLOT(slotReadClient()));
               connect(SClients[SClients.key(pClientSocket)], SIGNAL(disconnected()),this,SLOT(slotClientDisconnected()));
               connect(SClients[SClients.key(pClientSocket)], SIGNAL(disconnected()), SClients[SClients.key(pClientSocket)], SLOT(deleteLater()));
               pClientSocket->connected();
               sendToClient("OK");
                emit this->sendClientConnected();}
               else
               {
                 sendToClient("Wrong password");
               }
            }
            m_nNextBlockSize = 0;
}
}

void Server::sendToClient(const QString& str)
{
    QByteArray  arrBlock;
    QDataStream out(&arrBlock, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_3);
    out << quint16(0) << str;
    out.device()->seek(0);
    out << quint16(arrBlock.size() - sizeof(quint16));
     foreach(int i,SClients.keys())
     {
         if(flag == 1)
         {
             pClientSocket->write(arrBlock);
             break;
         }
         if((flag == 2 && SClients[i]!= pClientSocket) || flag == 0)
         {
             SClients[i]->write(arrBlock);
         }
     }
     flag = 0;
}

Server::~Server()
{
        ui2->le_Server->setReadOnly(false);
}
