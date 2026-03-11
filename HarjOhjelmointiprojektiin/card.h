#ifndef CARD_H
#define CARD_H

#include <QDialog>

namespace Ui {
class Card;
}

class Card : public QDialog
{
    Q_OBJECT

public:
    explicit Card(QWidget *parent = nullptr);
    ~Card();

signals:
    void sendCard(QString);

private slots:
    void handleClick();

private:
    Ui::Card *ui;
};

#endif // CARD_H
