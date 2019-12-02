#include "textlabel.h"
#include <QFont>

void TextLabel::setSize(QString qs){
    QFont font = this->font();
    if (qs == "small")
        font.setPointSize(10);
    else if (qs == "medium")
        font.setPointSize(20);
    else if (qs == "big")
        font.setPointSize(40);
    else
        font.setPointSize(12);
    this->setFont(font);
}

void TextLabel::setSizeByText(QString qs){
    setSize(qs);
}

void TextLabel::modifyFontByRadioButtonArial(bool b){
    if (!b) return;
    QFont font = this->font();
    font.setFamily("Arial");
    this->setFont(font);
}

void TextLabel::modifyFontByRadioButtonTimes(bool b){
    if (!b) return;
    QFont font = this->font();
    font.setFamily("Times New Roman");
    this->setFont(font);
}

void TextLabel::modifyFontByRadioButtonComic(bool b){
    if (!b) return;
    QFont font = this->font();
    font.setFamily("Comic Sans MS");
    this->setFont(font);
}

void TextLabel::modifyFontBySliderSize(int size){
    QFont font = this->font();
    if(size == 0)
        font.setPointSize(12);
    else
        font.setPixelSize(size);
    this->setFont(font);
}
