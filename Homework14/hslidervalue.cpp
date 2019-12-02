#include "hslidervalue.h"
#include "ui_hslidervalue.h"

hSliderValue::hSliderValue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hSliderValue)
{
    ui->setupUi(this);
    ui->sliderLbl->setNum(0);
}

hSliderValue::~hSliderValue()
{
    delete ui;
}
