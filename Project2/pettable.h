#ifndef PETTABLE_H
#define PETTABLE_H

#include <QObject>
#include <QTableWidget>
#include "databasetable.h"

class PetTable: public DatabaseTable{
    Q_OBJECT
public:
    PetTable(QWidget* qw):DatabaseTable(qw){}
    virtual ~PetTable(){}
    virtual unsigned int getSize() const;
    virtual bool smaller(int i, int j) const;
    virtual void swap(int i, int j);

public slots:
    virtual void addToTable(bool);
};

#endif // PETTABLE_H
