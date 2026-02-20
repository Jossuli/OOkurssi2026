#ifndef PRODUCER_H
#define PRODUCER_H
#include <QObject>
#include <QTimer>

class producer : public QObject
{
    Q_OBJECT
public:
    producer(QObject * parent =nullptr);
    ~producer();
signals:
    void signalToConsumer();
private slots:
    void handleTimeout();
private:
    QTimer * pQTimer;
};

#endif // PRODUCER_H
