#include "connection.h"
#include"ui_connection.h"

Connection::Connection(QWidget *parent) : QDialog(parent), ui2(new Ui::Connection)
{
   ui2->setupUi(this);
   connect(ui2->b_Connect, SIGNAL(clicked()),this, SLOT(slotSetInfoAboutServer()));
   ui2->le_Server->setInputMask("990.900.900.900");
   ui2->le_Server->setCursorPosition(0);
   ui2->le_Port->setInputMask("D0000");
   ui2->le_Port->setCursorPosition(0);
   ui2->le_Password->setEchoMode(QLineEdit::Password);
   ui2->le_Password->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);
   ui2->le_Password->setCursorPosition(0);
   ui2->le_Username->setCursorPosition(0);
   ui2->le_Username->setInputMask("Nnnnnnnn");

}
void Connection::slotShowStatusInfo(const QString &str)
{
  ui2->t_StatusInfo->setText(str);
}

 void Connection::slotSetInfoAboutServer()
 {
    serverName = ui2->le_Server->text();
    serverPort =ui2->le_Port->text();
    username = ui2->le_Username->text();
    password = ui2->le_Password->text();
     emit ConnectDataInput();
 }

 void Connection::showWindow()
 {
     this->show();
 }
 void Connection::exitWindow()
 {
    this->close();
 }

Connection::~Connection()
{
    delete ui2;
}
