#ifndef TEXTLINEEDIT_H
#define TEXTLINEEDIT_H

#include <QLineEdit>

class TextLineEdit: public QLineEdit{
    Q_OBJECT

public:
    TextLineEdit(const QString& qstring):QLineEdit(qstring){};
    TextLineEdit(QWidget* qw):QLineEdit(qw){};

public slots:
    void showSize(QString);     //slot to change text edit to match combo box
};

#endif // TEXTLINEEDIT_H
