#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    state=0;
    operand=-1;

    connect(ui->B0,&QPushButton::clicked,
            this, &MainWindow::numberClickedHandler);
    connect(ui->B1,&QPushButton::clicked,
            this, &MainWindow::numberClickedHandler);
    connect(ui->B2,&QPushButton::clicked,
            this, &MainWindow::numberClickedHandler);
    connect(ui->B3,&QPushButton::clicked,
            this, &MainWindow::numberClickedHandler);
    connect(ui->B4,&QPushButton::clicked,
            this, &MainWindow::numberClickedHandler);
    connect(ui->B5,&QPushButton::clicked,
            this, &MainWindow::numberClickedHandler);
    connect(ui->B6,&QPushButton::clicked,
            this, &MainWindow::numberClickedHandler);
    connect(ui->B7,&QPushButton::clicked,
            this, &MainWindow::numberClickedHandler);
    connect(ui->B8,&QPushButton::clicked,
            this, &MainWindow::numberClickedHandler);
    connect(ui->B9,&QPushButton::clicked,
            this, &MainWindow::numberClickedHandler);

    connect(ui->enter,&QPushButton::clicked,
            this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->reset,&QPushButton::clicked,
            this, &MainWindow::resetLineEdits);

    connect(ui->jako,&QPushButton::clicked,
            this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->kerto,&QPushButton::clicked,
            this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->miinus,&QPushButton::clicked,
            this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->plussa,&QPushButton::clicked,
            this, &MainWindow::addSubMulDivClickHandler);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast <QPushButton*>(sender());
    QString name = button -> objectName();
    qDebug() <<"Painike: " << button->text();

    if(state==0){
        ui->lineEdit->setText(ui->lineEdit->text()+button->text());
    }
    else {
        ui->lineEdit_2->setText(ui->lineEdit_2->text()+button->text());
    }
}
void MainWindow::clearAndEnterClickHandler()
{
    // otetaan numerot näytöistä
    number1 = ui->lineEdit->text();
    number2 = ui->lineEdit_2->text();

    float n1=number1.toFloat();
    float n2=number2.toFloat();
    qDebug() << "Number 1= " << n1 << "and number 2= " << n2 << Qt::endl;

    switch (operand) {
    case 0:
        result=n1+n2;
        break;
    case 1:
        result=n1-n2;
        break;
    case 2:
        result=n1*n2;
        break;
    case 3:
        result=n1/n2;
        break;
    }

    ui->lineEdit_3->setText(QString::number(result));

    // reset seuraavaa laskua varten
    number1 = "";
    number2 = "";
    state = 0;
}
void MainWindow::addSubMulDivClickHandler()
{
    //+,-,* tai / näppäin tallentaa operand muuttujaan numeron 0,1,2,3 sen mukaan mitä operaatiota oli painettu ja vaihtaa state = 1 => state = 2, jolloin numeronäppäimet ”keräävät” merkkejä number2 muuttujaan.
    QPushButton *button=qobject_cast<QPushButton*>(sender());
    if (!button)return;

    number1=ui->lineEdit->text();

    if(button==ui->plussa)
        operand=0;
    else if(button==ui->miinus)
        operand=1;
    else if (button==ui->kerto)
        operand=2;
    else if (button==ui->jako)
        operand=3;

    state=1;


}

void MainWindow::resetLineEdits()
{
    ui->lineEdit_3->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit->clear();
}
