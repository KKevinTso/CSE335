#ifndef SIZECOMBOBOX_H
#define SIZECOMBOBOX_H

#include <QComboBox>

class SizeComboBox: public QComboBox{
    Q_OBJECT

public:
    SizeComboBox(QWidget* qw):QComboBox(qw){};

signals:
    void iChanged(QObject*); //self signal

public slots:
    void myCurrentIndexChanged(QString); //emit self signal
};

#endif // SIZECOMBOBOX_H
