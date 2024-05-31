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
    void on_actionNew_File_triggered();

    void on_actionOpen_File_triggered();

    void on_actionSave_triggered();

    void on_actionCopy_triggered();

    void on_actionPast_triggered();

    void on_actionCut_2_triggered();

    void on_actionAbout_triggered();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    QString File_path;
};
#endif // MAINWINDOW_H
