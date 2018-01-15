/********************************************************************************
** Form generated from reading UI file 'mainwindow_new.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_NEW_H
#define UI_MAINWINDOW_NEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *m_TypeClient1;
    QAction *m_TypeServer1;
    QAction *m_Exit;
    QAction *m_TypeClient;
    QAction *m_TypeServer;
    QWidget *Chat;
    QLabel *l_ChatWindow;
    QTextEdit *te_ChatWindow;
    QLineEdit *le_Massage;
    QPushButton *b_Send;
    QLabel *l_ChatWindow_2;
    QLabel *l_ChatWindow_3;
    QLabel *l_ChatWindow_4;
    QLabel *l_ChatWindow_6;
    QLabel *l_ChatWindow_7;
    QLabel *l_ChatWindow_8;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *m_Type;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(340, 490);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(340, 490));
        MainWindow->setMaximumSize(QSize(340, 490));
        MainWindow->setSizeIncrement(QSize(0, 0));
        MainWindow->setBaseSize(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(157, 78, 236, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral("images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("/*background-color:rgb(157, 78, 236)\n"
""));
        MainWindow->setIconSize(QSize(23, 24));
        m_TypeClient1 = new QAction(MainWindow);
        m_TypeClient1->setObjectName(QStringLiteral("m_TypeClient1"));
        m_TypeServer1 = new QAction(MainWindow);
        m_TypeServer1->setObjectName(QStringLiteral("m_TypeServer1"));
        m_Exit = new QAction(MainWindow);
        m_Exit->setObjectName(QStringLiteral("m_Exit"));
        m_TypeClient = new QAction(MainWindow);
        m_TypeClient->setObjectName(QStringLiteral("m_TypeClient"));
        m_TypeClient->setCheckable(false);
        m_TypeClient->setChecked(false);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        m_TypeClient->setFont(font);
        m_TypeServer = new QAction(MainWindow);
        m_TypeServer->setObjectName(QStringLiteral("m_TypeServer"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        m_TypeServer->setFont(font1);
        Chat = new QWidget(MainWindow);
        Chat->setObjectName(QStringLiteral("Chat"));
        Chat->setToolTipDuration(0);
        l_ChatWindow = new QLabel(Chat);
        l_ChatWindow->setObjectName(QStringLiteral("l_ChatWindow"));
        l_ChatWindow->setGeometry(QRect(110, 0, 121, 21));
        QPalette palette1;
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        l_ChatWindow->setPalette(palette1);
        te_ChatWindow = new QTextEdit(Chat);
        te_ChatWindow->setObjectName(QStringLiteral("te_ChatWindow"));
        te_ChatWindow->setGeometry(QRect(-10, 90, 355, 301));
        te_ChatWindow->setMinimumSize(QSize(355, 300));
        te_ChatWindow->setMaximumSize(QSize(355, 320));
        te_ChatWindow->setAutoFillBackground(true);
        te_ChatWindow->setStyleSheet(QLatin1String("border: 1px solid rgb(157, 78, 236);\n"
"background-image:url(images/backgrd.jpg);"));
        te_ChatWindow->setInputMethodHints(Qt::ImhDate|Qt::ImhMultiLine|Qt::ImhTime);
        te_ChatWindow->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_ChatWindow->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        te_ChatWindow->setReadOnly(true);
        le_Massage = new QLineEdit(Chat);
        le_Massage->setObjectName(QStringLiteral("le_Massage"));
        le_Massage->setGeometry(QRect(0, 391, 290, 51));
        QFont font2;
        font2.setPointSize(10);
        le_Massage->setFont(font2);
        le_Massage->setAutoFillBackground(false);
        le_Massage->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        b_Send = new QPushButton(Chat);
        b_Send->setObjectName(QStringLiteral("b_Send"));
        b_Send->setGeometry(QRect(289, 390, 55, 54));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush4(QColor(163, 81, 245, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        b_Send->setPalette(palette2);
        b_Send->setFont(font1);
        b_Send->setAutoFillBackground(false);
        b_Send->setStyleSheet(QStringLiteral(""));
        b_Send->setInputMethodHints(Qt::ImhNone);
        b_Send->setIconSize(QSize(16, 16));
        b_Send->setCheckable(false);
        b_Send->setAutoRepeat(false);
        b_Send->setAutoExclusive(false);
        b_Send->setAutoRepeatDelay(299);
        b_Send->setAutoDefault(false);
        l_ChatWindow_2 = new QLabel(Chat);
        l_ChatWindow_2->setObjectName(QStringLiteral("l_ChatWindow_2"));
        l_ChatWindow_2->setGeometry(QRect(83, 45, 71, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        l_ChatWindow_2->setPalette(palette3);
        l_ChatWindow_3 = new QLabel(Chat);
        l_ChatWindow_3->setObjectName(QStringLiteral("l_ChatWindow_3"));
        l_ChatWindow_3->setGeometry(QRect(40, 20, 121, 21));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        l_ChatWindow_3->setPalette(palette4);
        l_ChatWindow_4 = new QLabel(Chat);
        l_ChatWindow_4->setObjectName(QStringLiteral("l_ChatWindow_4"));
        l_ChatWindow_4->setGeometry(QRect(103, 65, 51, 21));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        l_ChatWindow_4->setPalette(palette5);
        l_ChatWindow_6 = new QLabel(Chat);
        l_ChatWindow_6->setObjectName(QStringLiteral("l_ChatWindow_6"));
        l_ChatWindow_6->setGeometry(QRect(160, 48, 101, 16));
        QPalette palette6;
        QBrush brush5(QColor(0, 170, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        l_ChatWindow_6->setPalette(palette6);
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        l_ChatWindow_6->setFont(font3);
        l_ChatWindow_7 = new QLabel(Chat);
        l_ChatWindow_7->setObjectName(QStringLiteral("l_ChatWindow_7"));
        l_ChatWindow_7->setGeometry(QRect(160, 68, 101, 16));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        l_ChatWindow_7->setPalette(palette7);
        l_ChatWindow_7->setFont(font3);
        l_ChatWindow_8 = new QLabel(Chat);
        l_ChatWindow_8->setObjectName(QStringLiteral("l_ChatWindow_8"));
        l_ChatWindow_8->setGeometry(QRect(160, 23, 101, 16));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        l_ChatWindow_8->setPalette(palette8);
        l_ChatWindow_8->setFont(font3);
        MainWindow->setCentralWidget(Chat);
        l_ChatWindow->raise();
        le_Massage->raise();
        l_ChatWindow_2->raise();
        l_ChatWindow_3->raise();
        l_ChatWindow_4->raise();
        te_ChatWindow->raise();
        b_Send->raise();
        l_ChatWindow_6->raise();
        l_ChatWindow_7->raise();
        l_ChatWindow_8->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 340, 22));
        menubar->setMinimumSize(QSize(340, 22));
        menubar->setMaximumSize(QSize(340, 22));
        QPalette palette9;
        QBrush brush6(QColor(0, 170, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        menubar->setPalette(palette9);
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setWeight(75);
        font4.setStrikeOut(false);
        font4.setKerning(true);
        font4.setStyleStrategy(QFont::PreferAntialias);
        menubar->setFont(font4);
        menubar->setMouseTracking(true);
        menubar->setFocusPolicy(Qt::TabFocus);
        menubar->setContextMenuPolicy(Qt::ActionsContextMenu);
        menubar->setAcceptDrops(true);
        menubar->setToolTipDuration(0);
        menubar->setAutoFillBackground(false);
        menubar->setStyleSheet(QLatin1String("background-color: rgb(0, 170, 255);\n"
"\n"
" QMenuBar::item {\n"
"     spacing: 3px; /* spacing between menu bar items */\n"
"   padding: 1px 4px;\n"
"     background: transparent;\n"
"     border-radius: 4px;\n"
" }\n"
"\n"
" QMenuBar::item:pressed {\n"
"     background: #888888;\n"
" }"));
        menubar->setNativeMenuBar(false);
        m_Type = new QMenu(menubar);
        m_Type->setObjectName(QStringLiteral("m_Type"));
        m_Type->setGeometry(QRect(339, 101, 183, 113));
        m_Type->setStyleSheet(QLatin1String(" QMenuBar::item {\n"
"     spacing: 3px; /* spacing between menu bar items */\n"
"     padding: 1px 4px;\n"
"     background: transparent;\n"
"     border-radius: 4px;\n"
" }\n"
"\n"
" QMenuBar::item:selected { /* when selected using mouse or keyboard */\n"
"     background: #a8a8a8;\n"
" }\n"
"\n"
" QMenuBar::item:pressed {\n"
"     background: #888888;\n"
" }"));
        m_Type->setTearOffEnabled(true);
        m_Type->setSeparatorsCollapsible(true);
        m_Type->setToolTipsVisible(true);
        MainWindow->setMenuBar(menubar);

        menubar->addAction(m_Type->menuAction());
        m_Type->addAction(m_TypeClient);
        m_Type->addSeparator();
        m_Type->addAction(m_TypeServer);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Private messenger", 0));
        m_TypeClient1->setText(QApplication::translate("MainWindow", "\320\232\320\273\320\270\320\265\320\275\321\202", 0));
        m_TypeServer1->setText(QApplication::translate("MainWindow", "\320\241\320\265\321\200\320\262\320\265\321\200", 0));
        m_Exit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        m_TypeClient->setText(QApplication::translate("MainWindow", "\320\232\320\273\320\270\320\265\320\275\321\202", 0));
        m_TypeServer->setText(QApplication::translate("MainWindow", "\320\241\320\265\321\200\320\262\320\265\321\200", 0));
        l_ChatWindow->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">Information:</span></p></body></html>", 0));
        te_ChatWindow->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        b_Send->setText(QApplication::translate("MainWindow", "SEND", 0));
        b_Send->setShortcut(QApplication::translate("MainWindow", "Enter", 0));
        l_ChatWindow_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">Username:</span></p><p align=\"center\"><br/></p></body></html>", 0));
        l_ChatWindow_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">Server address:</span></p></body></html>", 0));
        l_ChatWindow_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; text-decoration: underline;\">Status:</span></p></body></html>", 0));
        l_ChatWindow_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
        l_ChatWindow_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#00aa00;\"><br/></span></p></body></html>", 0));
        l_ChatWindow_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
        m_Type->setTitle(QApplication::translate("MainWindow", "Options", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_NEW_H
