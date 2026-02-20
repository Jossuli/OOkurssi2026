#ifndef CONSUMER_H
#define CONSUMER_H

#include <QObject>

class consumer : public QObject
{
    Q_OBJECT
public:
    consumer(QObject * parent);
    ~consumer();
signals:
    void stopProgram();

public slots:
    // normaali kutsuttava funktio
    void handleProducersignal();
private slots:
    //jos signaali tulee luokan sisältä


};

#endif // CONSUMER_H
