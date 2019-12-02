#include "sizecombobox.h"

void SizeComboBox::myCurrentIndexChanged(QString){
    emit iChanged(this);
}
