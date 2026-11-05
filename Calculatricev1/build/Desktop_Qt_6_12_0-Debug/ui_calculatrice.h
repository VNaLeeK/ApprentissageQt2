/********************************************************************************
** Form generated from reading UI file 'calculatrice.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICE_H
#define UI_CALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculatrice
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditAfficher;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_Additionner;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_Soustraction;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_Multiplier;
    QPushButton *pushButton_Effacer;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Egal;
    QPushButton *pushButton_Diviser;

    void setupUi(QWidget *Calculatrice)
    {
        if (Calculatrice->objectName().isEmpty())
            Calculatrice->setObjectName("Calculatrice");
        Calculatrice->resize(800, 600);
        widget = new QWidget(Calculatrice);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(85, 60, 441, 341));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditAfficher = new QLineEdit(widget);
        lineEditAfficher->setObjectName("lineEditAfficher");
        lineEditAfficher->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEditAfficher->setReadOnly(true);

        gridLayout->addWidget(lineEditAfficher, 0, 0, 1, 4);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName("pushButton_9");

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_Additionner = new QPushButton(widget);
        pushButton_Additionner->setObjectName("pushButton_Additionner");

        gridLayout->addWidget(pushButton_Additionner, 1, 3, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_Soustraction = new QPushButton(widget);
        pushButton_Soustraction->setObjectName("pushButton_Soustraction");

        gridLayout->addWidget(pushButton_Soustraction, 2, 3, 1, 1);

        pushButton_1 = new QPushButton(widget);
        pushButton_1->setObjectName("pushButton_1");

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_Multiplier = new QPushButton(widget);
        pushButton_Multiplier->setObjectName("pushButton_Multiplier");

        gridLayout->addWidget(pushButton_Multiplier, 3, 3, 1, 1);

        pushButton_Effacer = new QPushButton(widget);
        pushButton_Effacer->setObjectName("pushButton_Effacer");

        gridLayout->addWidget(pushButton_Effacer, 4, 0, 1, 1);

        pushButton_0 = new QPushButton(widget);
        pushButton_0->setObjectName("pushButton_0");

        gridLayout->addWidget(pushButton_0, 4, 1, 1, 1);

        pushButton_Egal = new QPushButton(widget);
        pushButton_Egal->setObjectName("pushButton_Egal");

        gridLayout->addWidget(pushButton_Egal, 4, 2, 1, 1);

        pushButton_Diviser = new QPushButton(widget);
        pushButton_Diviser->setObjectName("pushButton_Diviser");

        gridLayout->addWidget(pushButton_Diviser, 4, 3, 1, 1);


        retranslateUi(Calculatrice);

        QMetaObject::connectSlotsByName(Calculatrice);
    } // setupUi

    void retranslateUi(QWidget *Calculatrice)
    {
        Calculatrice->setWindowTitle(QCoreApplication::translate("Calculatrice", "Calculatrice", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calculatrice", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Calculatrice", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Calculatrice", "9", nullptr));
        pushButton_Additionner->setText(QCoreApplication::translate("Calculatrice", "+", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculatrice", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calculatrice", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calculatrice", "6", nullptr));
        pushButton_Soustraction->setText(QCoreApplication::translate("Calculatrice", "-", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Calculatrice", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calculatrice", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calculatrice", "3", nullptr));
        pushButton_Multiplier->setText(QCoreApplication::translate("Calculatrice", "*", nullptr));
        pushButton_Effacer->setText(QCoreApplication::translate("Calculatrice", "C", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Calculatrice", "0", nullptr));
        pushButton_Egal->setText(QCoreApplication::translate("Calculatrice", "=", nullptr));
        pushButton_Diviser->setText(QCoreApplication::translate("Calculatrice", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculatrice: public Ui_Calculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
