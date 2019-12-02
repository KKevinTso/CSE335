#include "fontradiobutton.h"

void FontRadioButton::myToggleChanged(bool){
    emit iChanged(this);
}
