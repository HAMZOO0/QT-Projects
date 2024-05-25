#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Add_btn_clicked();


    void on_remove_btn_4_clicked();

    void on_remove_all_btn_3_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
