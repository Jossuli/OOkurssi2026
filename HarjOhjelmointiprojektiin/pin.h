#ifndef PIN_H
#define PIN_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class Pin;
}

class Pin : public QDialog
{
    Q_OBJECT

public:
    explicit Pin(QWidget *parent = nullptr);
    ~Pin();

signals:
    void sendPin(QString);
    void sendTimeOut();

private slots:
    void handleClick();
    void handleTimeout();

private:
    Ui::Pin *ui;
    QTimer *pQtimer = new QTimer(this);
};

#endif // PIN_H
