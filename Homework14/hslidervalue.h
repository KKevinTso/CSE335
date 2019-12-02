#ifndef HSLIDERVALUE_H
#define HSLIDERVALUE_H

#include <QDialog>

namespace Ui {
class hSliderValue;
}

class hSliderValue : public QDialog
{
    Q_OBJECT

public:
    explicit hSliderValue(QWidget *parent = 0);
    ~hSliderValue();

    Ui::hSliderValue* getUi() const {return ui;}

private:
    Ui::hSliderValue *ui;
};

#endif // HSLIDERVALUE_H
