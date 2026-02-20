#include "producer.h"
#include <QDebug>

producer::producer(QObject * p): QObject (p)
{
    qDebug() << "producer luotu";
    pQTimer = new QTimer(this);
    connect(pQTimer, &QTimer::timeout,
            this, &producer::handleTimeout);

    pQTimer ->start(1000);
}
producer:: ~producer()
{
    qDebug() << "producer tuhottu";
}
void producer :: handleTimeout()
{
    qDebug() << "HandleTimeout";
    qDebug() << "lahetan signaalin konsumerille";
    emit signalToConsumer();

}


