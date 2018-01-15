#include "client.h"
Client::Client()
{

}
void Client::Initialization()
{
 m_pTcpSocket = new QTcpSocket(this);
 m_nNextBlockSize = 0;
 if(serverPort.toInt()>=1024 && serverPort.toInt()<=65535 && username.count()>=3)
 {
 m_pTcpSocket->connectToHost(serverName, serverPort.toInt());
 connect(m_pTcpSocket, SIGNAL(connected()), SLOT(slotConnected()));
 connect(m_pTcpSocket, SIGNAL(readyRead()), SLOT(slotReadyRead()));
 connect(m_pTcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),this, SLOT(slotError(QAbstractSocket::SocketError)));
 }
 else slotError(QAbstractSocket::NetworkError);
}

void Client::slotReadyRead()
{
    QDataStream in(m_pTcpSocket);
    in.setVersion(QDataStream::Qt_5_3);
    for (;;)
    {
        if (!m_nNextBlockSize)
        {
            if (m_pTcpSocket->bytesAvailable() < sizeof(quint16))
            {
                break;
            }
            in >> m_nNextBlockSize;
        }

        if (m_pTcpSocket->bytesAvailable() < m_nNextBlockSize) {
            break;
        }
        in >> textMessage;
        if(comAutchReq == 0)
        {
            if(textMessage=="OK")
            {
                comAutchReq=1;
                emit this->sendConnectedToChat();
            }
            else  slotShowStatusInfo("The password is incorrect.");
        }
        else emit this->sendTextToChat();
        m_nNextBlockSize = 0;
    }
}

void Client::slotError(QAbstractSocket::SocketError err)
{
    QString strError =
        "Error: " + (err == QAbstractSocket::HostNotFoundError ?
                     "The host was not found." :
                      err == QAbstractSocket::NetworkError ?
                     "Port is incorrect or Username < 3 symbols.":
                     err == QAbstractSocket::RemoteHostClosedError ?
                     "The remote host is closed." :
                     err == QAbstractSocket::ConnectionRefusedError ?
                     "The connection was refused." :
                     err==QAbstractSocket::OperationError?
                     "The password is incorrect.":
                     QString(m_pTcpSocket->errorString())
                    );
     slotShowStatusInfo(strError);
     if(err == QAbstractSocket::RemoteHostClosedError ||  err == QAbstractSocket::ConnectionRefusedError)
         emit this->sendServerDisconnected();
}

void Client::slotConnected()
{
    if(comAutchReq == 0)
    {
         QString UsernameANDPass = this->username + ":"+this->password;
        sendToClient(UsernameANDPass);
    }
    else emit this->sendConnectedToChat();

}

 void Client:: sendToClient(const QString& str)
 {
     QByteArray  arrBlock;
     QDataStream out(&arrBlock, QIODevice::WriteOnly);
     out.setVersion(QDataStream::Qt_5_3);
     out << quint16(0) << str;
     out.device()->seek(0);
     out << quint16(arrBlock.size() - sizeof(quint16));
      m_pTcpSocket->write(arrBlock);
 }
