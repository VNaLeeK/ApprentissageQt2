#ifndef CLAVIER_H
#define CLAVIER_H

#include <QMainWindow>
#include <QTimer>
#include "detecteur.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Clavier;
}
QT_END_NAMESPACE

class Clavier : public QMainWindow
{
    Q_OBJECT

public:
    explicit Clavier(QWidget *parent = nullptr);
    ~Clavier() override;

private slots:
    void on_pushButton_Marche_clicked();
    void TraiterChiffre();
    void on_pushButton_Arret_clicked();
    void onTimerLed_timeout();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Clavier *ui;
    QTimer timerLed;
    Detecteur * leDetecteur;

};
#endif // CLAVIER_H
