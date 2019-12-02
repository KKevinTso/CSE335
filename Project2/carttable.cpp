#include "carttable.h"
#include <QTableWidget>
#include "cartvisitor.h"
#include"cart.h"
#include <string>
#include <QString>
#include <iostream>
#include <QDebug>

using namespace std;
void CartTable:: setCart(QList<QTableWidgetItem *> in ){
    QList<QTableWidgetItem *> temp;
    for(int i=0; i!= in.size();){
        temp.push_back(in.back());
        in.pop_back();
    }
    for(int i=0;i!=temp.size();){
        m_cart.push_back(temp.back());
        temp.pop_back();
    }
};
void CartTable::checkoutTable(bool){
    this->sortItems(1);
    this->sortItems(1);
    this->sortItems(1);
    //CartVisitor cvisit;
    //AcceptVisitor(cvisit);

}
void CartTable ::addToTable(bool){
    QString test = "Implement add To Table";
    //QTableWidgetItem *test1
    int i = 1;
    this->setRowCount(1);
    this->setColumnCount(2);
    //this->setItem(0,0 ,test1);
    QList<QTableWidgetItem *> temp = m_cart;
    //cout<< temp.size()<< endl;
    while (temp.size()!=0) {

        if(i> this->rowCount()){
            this->setRowCount(i);
        }
        QTableWidgetItem *tblValue1 = new QTableWidgetItem(*temp.front());
        this->setItem(i-1,0 ,tblValue1);
        temp.pop_front();
        QTableWidgetItem *tblValue2 = new QTableWidgetItem(*temp.front());
        this->setItem(i-1,1 ,tblValue2);
        temp.pop_front();
        i++;
    }

};
void CartTable:: AcceptVisitor(CartVisitor* v){
    //cout<< "here"<< endl;
    for(int i=0 ; i<this->rowCount(); i++){
        //cout<< this->item(i,1)->text().toDouble()<< endl;
        //QTableWidgetItem *tblValue1 = new QTableWidgetItem(*this->item(i,1));
        v->VisitCart(this->item(i,1));
    }
    //cout<< v->getResult()<< endl;
    this->setTotal(v->getResult());
};

unsigned int CartTable::getSize() const{
    return this->rowCount();
}
bool CartTable::smaller(int i, int j) const{
    if(this->item(i,1) < this->item(j,1))
        return true;
    else
        return false;
}
void CartTable::swap(int i, int j){
    for(int c = 0; c < this->columnCount(); c++){
        QTableWidgetItem *temp = this->item(i,c);
        this->setItem(i,c,this->item(j,c));
        this->setItem(j,c,temp);
    }
}
