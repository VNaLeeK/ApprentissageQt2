#include "detecteurtemporise.h"
#include "ui_detecteur.h"
#include <QMessageBox>
#include <QTimer>

DetecteurTemporise::DetecteurTemporise(QWidget *parent)
    : Detecteur(parent)
{
    timerTemporisation = new QTimer(this);
    timerTemporisation->setSingleShot(true);
    connect(timerTemporisation, &QTimer::timeout, this, &DetecteurTemporise::onTimerTimeout);
    connect(ui->pushButtonIntrus, &QPushButton::clicked, this, &DetecteurTemporise::on_pushButtonIntrus_clicked);
}

DetecteurTemporise::~DetecteurTemporise()
{
    timerTemporisation->stop(); //d
}

void DetecteurTemporise::on_pushButtonIntrus_clicked()
{
    timerTemporisation->start(3000);
}

void DetecteurTemporise::onTimerTimeout()
{
    QMessageBox messageIntrus;
    messageIntrus.setText("Un intrus a été détecté");
    messageIntrus.exec();
}
