/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *north;
    QPushButton *south;
    QPushButton *west;
    QPushButton *east;
    QLabel *outputConsole;
    QTextEdit *gameText;
    QPushButton *teleport;
    QPushButton *help;
    QTextEdit *mapBox;
    QPushButton *map_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 470, 131, 51));
        north = new QPushButton(centralwidget);
        north->setObjectName(QString::fromUtf8("north"));
        north->setGeometry(QRect(160, 400, 121, 61));
        south = new QPushButton(centralwidget);
        south->setObjectName(QString::fromUtf8("south"));
        south->setGeometry(QRect(160, 480, 121, 61));
        west = new QPushButton(centralwidget);
        west->setObjectName(QString::fromUtf8("west"));
        west->setGeometry(QRect(40, 440, 121, 61));
        east = new QPushButton(centralwidget);
        east->setObjectName(QString::fromUtf8("east"));
        east->setGeometry(QRect(280, 440, 121, 61));
        outputConsole = new QLabel(centralwidget);
        outputConsole->setObjectName(QString::fromUtf8("outputConsole"));
        outputConsole->setGeometry(QRect(230, 20, 181, 16));
        gameText = new QTextEdit(centralwidget);
        gameText->setObjectName(QString::fromUtf8("gameText"));
        gameText->setGeometry(QRect(10, 50, 521, 341));
        teleport = new QPushButton(centralwidget);
        teleport->setObjectName(QString::fromUtf8("teleport"));
        teleport->setGeometry(QRect(450, 440, 121, 71));
        help = new QPushButton(centralwidget);
        help->setObjectName(QString::fromUtf8("help"));
        help->setGeometry(QRect(630, 410, 131, 51));
        mapBox = new QTextEdit(centralwidget);
        mapBox->setObjectName(QString::fromUtf8("mapBox"));
        mapBox->setGeometry(QRect(550, 50, 241, 261));
        map_2 = new QPushButton(centralwidget);
        map_2->setObjectName(QString::fromUtf8("map_2"));
        map_2->setGeometry(QRect(630, 330, 131, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        north->setText(QCoreApplication::translate("MainWindow", "North", nullptr));
        south->setText(QCoreApplication::translate("MainWindow", "South", nullptr));
        west->setText(QCoreApplication::translate("MainWindow", "West", nullptr));
        east->setText(QCoreApplication::translate("MainWindow", "East", nullptr));
        outputConsole->setText(QCoreApplication::translate("MainWindow", "Welcome to Zork", nullptr));
        teleport->setText(QCoreApplication::translate("MainWindow", "Teleport", nullptr));
        help->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        map_2->setText(QCoreApplication::translate("MainWindow", "Map", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
