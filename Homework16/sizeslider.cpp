#include "sizeslider.h"

void SizeSlider::myPositionChanged(int){
    emit iChanged(this);
}
