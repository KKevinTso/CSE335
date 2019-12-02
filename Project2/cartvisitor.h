#ifndef CARTVISITOR_H
#define CARTVISITOR_H

#include "visitor.h"
#include "pet.h"
#include <QTableWidget>
#include <iostream>
using namespace std;

class CartVisitor: public Visitor{
protected:
    float totalPrice = 0;

public:
    //constructor
    CartVisitor(){}

    //destructor
    virtual ~CartVisitor(){}

    //visitor implementations
    virtual void VisitCart(QTableWidgetItem* tableEntry){
        //add pet price to total
       // cout<< tableEntry<< endl;
        //cout<< "In VisitCart: "<<totalPrice<< endl;
        totalPrice += tableEntry->text().toDouble();
        //cout<< "After VisitCart: " <<totalPrice<< endl;
        //cout<< tableEntry->text()<<endl;
        //tableEntry->hide();
    }
    //virtual void VisitPet(){};
    //return total and reset price
    virtual float getResult() {
        float result = totalPrice;
        totalPrice = 0;
        return result;
    }
};

#endif // CARTVISITOR_H
