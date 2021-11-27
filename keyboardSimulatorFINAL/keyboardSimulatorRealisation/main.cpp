#include "mainwindow.h"
#include <QIcon>
#include <QApplication>
#include <QLabel>
#include "simulator.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     MainWindow w;
     w.setWindowTitle("Keyboard Simulator");
     w.setWindowIcon(QIcon("E:/Work/QtProjects/keyboardSimulator/icon.png"));
     w.resize(800,600);
     w.show();

    return a.exec();
}
