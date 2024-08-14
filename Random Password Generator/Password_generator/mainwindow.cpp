#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<string>

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

void MainWindow::on_pushButton_clicked()
{
    std::string charset("") , output("");

    if(ui->checkBox_5->isChecked())
    {
        charset = ui->lineEdit->text().toStdString();


    }

    else{

        // here i use if not if else bcz we choose  muti options
        if(ui->checkBox_4->isChecked())
        {
            charset += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        }


         if(ui->checkBox_3->isChecked())
        {
            charset += "abcdefghijklmnopqrstuvwxyz";
        }

          if(ui->checkBox_2->isChecked())
        {
            charset += "!@#$~$%^&*()_+}{|?><";
        }

          if(ui->checkBox_1->isChecked())
        {
            charset += "1234567890";
        }

        }

    // here we write a logic to generate password
    if(charset!="")
        {
            // our loop start form 0 to spin box value
            for(int  i = 0 ; i < ui->spinBox->value() ; i++)
        {
                output +=charset.at(rand() %(int)charset.length());
        }

            ui->plainTextEdit->appendPlainText(output.c_str());
        }

}

