#ifndef WIDGETPREMIERPROGRAMME_H
#define WIDGETPREMIERPROGRAMME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class WidgetPremierProgramme;
}
QT_END_NAMESPACE

class WidgetPremierProgramme : public QMainWindow
{
    Q_OBJECT

public:
    explicit WidgetPremierProgramme(QWidget *parent = nullptr);
    ~WidgetPremierProgramme() override;

private:
    Ui::WidgetPremierProgramme *ui;
};
#endif // WIDGETPREMIERPROGRAMME_H
