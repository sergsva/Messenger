#ifndef CONNECTION_H
#define CONNECTION_H
#include <QDialog>
#include <QNetworkInterface>

namespace Ui {
class Connection;
}

class Connection: public QDialog
{
private:
    Q_OBJECT

protected:
    Ui::Connection *ui2;
    QString password;

public:
    QString username;
    QString serverName;
    QString serverPort;
    QString textMessage;
    virtual  void sendToClient(const QString& str)=0;
    explicit Connection(QWidget *parent = 0);
    void showWindow();
    virtual void Initialization()=0;
    void exitWindow();
     ~Connection();

public slots:
    void slotShowStatusInfo(const QString &str);
    void slotSetInfoAboutServer();

signals:
    void ConnectDataInput();



};


#endif // CONNECTION_H
