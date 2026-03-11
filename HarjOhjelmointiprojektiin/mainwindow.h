#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "card.h"
#include "pin.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void handleClick();


public slots:
    void handleCard(QString);
    void handlePin(QString);
    void handletimeout();

private:
    Ui::MainWindow *ui;
    Card * pCard=nullptr;
    Pin * pPin=nullptr;
    int cardNumber;
    int pinNumber;
    int correctCardNumber=1234;
    int correctPinNumber=1111;
    int attempsLeft=3;
};
#endif // MAINWINDOW_H
