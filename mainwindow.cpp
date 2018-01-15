#include "mainwindow.h"
//#include "ui_mainwindow.h"
#include"ui_mainwindow_new.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow)
{
   srand(time(0));
   ui->setupUi(this);
   this->status = 0;
   MyConnect = nullptr;
    ui->le_Massage->setModified(false);
    ui->l_ChatWindow_7->setText("Disconnected");
   connect(ui->m_TypeClient, SIGNAL(triggered()),this, SLOT(slotSetStatusClient()));
   connect(ui->m_TypeServer, SIGNAL(triggered()),this, SLOT(slotSetStatusServer()));
   connect(ui->b_Send,SIGNAL(clicked()),this,SLOT(slotSetMyTextChat()));

}

void MainWindow::slotSetConnectParam()
{
    if(MyConnect!=nullptr)
    {
        MyConnect->Initialization();
    }
}

void MainWindow::slotClientDisconnectedInfo()
{
  //  ui->te_ChatWindow->clear();

   ui->te_ChatWindow->append(dt.toString("  hh:mm:ss: ")+ "Client disconnected!" + "\n");
}

void MainWindow::slotServerDisconnectedInfo()
{
   // ui->te_ChatWindow->clear();
ui->l_ChatWindow_7->setText("Disconnected");
   // ui->te_ChatWindow->append(dt.toString("  hh:mm:ss: ")+ "Server disconnected!" + "\n");
}

void MainWindow::slotClientConnectedInfo()
{
 dt = QDateTime::currentDateTime();
 ui->te_ChatWindow->append(dt.toString("  hh:mm:ss: ") + " Client Connected!" + "\n");

}

void MainWindow::slotSetStatusClient()
{ if(MyConnect!=nullptr)  delete MyConnect;
    ui->te_ChatWindow->clear();
     ui->le_Massage->clear();
    this->status = 2;
     MyConnect = new Client();
     MyConnect->showWindow();
     connect(MyConnect,SIGNAL(ConnectDataInput()),this, SLOT(slotSetConnectParam()));
     connect(MyConnect,SIGNAL(sendTextToChat()),this,SLOT(slotSetTextChat()));
     connect(MyConnect,SIGNAL(sendServerDisconnected()),this,SLOT(slotCloseWndAfterConnectedToServer()));

}

void MainWindow::slotSetStatusServer()
{
    if(MyConnect!=nullptr)  delete MyConnect;
    ui->te_ChatWindow->clear();
     ui->le_Massage->clear();
    this->status = 1;
    MyConnect = new Server();
    MyConnect->showWindow();
    connect(MyConnect,SIGNAL(ConnectDataInput()),this, SLOT(slotSetConnectParam()));
    connect(MyConnect,SIGNAL(SendClientDisconnected()),this,SLOT(slotClientDisconnectedInfo()));
    connect(MyConnect,SIGNAL(sendTextToChat()),this,SLOT(slotSetTextChat()));
    connect(MyConnect,SIGNAL(SendServerStarted()),this,SLOT(slotSetInfoServerStarted()));
     connect(MyConnect,SIGNAL(SendClientConnected()),this,SLOT(slotClientConnectedInfo()));
   // ui->l_ChatWindow_8->setText(QVariant(dynamic_cast<Server*>MyConnect->getCountClients())).toString());

}
void MainWindow::slotSetInfoServerStarted()
{
     if(status!=0){
    MyConnect->exitWindow();
    ui->l_ChatWindow_8->setText("localhost");
    ui->l_ChatWindow_6->setText(MyConnect->username);
    ui->l_ChatWindow_7->setText("Server started");}
  //  ui->te_ChatWindow->append(dt.toString("  hh:mm:ss: ") + "Server started!\n");}
}

void MainWindow::slotCloseWndAfterConnectedToServer()
{
     if(status!=0){
     MyConnect->exitWindow();
     ui->l_ChatWindow_8->setText(MyConnect->serverName);
     ui->l_ChatWindow_6->setText(MyConnect->username);
     ui->l_ChatWindow_7->setText("Connected");}
}


void MainWindow::slotSetTextChat()
{
    if(status!=0){
    dt = QDateTime::currentDateTime();
    QString sender;
    auto str = MyConnect->textMessage.split(":");
    sender = str[0];
    MyConnect->textMessage.remove(0,sender.length()+1);
    ui->te_ChatWindow->append("  " + sender + "\n  " + dt.toString("hh:mm:ss: ")+ MyConnect->textMessage + "\n");}
}


  void MainWindow::slotSetMyTextChat()
 {
 if(ui->le_Massage->isModified())
 {
 dt = QDateTime::currentDateTime();
 if(status!=0) {MyConnect->sendToClient(MyConnect->username + ":" + ui->le_Massage->text());
 ui->te_ChatWindow->append("  " + MyConnect->username + "\n  " + dt.toString("hh:mm:ss ")+ ui->le_Massage->text() + "\n");}
 ui->le_Massage->clear();
 ui->le_Massage->setModified(false);
}

}


MainWindow::~MainWindow()
{
    delete MyConnect;
    delete ui;
}



