#include "widgetpremierprogramme.h"
#include "ui_widgetpremierprogramme.h"

WidgetPremierProgramme::WidgetPremierProgramme(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WidgetPremierProgramme)
{
    ui->setupUi(this);
}

WidgetPremierProgramme::~WidgetPremierProgramme()
{
    delete ui;
}
