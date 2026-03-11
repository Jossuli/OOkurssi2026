#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "card.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked,
            this, &MainWindow::handleClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick()
{
    qDebug()<< "Mainwindow click handler";
    //luodaan RFID kortin lukija oli ja kytketään sen signaali. Laitetaan tämän luokan ui piiloon ja avataa RFID krtin lukijan id
    if(pCard==nullptr)
    {
        pCard=new Card(this);
        connect(pCard,&Card::sendCard,
                this,&MainWindow::handleCard);
        this->hide();
        pCard->show();
    }
}

void MainWindow::handleCard(QString s)
{
    qDebug()<< "Mainwindow handleCard";
    cardNumber=s.toUInt();
    ui->currentCard->setText(s);

    if(pPin==nullptr)
    {
        pPin=new Pin(this);
        connect(pPin,&Pin::sendPin,
                this,&MainWindow::handlePin);
        connect(pPin,&Pin::sendTimeOut,
                this, &::MainWindow::handletimeout);
        pCard->hide();
        pPin->show();
    }
    else
    {
        pCard->hide();
        pPin->show();
    }

}

void MainWindow::handlePin(QString s)
{
    qDebug()<< "Mainwindow HandlePin handlerissa";
    pinNumber= s.toUInt();
    ui->currenPint->setText(s);
    this->show();
    //pPin->hide();
    delete pPin;
    pPin=nullptr;
}

void MainWindow::handletimeout()
{
    qDebug()<< "Mainwindow Handle timeout";
    delete pPin;
    pPin=nullptr;
    pCard->show();
}
