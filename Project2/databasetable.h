#ifndef DATABASETABLE_H
#define DATABASETABLE_H

#include <QObject>
#include <QTableWidget>
#include <vector>
#include "pet.h"

class DatabaseTable:public QTableWidget{
    Q_OBJECT

protected:
    vector<Pet*> petList;

public:
    DatabaseTable(QWidget* qw):QTableWidget(qw){}
    virtual ~DatabaseTable(){}
    virtual unsigned int getSize() const = 0;
    virtual bool smaller(int i, int j) const = 0;
    virtual void swap(int i, int j) = 0;

public slots:
    virtual void addToTable(bool) = 0;
};

#endif // DATABASETABLE_H
