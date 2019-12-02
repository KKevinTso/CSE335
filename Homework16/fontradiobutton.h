#ifndef FONTRADIOBUTTON_H
#define FONTRADIOBUTTON_H

#include <QRadioButton>

class FontRadioButton: public QRadioButton{
    Q_OBJECT

public:
    FontRadioButton(QWidget* qw):QRadioButton(qw){};

signals:
    void iChanged(QObject*); //self signal

public slots:
    void myToggleChanged(bool); //emit self signal
};

#endif // FONTRADIOBUTTON_H
