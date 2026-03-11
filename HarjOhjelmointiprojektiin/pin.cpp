#include "pin.h"
#include "ui_pin.h"
#include <QDebug>

Pin::Pin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Pin)
{
    ui->setupUi(this);



    connect(ui->pushButton, &QPushButton::clicked,
            this, &Pin::handleClick);

    connect(pQtimer,&QTimer::timeout,
            this, &Pin::handleTimeout);
    pQtimer->start(10000);
}

Pin::~Pin()
{
    delete ui;
}

void Pin::handleClick()
{
    qDebug()<<"Pin luokan handle Click";
    //pQtimer->stop();
    //qDebug()<<"Suoritetaan stop kasky";
    emit sendPin(ui->lineEdit->text());
}

void Pin::handleTimeout()
{
    qDebug()<<"Timeout handler";
    emit sendTimeOut();

}
