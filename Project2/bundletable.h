#ifndef BUNDLETABLE_H
#define BUNDLETABLE_H

#include <QObject>
#include <QTableWidget>
#include "databasetable.h"

class BundleTable:public DatabaseTable{
    Q_OBJECT

public:
    BundleTable(QWidget* qw):DatabaseTable(qw){}
    virtual ~BundleTable(){}
    virtual unsigned int getSize() const;
    virtual bool smaller(int i, int j) const;
    virtual void swap(int i, int j);

public slots:
    virtual void addToTable(bool);
};

#endif // BUNDLETABLE_H
