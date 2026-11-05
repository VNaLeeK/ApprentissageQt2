#ifndef DETECTEURTEMPORISE_H
#define DETECTEURTEMPORISE_H

#include "detecteur.h"
#include <QTimer>

class DetecteurTemporise : public Detecteur
{
    Q_OBJECT

public:
    explicit DetecteurTemporise(QWidget *parent = nullptr);
    virtual ~DetecteurTemporise();

private slots:
    void onTimerTimeout();
    void on_pushButtonIntrus_clicked();

private:
    QTimer *timerTemporisation;
};

#endif // DETECTEURTEMPORISE_H
