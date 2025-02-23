#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->n1,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->n2,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->n3,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->n4,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->n5,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->n6,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->n7,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->n8,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->n9,&QPushButton::clicked,this,&MainWindow::numberClickHandler);
    connect(ui->n0,QPushButton::clicked,this,&MainWindow::numberClickHandler);

    connect(ui->nappiclear,&QPushButton::clicked,this,&MainWindow::resetLineEdits);
    connect(ui->nappienter,&QPushButton::clicked,this,&MainWindow::clearAndEnterClickHandler);

    connect(ui->nappiplus,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->nappimiinus,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->nappijako,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->nappikerto,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    QString numName = button->objectName();
    qDebug()<<numName.at(1);

    if(state == 0){
        ui->naytto1->setText(ui->naytto1->text()+numName.at(1));
    }
    else{
        ui->naytto2->setText(ui->naytto2->text()+numName.at(1));
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    float n1 = ui->naytto1->text().toFloat();
    float n2 = ui->naytto2->text().toFloat();
    qDebug()<<"number 1 = "<< n1 << " and number 2 = " << n2 << Qt::endl;

    switch (operad) {
    case 0:
        result = n1+n2;
        break;
    case 1:
        result = n1-n2;
        break;
    case 2:
        result = n1/n2;
        break;
    case 3:
        result = n1*n2;
        break;
    }
    ui->naytto3->setText(QString::number(result));
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString buttonName = button->objectName();

    if (buttonName == "nappiplus"){
        operad = 0;
    } else if (buttonName == "nappimiinus"){
        operad = 1;
    } else if (buttonName == "nappijako"){
        operad = 2;
    } else if (buttonName == "nappikerto"){
        operad = 3;
    }
    state = 1;

}

void MainWindow::resetLineEdits()
{
    state=0;
    ui->naytto1->setText("");
    ui->naytto2->setText("");
    ui->naytto3->setText("");
}





