#include"ui_connection.h"
//#include"ui_mainwindow.h"
#include"ui_mainwindow_new.h"
#include <QApplication>
#include "mainwindow.h"
#include"connection.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
