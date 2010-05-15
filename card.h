#ifndef CARD_H
#define CARD_H

#include <QObject>

class Card : public QObject
{
    Q_OBJECT
public:
    explicit Card(QObject *parent = 0);
/*
 children
 data
 type :- Data App
 source
 accept
 */
signals:

public slots:

};

#endif // CARD_H
