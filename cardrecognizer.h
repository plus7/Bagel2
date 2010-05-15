#ifndef CARDRECOGNIZER_H
#define CARDRECOGNIZER_H

#include <QObject>

class CardRecognizer : public QObject
{
    Q_OBJECT
public:
    explicit CardRecognizer(QObject *parent = 0);

signals:

public slots:

};

#endif // CARDRECOGNIZER_H
