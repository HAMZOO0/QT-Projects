/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_File;
    QAction *actionOpen_File;
    QAction *actionSave;
    QAction *actionCopy;
    QAction *actionPast;
    QAction *actionCut_2;
    QAction *actionAbout;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(527, 315);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("address-book-new")));
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(30, 30));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName("actionNew_File");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/img/new file.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_File->setIcon(icon1);
        actionNew_File->setAutoRepeat(true);
        actionNew_File->setVisible(true);
        actionNew_File->setIconVisibleInMenu(true);
        actionNew_File->setShortcutVisibleInContextMenu(true);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName("actionOpen_File");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/img/open file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_File->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/img/COPY.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPast = new QAction(MainWindow);
        actionPast->setObjectName("actionPast");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/img/PAST.webp"), QSize(), QIcon::Normal, QIcon::Off);
        actionPast->setIcon(icon5);
        actionCut_2 = new QAction(MainWindow);
        actionCut_2->setObjectName("actionCut_2");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/img/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut_2->setIcon(icon6);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/img/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon7);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 40, 501, 241));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 141, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 527, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/img/file.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        menuFile->setIcon(icon8);
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuEdit->setIcon(icon5);
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/img/download.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        menuAbout->setIcon(icon9);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew_File);
        menuFile->addAction(actionOpen_File);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPast);
        menuEdit->addAction(actionCut_2);
        menuAbout->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_File->setText(QCoreApplication::translate("MainWindow", "New  File", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPast->setText(QCoreApplication::translate("MainWindow", "Past", nullptr));
        actionCut_2->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "  File    Edit   About ", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
