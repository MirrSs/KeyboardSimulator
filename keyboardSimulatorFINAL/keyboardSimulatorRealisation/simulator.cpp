#include "simulator.h"
#include "ui_simulator.h"

Simulator::Simulator(int level,QWidget *parent) :
    QMainWindow(parent),
    ui2(new Ui::Simulator)
{
    levelTX=level;
    InitializeText();
    ui2->setupUi(this);

    ui2->Text->setText(line[levelTX][textIterator]);
    task=line[levelTX][textIterator];
}

Simulator::~Simulator()
{
    delete ui2;
}
void Simulator::on_lineEdit_textEdited(const QString &arg1)
{
    if(arg1[stringIterator]!=line[levelTX][textIterator][stringIterator])
        mistakes++;
    stringIterator++;
    qDebug()<<arg1;
    ui2->mistakesNumLabel->setNum(mistakes);
    if(arg1.size()==line[levelTX][textIterator].size()&&mistakes==0)
    {
        qDebug()<<"Good!!!";
        ui2->label->setText("Good!");
        ui2->lineEdit->blockSignals(true);
        ui2->lineEdit->clear();
        ui2->lineEdit->blockSignals(false);
        stringIterator=0;
        if(textIterator<4)
           textIterator++;
        else
        {
            QString message="You have %1 mistakes";
            QMessageBox::information(this,"It's end!",message.arg(mistakes));
            this->close();
        }
        ui2->Text->setText(line[levelTX][textIterator]);
        task=line[levelTX][textIterator];
    }
    if(arg1.size()==line[levelTX][textIterator].size()&&mistakes!=0)
    {
        qDebug()<<"You have"<<mistakes<<"mistakes!";
        ui2->label->setText("Poor result!");
        ui2->lineEdit->blockSignals(true);
        ui2->lineEdit->clear();
        ui2->lineEdit->blockSignals(false);
        stringIterator=0;
        if(textIterator<4)
           textIterator++;
        else
        {
            QString message="You have %1 mistakes";
            QMessageBox::information(this,"It's end!",message.arg(mistakes));
            this->close();
        }
        ui2->Text->setText(line[levelTX][textIterator]);
        task=line[levelTX][textIterator];
    }
}
void Simulator::InitializeText()
{
    line[0][0]="Computer games are so interesting!";
    line[0][1]="Cycling is very fun";
    line[0][2]="What's your favorite sport?";
    line[0][3]="Learning English is a lot of fun!";
    line[0][4]="It's fun to take part in competition";
    line[1][0]="Qwertyuiop";
    line[1][1]="There are still cowboys working today in the American west";
    line[1][2]="California Gold Rush was sparked by the discovery of gold nuggets";
    line[1][3]="Gold Rush was start at Sacramento Valley";
    line[1][4]="Christmas is the biggest,and longest festival in the year";
    line[2][0]="Influx of gold into the money supply reinvigorated the American economy";
    line[2][1]="A robot is a mechanical or virtual artificial agent";
    line[2][2]="The Arduino platform is most useful for learning microelectronics";
    line[2][3]="Transistor it's an electronic component made of semiconductor material";
    line[2][4]="Semiconductor material has a crystalline structure";
}


