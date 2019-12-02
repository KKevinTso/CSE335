#ifndef TABLESORT_H
#define TABLESORT_H

#include <QObject>
#include <QTableWidget>

class tablesort:public QTableWidget{
    Q_OBJECT

public:
    tablesort(QWidget* qw):QTableWidget(qw){}
    virtual ~tablesort(){}

public slots:
    void sortTable(bool);
};

#endif // TABLESORT_H
