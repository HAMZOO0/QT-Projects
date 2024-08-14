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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_5;
    QLineEdit *lineEdit;
    QPlainTextEdit *plainTextEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(282, 235);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 258, 321));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBox_1 = new QCheckBox(widget);
        checkBox_1->setObjectName("checkBox_1");

        horizontalLayout->addWidget(checkBox_1);

        checkBox_4 = new QCheckBox(widget);
        checkBox_4->setObjectName("checkBox_4");

        horizontalLayout->addWidget(checkBox_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName("checkBox_2");

        horizontalLayout_2->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName("checkBox_3");

        horizontalLayout_2->addWidget(checkBox_3);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        checkBox_5 = new QCheckBox(widget);
        checkBox_5->setObjectName("checkBox_5");

        verticalLayout_2->addWidget(checkBox_5);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);

        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout_2->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Length", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
        checkBox_1->setText(QCoreApplication::translate("MainWindow", "123", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "ABC", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "@#$", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "abc", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "Custom Char-set", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
