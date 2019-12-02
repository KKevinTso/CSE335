#ifndef TEXTLINEEDIT_H
#define TEXTLINEEDIT_H

#include <QLineEdit>

class TextLineEdit: public QLineEdit{
    Q_OBJECT

public:
    TextLineEdit(const QString& qstring):QLineEdit(qstring){};
    TextLineEdit(QWidget* qw):QLineEdit(qw){};

signals:
    void iChanged(QObject*); //self signal

public slots:
    void myEditingFinished(); //emit self signal
};

#endif // TEXTLINEEDIT_H
