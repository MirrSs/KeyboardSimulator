#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class Simulator;
}

class Simulator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Simulator(int level,QWidget *parent = nullptr);
    ~Simulator();
    void Mistakes(QString toCompare);
    void InitializeText();
    void MistakesE();
    int levelTX;

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_textEdited(const QString &arg1);

private:
    QString task;
    Ui::Simulator *ui2;
    QString input;
    int mistakes=0;
    QString line[3][5];
    int stringIterator=0;
    int textIterator=0;
};

#endif // SIMULATOR_H
