#include "calculatrice.h"
#include "ui_calculatrice.h"

Calculatrice::Calculatrice(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calculatrice)
{
    ui->setupUi(this);
}

Calculatrice::~Calculatrice()
{
    delete ui;
}

void Calculatrice::on_pushButton_0_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "0");
}

void Calculatrice::on_pushButton_1_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "1");
}

void Calculatrice::on_pushButton_2_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "2");
}

void Calculatrice::on_pushButton_3_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "3");
}

void Calculatrice::on_pushButton_4_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "4");
}

void Calculatrice::on_pushButton_5_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "5");
}

void Calculatrice::on_pushButton_6_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "6");
}

void Calculatrice::on_pushButton_7_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "7");
}

void Calculatrice::on_pushButton_8_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "8");
}

void Calculatrice::on_pushButton_9_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "9");
}

void Calculatrice::on_pushButton_Additionner_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "+");
}

void Calculatrice::on_pushButton_Soustraction_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "-");
}

void Calculatrice::on_pushButton_Multiplier_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "*");
}

void Calculatrice::on_pushButton_Diviser_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->setText(expression + "/");
}


void Calculatrice::on_pushButton_Egal_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    QJSEngine engine;
    QJSValue resultat = engine.evaluate(expression);
    ui->lineEditAfficher->setText(resultat.toString());
}


void Calculatrice::on_pushButton_Effacer_clicked()
{
    QString expression = ui->lineEditAfficher->text();
    ui->lineEditAfficher->clear();
}
