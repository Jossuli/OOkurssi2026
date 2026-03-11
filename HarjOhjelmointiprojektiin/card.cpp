#include "card.h"
#include "ui_card.h"
#include <QDebug>

Card::Card(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Card)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,
            this, &Card::handleClick);
}

Card::~Card()
{
    delete ui;
}

void Card::handleClick()
{
    qDebug() << "Card luokan handler click";
    // luetaan Qstring lineEditististä, läheteään qstring signaalin mukana
    QString luettu = ui->lineEdit->text();
    emit sendCard(luettu);
}
