#ifndef SIZESLIDER_H
#define SIZESLIDER_H

#include <QSlider>

class SizeSlider: public QSlider{
    Q_OBJECT

public:
    SizeSlider(QWidget* qw):QSlider(qw){
        //set slider min and max
        this->setMinimum(0);
        this->setMaximum(40);
    };

public slots:
    void setSliderPosition(QString);     //slot to change slider according to combo box
};

#endif // SIZESLIDER_H
