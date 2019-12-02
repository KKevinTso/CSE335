#include "sizeslider.h"

void SizeSlider::setSliderPosition(QString qs){
    if (qs == "small")
        this->setValue(10);
    else if (qs == "medium")
        this->setValue(20);
    else if (qs == "big")
        this->setValue(40);
    else
        this->setValue(12);
}
