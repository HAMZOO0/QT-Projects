#include "wallppr.h"
#include "ui_wallppr.h"
#include<QPixmap>
#include"mainwindow.h"
Wallppr::Wallppr(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Wallppr)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/ijnok/Downloads/backg.jpg");// use   / forward slash
    ui->labelpic->setPixmap(pix);
}

Wallppr::~Wallppr()
{
    delete ui;
}

