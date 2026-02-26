#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player1Time=0;
    player2Time=0;
    gameTime=0;

    pQTimer = new QTimer(this); //this kuollettaa QTimerin

    connect(ui->Long,&QPushButton::clicked,
            this, &MainWindow::longSecTime);

    connect(ui->short_2,&QPushButton::clicked,
            this, &MainWindow::shortTime);

    connect(ui->switch1,&QPushButton::clicked,
            this, &MainWindow::switchPlayer1);
    connect(ui->switch2,&QPushButton::clicked,
            this, &MainWindow::switchPlayer2);


    connect(pQTimer,&QTimer::timeout,
            this, &MainWindow::timeout);
    connect(ui->start,&QPushButton::clicked,
            this, &MainWindow::startGame);
    connect(ui->stop,&QPushButton::clicked,
            this, &MainWindow::endGame);

    connect (pQTimer, SIGNAL (timeout()), this, SLOT(timeout()));
    //Aina kun päästään 1000 niin mennään timeout funktioon.
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    if(currentPlayer==1)
    {
        player1Time=player1Time-1;
        ui->Aika1->setValue(player1Time);

        if(player1Time == 0){
            ui->label->setText("Player 2 WON!!");
        }
    }
    else {
        player2Time=player2Time-1;
        ui->Aika2->setValue(player2Time);

        if(player2Time == 0){
            ui->label->setText("Player 1 WON!!");
        }
    }
}

void MainWindow::switchPlayer1()
{
    qDebug() << "Player 2 vuoro";

    currentPlayer = 2;
}

void MainWindow::switchPlayer2()
{
    qDebug() << "Player 1 vuoro";
    currentPlayer = 1;
}


void MainWindow::longSecTime()
{
    gameTime = 300;

    player1Time = gameTime;
    player2Time = gameTime;
    ui->Aika1->setMaximum(300);
    ui->Aika1->setValue(300); //asetetaan arvo tappiin

    ui->Aika2->setMaximum(300);
    ui->Aika2->setValue(300);

    currentPlayer = 1;

    ui->label->setText("Ready to play");

}

void MainWindow::shortTime()
{
    gameTime = 120;

    player1Time = gameTime;
    player2Time = gameTime;
    ui->Aika1->setMaximum(120);
    ui->Aika1->setValue(120); //asetetaan arvo tappiin

    ui->Aika2->setMaximum(120);
    ui->Aika2->setValue(120);


    currentPlayer = 1;

    ui->label->setText("Ready to play");

}

void MainWindow::startGame()
{
    pQTimer->start(1000);

    ui->label->setText("Game ongoing");
}

void MainWindow::endGame()
{
    pQTimer->stop();
    ui->label->setText("Game over");
}

