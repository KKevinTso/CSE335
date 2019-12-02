#ifndef TEXTLABEL_H
#define TEXTLABEL_H

#include <QObject>
#include <QLabel>
#include <QFont>
#include <QMessageBox>

class TextLabel: public QLabel{
    Q_OBJECT

public:
    TextLabel(QWidget* qw):QLabel(qw){};

public slots:
    void setSize(QString);                      //slot for changing label size with combo box
    void setSizeByText(QString);                //slot for changing label size with text edit

    void modifyFontByRadioButtonArial(bool);    //slot for arial radio button
    void modifyFontByRadioButtonTimes(bool);    //slot for times new roman radio button
    void modifyFontByRadioButtonComic(bool);    //slot for comic sans ms radio button

    void modifyFontBySliderSize(int);           //slot for font size slider
};

#endif // TEXTLABEL_H
