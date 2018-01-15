/********************************************************************************
** Form generated from reading UI file 'connection.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTION_H
#define UI_CONNECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Connection
{
public:
    QLabel *l_Username;
    QLabel *l_Port;
    QLineEdit *le_Server;
    QLineEdit *le_Port;
    QLabel *l_Server;
    QLineEdit *le_Password;
    QLabel *l_Password;
    QPushButton *b_Connect;
    QTextEdit *t_StatusInfo;
    QLabel *l_Status;
    QPushButton *b_ExitWindow;
    QLineEdit *le_Username;

    void setupUi(QDialog *Connection)
    {
        if (Connection->objectName().isEmpty())
            Connection->setObjectName(QStringLiteral("Connection"));
        Connection->resize(320, 240);
        Connection->setMinimumSize(QSize(320, 240));
        Connection->setMaximumSize(QSize(320, 240));
        Connection->setSizeIncrement(QSize(0, 0));
        Connection->setBaseSize(QSize(0, 0));
        Connection->setCursor(QCursor(Qt::PointingHandCursor));
        Connection->setMouseTracking(true);
        Connection->setStyleSheet(QStringLiteral("background-color:rgb(157, 78, 236)"));
        l_Username = new QLabel(Connection);
        l_Username->setObjectName(QStringLiteral("l_Username"));
        l_Username->setGeometry(QRect(40, 80, 71, 21));
        l_Port = new QLabel(Connection);
        l_Port->setObjectName(QStringLiteral("l_Port"));
        l_Port->setGeometry(QRect(40, 50, 46, 16));
        le_Server = new QLineEdit(Connection);
        le_Server->setObjectName(QStringLiteral("le_Server"));
        le_Server->setGeometry(QRect(120, 20, 170, 20));
        le_Server->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        le_Server->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhFormattedNumbersOnly);
        le_Server->setMaxLength(15);
        le_Port = new QLineEdit(Connection);
        le_Port->setObjectName(QStringLiteral("le_Port"));
        le_Port->setGeometry(QRect(120, 50, 170, 20));
        le_Port->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        le_Port->setInputMethodHints(Qt::ImhDigitsOnly);
        le_Port->setMaxLength(5);
        le_Port->setCursorPosition(0);
        l_Server = new QLabel(Connection);
        l_Server->setObjectName(QStringLiteral("l_Server"));
        l_Server->setGeometry(QRect(40, 20, 46, 16));
        le_Password = new QLineEdit(Connection);
        le_Password->setObjectName(QStringLiteral("le_Password"));
        le_Password->setGeometry(QRect(120, 110, 170, 20));
        le_Password->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        le_Password->setMaxLength(10);
        le_Password->setFrame(true);
        le_Password->setEchoMode(QLineEdit::Password);
        le_Password->setCursorMoveStyle(Qt::VisualMoveStyle);
        l_Password = new QLabel(Connection);
        l_Password->setObjectName(QStringLiteral("l_Password"));
        l_Password->setGeometry(QRect(40, 110, 71, 16));
        b_Connect = new QPushButton(Connection);
        b_Connect->setObjectName(QStringLiteral("b_Connect"));
        b_Connect->setGeometry(QRect(40, 210, 111, 20));
        QPalette palette;
        QBrush brush(QColor(157, 78, 236, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        b_Connect->setPalette(palette);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        b_Connect->setFont(font);
        t_StatusInfo = new QTextEdit(Connection);
        t_StatusInfo->setObjectName(QStringLiteral("t_StatusInfo"));
        t_StatusInfo->setGeometry(QRect(40, 170, 251, 31));
        t_StatusInfo->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        t_StatusInfo->setInputMethodHints(Qt::ImhLatinOnly|Qt::ImhMultiLine);
        t_StatusInfo->setReadOnly(true);
        l_Status = new QLabel(Connection);
        l_Status->setObjectName(QStringLiteral("l_Status"));
        l_Status->setGeometry(QRect(40, 150, 250, 20));
        b_ExitWindow = new QPushButton(Connection);
        b_ExitWindow->setObjectName(QStringLiteral("b_ExitWindow"));
        b_ExitWindow->setGeometry(QRect(180, 210, 111, 20));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        b_ExitWindow->setPalette(palette1);
        b_ExitWindow->setFont(font);
        le_Username = new QLineEdit(Connection);
        le_Username->setObjectName(QStringLiteral("le_Username"));
        le_Username->setGeometry(QRect(120, 80, 170, 20));
        le_Username->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        le_Username->setInputMethodHints(Qt::ImhDigitsOnly);
        le_Username->setMaxLength(5);
        le_Username->setCursorPosition(0);

        retranslateUi(Connection);
        QObject::connect(b_ExitWindow, SIGNAL(clicked()), Connection, SLOT(close()));

        QMetaObject::connectSlotsByName(Connection);
    } // setupUi

    void retranslateUi(QDialog *Connection)
    {
        Connection->setWindowTitle(QApplication::translate("Connection", "Dialog", 0));
        l_Username->setText(QApplication::translate("Connection", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Username</span></p></body></html>", 0));
        l_Port->setText(QApplication::translate("Connection", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Port</span></p></body></html>", 0));
        le_Server->setInputMask(QString());
        l_Server->setText(QApplication::translate("Connection", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Server</span></p></body></html>", 0));
        l_Password->setText(QApplication::translate("Connection", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Password</span></p></body></html>", 0));
        b_Connect->setText(QApplication::translate("Connection", "Connect", 0));
        b_Connect->setShortcut(QApplication::translate("Connection", "Enter", 0));
        l_Status->setText(QApplication::translate("Connection", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">Connection status</span></p></body></html>", 0));
        b_ExitWindow->setText(QApplication::translate("Connection", "Exit", 0));
        b_ExitWindow->setShortcut(QApplication::translate("Connection", "Esc", 0));
    } // retranslateUi

};

namespace Ui {
    class Connection: public Ui_Connection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTION_H
