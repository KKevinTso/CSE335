#ifndef CARTTABLE_H
#define CARTTABLE_H
#include"visitor.h"
#include <QObject>
#include <QTableWidget>
#include "databasetable.h"
#include "cart.h"
#include "cartvisitor.h"
class CartTable: public DatabaseTable{
    Q_OBJECT
public:
    CartTable(QWidget* qw):DatabaseTable(qw){}
    virtual ~CartTable(){}
    void AcceptVisitor(CartVisitor* v);
    float getTotal(){return total;};
    void setTotal(float in){total = in;}
    virtual unsigned int getSize() const;
    virtual bool smaller(int i, int j) const;
    virtual void swap(int i, int j);

public slots:
    virtual void addToTable(bool);
    virtual void checkoutTable(bool);
    void setCart(QList<QTableWidgetItem*>);
    QList<QTableWidgetItem*> getCart(){return m_cart;}

private:
    float total=0;
    QList<QTableWidgetItem*> m_cart;
};

#endif // CARTTABLE_H
