#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    counter=0;

    connect(ui->count,&QPushButton::clicked,
            this, &MainWindow::kayttoliittyma);
    connect(ui->Reset,&QPushButton::clicked,
            this, &MainWindow::reset);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::kayttoliittyma()
{

    counter++;
    ui->lineEdit->setText(QString::number(counter)); // näytetään uusi numero

}

void MainWindow::reset()
{
    ui->lineEdit->setText("");
    counter=0;
}
