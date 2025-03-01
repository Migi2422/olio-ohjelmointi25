#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->n1,&QPushButton::clicked,this,&MainWindow::n1Handler);
    connect(ui->n2,&QPushButton::clicked,this,&MainWindow::n2Handler);
    connect(ui->n3,&QPushButton::clicked,this,&MainWindow::n3Handler);
    connect(ui->n4,&QPushButton::clicked,this,&MainWindow::n4Handler);
    connect(ui->n5,&QPushButton::clicked,this,&MainWindow::n5Handler);
    connect(ui->n6,&QPushButton::clicked,this,&MainWindow::n6Handler);

    pQTimer = new QTimer(this);
    pQTimer->setInterval(1000);
    connect(pQTimer,&QTimer::timeout,this,&MainWindow::updateProgressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::n1Handler()
{
    if(currentPlayer == 1) return;
    pQTimer->stop();
    currentPlayer = 1;
    pQTimer->start(1000);
    setGameInfoText("pelaaja 1 vuoro: ",player1Time);
}

void MainWindow::n2Handler()
{
    if(currentPlayer == 2) return;
    pQTimer->stop();
    currentPlayer = 2;
    pQTimer->start(1000);
    setGameInfoText("pelaaja 2 vuoro: ",player2Time);
}

void MainWindow::n3Handler()
{
    playTime = 120;
    setGameInfoText("valmiina pelaamaan: ", playTime);
}

void MainWindow::n4Handler()
{
    playTime = 300;
    setGameInfoText("valmiina pelaamaan: ", playTime);
}

void MainWindow::n5Handler()
{
    player1Time = playTime;
    player2Time = playTime;
    currentPlayer = 1; // Aloitetaan pelaajasta 1
    pQTimer->start(1000);
    ui->b1->setMaximum(playTime);
    ui->b2->setMaximum(playTime);
    ui->b1->setValue(playTime);
    ui->b2->setValue(playTime);
    setGameInfoText("peli alkoi! pelaaja 1 vuoro:", playTime);
}

void MainWindow::n6Handler()
{
    pQTimer->stop(); // Pysäytetään peli
    player1Time = playTime;
    player2Time = playTime;
    currentPlayer = 1;

    ui->b1->setValue(playTime);
    ui->b2->setValue(playTime);
    setGameInfoText("peli nollattu! pelaajan 1 vuoro: peli ",playTime);

}


void MainWindow::updateProgressBar()
{
    if (currentPlayer == 1) {
        player1Time--;
        ui->b1->setValue(player1Time);
        if(player1Time <= 0){
            pQTimer->stop();
            setGameInfoText("pelaajan 1 aika loppui", 0);
        }
    } else {
        player2Time--;
        ui->b2->setValue(player2Time);
        if(player2Time <= 0){
            pQTimer->stop();
            setGameInfoText("pelaajan 2 aika loppui", 0);
        }
    }

}

void MainWindow::setGameInfoText(QString text, short value)
{
    ui->label->setText(text + " " + QString::number(value));
}
