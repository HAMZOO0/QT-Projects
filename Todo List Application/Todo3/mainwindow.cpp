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

void MainWindow::on_Add_btn_clicked()
{
    // Declare a pointer to a new QListWidgetItem and initialize it with text from ui->text and set its parent to ui->listWidget
    QListWidgetItem* item = new QListWidgetItem(
        ui->text->text(),    // Get the text from the text input widget
        ui->listWidget       // Set the parent widget to be the list widget
        );

    ui->listWidget->addItem(item);

    item->setFlags(item->flags()|Qt::ItemIsEditable); // here we edit a list


    ui->text->clear(); // after adding task txt box will clear

     ui->text->setFocus(); // after adding task txt box will stay foucs


    /*
 * new QListWidgetItem(ui->text->text(), ui->listWidget): This calls the QListWidgetItem constructor
 * with two arguments:
ui->text->text(): The text for the new list item, obtained from the text widget.
ui->listWidget: The parent widget, which is the QListWidget where the new item will be added.
*/
}



// QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
// delete item ;


// ui->listWidget->clear();




void MainWindow::on_remove_btn_4_clicked()
{    QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete item ;

}


void MainWindow::on_remove_all_btn_3_clicked()
{
    ui->listWidget->clear();

}

