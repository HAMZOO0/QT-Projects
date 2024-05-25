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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *text;
    QPushButton *Add_btn;
    QListWidget *listWidget;
    QPushButton *remove_all_btn_3;
    QPushButton *remove_btn_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(512, 445);
        QFont font;
        font.setPointSize(15);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 10, 241, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ravie")});
        font1.setPointSize(20);
        label->setFont(font1);
        text = new QLineEdit(centralwidget);
        text->setObjectName("text");
        text->setGeometry(QRect(20, 50, 361, 31));
        QFont font2;
        font2.setPointSize(10);
        text->setFont(font2);
        Add_btn = new QPushButton(centralwidget);
        Add_btn->setObjectName("Add_btn");
        Add_btn->setGeometry(QRect(400, 50, 41, 31));
        QFont font3;
        font3.setPointSize(12);
        Add_btn->setFont(font3);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 90, 421, 301));
        listWidget->setFont(font2);
        remove_all_btn_3 = new QPushButton(centralwidget);
        remove_all_btn_3->setObjectName("remove_all_btn_3");
        remove_all_btn_3->setGeometry(QRect(340, 410, 101, 21));
        QFont font4;
        font4.setPointSize(9);
        remove_all_btn_3->setFont(font4);
        remove_btn_4 = new QPushButton(centralwidget);
        remove_btn_4->setObjectName("remove_btn_4");
        remove_btn_4->setGeometry(QRect(230, 410, 101, 21));
        remove_btn_4->setFont(font4);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TO DO LIST  ", nullptr));
        Add_btn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        remove_all_btn_3->setText(QCoreApplication::translate("MainWindow", "Remove  All", nullptr));
        remove_btn_4->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
