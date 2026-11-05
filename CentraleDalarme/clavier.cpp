#include "clavier.h"
#include "detecteur.h"
#include "ui_clavier.h"
#include <QMessageBox>
#include <QTimer>

Clavier::Clavier(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Clavier)
{
    ui->setupUi(this);
    connect(ui->pushButton_0,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_1,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_7,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_8,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_9,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(&timerLed,&QTimer::timeout,this,&Clavier::onTimerLed_timeout);
    leDetecteur = nullptr ;
}

Clavier::~Clavier()
{
    delete ui;
}

void Clavier::on_pushButton_Marche_clicked()
{
    // QString texteBouton = ui->pushButton_Marche->text();
    // QMessageBox messageMarche;
    // messageMarche.setText("j'ai appuyé sur la touche" + texteBouton);
    // messageMarche.exec();
    ui->checkBox_2->setCheckState(Qt::Checked);
    timerLed.start(500);
}


void Clavier::TraiterChiffre()
{
    QPushButton *pbouton = static_cast<QPushButton *>(sender());
    QString texteBouton = pbouton->text();
    QMessageBox messageChiffre;
    messageChiffre.setText("j'ai appuyé sur la touche " + texteBouton);
    messageChiffre.exec();
}


void Clavier::on_pushButton_Arret_clicked()
{
    ui->checkBox_2->checkState();
    ui->checkBox_2->setCheckState(Qt::Unchecked);
    timerLed.stop();
}

void Clavier::onTimerLed_timeout()
{
    if(ui->checkBox_2->checkState() == Qt::Checked)
        ui->checkBox_2->setCheckState(Qt::Unchecked);
    else
        ui->checkBox_2->setCheckState(Qt::Checked);
}

void Clavier::on_pushButton_2_clicked()
{
    if (leDetecteur == nullptr){
    leDetecteur = new Detecteur;
    leDetecteur->show();
    }
}


void Clavier::on_pushButton_3_clicked()
{
    if (leDetecteur != nullptr){
    leDetecteur->hide();
    delete leDetecteur ;
    leDetecteur = nullptr ;
    }
}

