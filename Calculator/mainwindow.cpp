#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

float first_num , sec_num, result ;

void MainWindow::on_plus_clicked()
{
    // ui give all data of window application


   first_num =  ui->firstnumber->text().toFloat(); // here we fetch the text form text box and convert into float

   sec_num =  ui->secoundnumber->text().toFloat();

   result = first_num  + sec_num;

   ui->Result->setText(QString::number(result));  // int to qstring by using  QString::number(result)

}


void MainWindow::on_multiplication_clicked()
{

    first_num =  ui->firstnumber->text().toFloat(); // here we fetch the text form text box and convert into float

    sec_num =  ui->secoundnumber->text().toFloat();

    result = first_num  * sec_num;

    ui->Result->setText(QString::number(result));  // int to qstring by using  QString::number(result)
}


void MainWindow::on_subtract_clicked()
{

    first_num =  ui->firstnumber->text().toFloat(); // here we fetch the text form text box and convert into float

    sec_num =  ui->secoundnumber->text().toFloat();

    result = first_num  -  sec_num;

    ui->Result->setText(QString::number(result));  // int to qstring by using  QString::number(result)
}


void MainWindow::on_divide_clicked()
{

    first_num =  ui->firstnumber->text().toFloat(); // here we fetch the text form text box and convert into float

    sec_num =  ui->secoundnumber->text().toFloat();

    result = first_num  / sec_num;

    ui->Result->setText(QString::number(result));  // int to qstring by using  QString::number(result)
}

