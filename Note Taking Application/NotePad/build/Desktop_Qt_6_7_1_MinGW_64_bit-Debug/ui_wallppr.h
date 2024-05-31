/********************************************************************************
** Form generated from reading UI file 'wallppr.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WALLPPR_H
#define UI_WALLPPR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Wallppr
{
public:
    QLabel *labelpic;
    QPushButton *pushButton;

    void setupUi(QDialog *Wallppr)
    {
        if (Wallppr->objectName().isEmpty())
            Wallppr->setObjectName("Wallppr");
        Wallppr->resize(553, 251);
        labelpic = new QLabel(Wallppr);
        labelpic->setObjectName("labelpic");
        labelpic->setGeometry(QRect(0, 20, 541, 241));
        pushButton = new QPushButton(Wallppr);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 200, 131, 21));

        retranslateUi(Wallppr);

        QMetaObject::connectSlotsByName(Wallppr);
    } // setupUi

    void retranslateUi(QDialog *Wallppr)
    {
        Wallppr->setWindowTitle(QCoreApplication::translate("Wallppr", "Dialog", nullptr));
        labelpic->setText(QCoreApplication::translate("Wallppr", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("Wallppr", "Add New Recipe  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wallppr: public Ui_Wallppr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WALLPPR_H
