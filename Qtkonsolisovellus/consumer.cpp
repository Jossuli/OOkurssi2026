#include "consumer.h"
#include <QDebug>

consumer::consumer(QObject * p) :QObject(p)
{
    //QObject konsturktio pitää kutsua tätä ennen
    qDebug()<<"consumer construktion";
}

consumer::~consumer()
{
    qDebug() << "consumer tuhoaja";
}
void consumer::handleProducersignal()
{
    qDebug() << "vastaanotin producer signaalin";
    emit stopProgram();
}
