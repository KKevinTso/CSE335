#ifndef SIZESLIDER_H
#define SIZESLIDER_H

#include <QSlider>

class SizeSlider: public QSlider{
    Q_OBJECT

public:
    SizeSlider(QWidget* qw):QSlider(qw){};

signals:
    void iChanged(QObject*); //self signal

public slots:
    void myPositionChanged(int); //emit self signal
};

#endif // SIZESLIDER_H
