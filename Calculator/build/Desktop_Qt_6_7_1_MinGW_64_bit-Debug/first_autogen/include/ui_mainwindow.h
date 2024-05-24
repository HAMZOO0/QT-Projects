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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *firstnumber;
    QPushButton *plus;
    QPushButton *subtract;
    QPushButton *multiplication;
    QPushButton *divide;
    QLineEdit *secoundnumber;
    QLabel *label_3;
    QLineEdit *Result;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(504, 281);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 81, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 20, 71, 21));
        firstnumber = new QLineEdit(centralwidget);
        firstnumber->setObjectName("firstnumber");
        firstnumber->setGeometry(QRect(20, 50, 131, 31));
        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");
        plus->setGeometry(QRect(80, 100, 61, 31));
        subtract = new QPushButton(centralwidget);
        subtract->setObjectName("subtract");
        subtract->setGeometry(QRect(80, 150, 61, 31));
        multiplication = new QPushButton(centralwidget);
        multiplication->setObjectName("multiplication");
        multiplication->setGeometry(QRect(230, 100, 61, 31));
        divide = new QPushButton(centralwidget);
        divide->setObjectName("divide");
        divide->setGeometry(QRect(230, 150, 61, 31));
        secoundnumber = new QLineEdit(centralwidget);
        secoundnumber->setObjectName("secoundnumber");
        secoundnumber->setGeometry(QRect(240, 50, 131, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 200, 81, 31));
        Result = new QLineEdit(centralwidget);
        Result->setObjectName("Result");
        Result->setGeometry(QRect(130, 230, 131, 31));
        Result->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "First Number", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Secound Number", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        multiplication->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
