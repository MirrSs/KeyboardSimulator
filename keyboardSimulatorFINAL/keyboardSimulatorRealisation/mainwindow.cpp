#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //sim=new Simulator(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete sim;
}


void MainWindow::on_exitButton_clicked()
{
  this->close();
}

void MainWindow::on_aButton_clicked()
{
    this->hide();
    int level=0;
    sim=new Simulator(level,this);

    sim->setWindowTitle("Keyboard Simulator");
    sim->show();
}

void MainWindow::on_bButton_clicked()
{
    this->hide();
    int level=1;
    sim=new Simulator(level,this);

    sim->setWindowTitle("Keyboard Simulator");
    sim->show();
}

void MainWindow::on_cButton_clicked()
{
    this->hide();
    int level=2;
    sim=new Simulator(level,this);

    sim->setWindowTitle("Keyboard Simulator");
    sim->show();

}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Help","Keyboard simulator is used for training blind input.To get started,select your level of English,and just enter the specified text");
}
