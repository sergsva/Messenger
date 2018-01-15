#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QDialog>
#include"connection.h"
#include "client.h"
#include "server.h"
#include<stdlib.h>
#include<time.h>
#include<QDateTime>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Connection* MyConnect;
    int status;
  Ui::MainWindow *ui;

public slots:
    void slotSetStatusServer();
    void slotSetStatusClient();
    void slotSetConnectParam();
    void slotSetMyTextChat();
    void slotSetTextChat();
    void slotClientDisconnectedInfo();
    void slotServerDisconnectedInfo();
    void slotClientConnectedInfo();
    void slotCloseWndAfterConnectedToServer();
    void slotSetInfoServerStarted();



public:
    explicit MainWindow(QWidget *parent = 0);
QDateTime dt;
    ~MainWindow();

};

#endif // MAINWINDOW_H



