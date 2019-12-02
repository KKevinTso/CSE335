#ifndef VISITOR_H
#define VISITOR_H

//#include "pet.h"
#include <QTableWidget>

class Bird;
class CartTable;

class Visitor{
public:
    //constructor
    Visitor(){}

    //destructor
    virtual ~Visitor(){}

    //visitors
    //virtual void VisitPet(Bird*) = 0;
    virtual void VisitCart(QTableWidgetItem*) = 0;
    //virtual float getResult();
};

#endif // VISITOR_H
