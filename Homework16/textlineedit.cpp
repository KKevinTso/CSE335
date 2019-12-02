#include "textlineedit.h"

void TextLineEdit::myEditingFinished(){
    emit iChanged(this);
}
