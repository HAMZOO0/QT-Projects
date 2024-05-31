#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // full screen editer
    //this->setCentralWidget(ui->textEdit);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_File_triggered()
{
    File_path = ""; // reet file path

    ui->textEdit->setText("");

}



void MainWindow::on_actionOpen_File_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,"Open Recipy") ;

    QFile file(filename);

    // if file no open
    if(!file.open(QFile::ReadOnly |QFile::Text ))
    {
        QMessageBox :: warning(this,"---","File Not Open ");
        return ;
    }

    // if file open
    QTextStream in(&file);
    // read all data from file
    QString text  = in.readAll();
    // add data into texteditor
    ui->textEdit->setText(text);

    file.close();
}


void MainWindow::on_actionSave_triggered()
{

    QString filename = QFileDialog::getSaveFileName(this,"Open Recipy") ;

    QFile file(filename);

    // if file no open
    if(!file.open(QFile::WriteOnly |QFile::Text ))
    {
        QMessageBox :: warning(this,"---","File Not Open ");
        return ;
    }

    // if file open
    QTextStream out(&file);

    // here we copy the texteditor text and past in text varbale .
    QString text  = ui->textEdit->toPlainText();
    // add data into texteditor

    out<<text ;

    file.flush();
    file.close();
}


void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();

}


void MainWindow::on_actionPast_triggered()
{
    ui->textEdit->paste();

}


void MainWindow::on_actionCut_2_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionAbout_triggered()
{
    QString aboutSelection = "Recipe Organizer Software by Hamza Sajid\n"
                             "Created on 31st May 2024\n"
                             "NUST University\n"
                             "\n"
                             "Description:\n"
                             "The Recipe Organizer is a desktop application designed to help users store and manage their favorite recipes with ease. "
                             "Featuring an intuitive interface, it allows users to:\n"
                             "   - Add new recipes\n"
                             "   - Categorize recipes by cuisine or meal type\n"
                             "   - Search for specific recipes\n"
                             "   - Include ingredient lists\n"
                             "   - Provide step-by-step instructions\n"
                             "   - Add personal notes or ratings\n"
                             "\n"
                             "This application functions similarly to a notepad, providing a simple and effective way to organize culinary creations.";

    QMessageBox::about(this,"About Recipe Organizer",aboutSelection) ;

}

