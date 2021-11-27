#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "simulator.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow;}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_exitButton_clicked();

    void on_aButton_clicked();

    void on_bButton_clicked();

    void on_cButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Simulator *sim;
};
#endif // MAINWINDOW_H
