#ifndef PETVISITOR_H
#define PETVISITOR_H

#include "visitor.h"
#include "pet.h"
#include <iostream>
using namespace std;

class PetVisitor: public Visitor{
protected:
    float totalPrice = 0;

public:
    //constructor
    PetVisitor(){};

    //destructor
    virtual ~PetVisitor(){};

    //visitor implementations
    virtual void VisitPet(Bird* birdPet){
        cout<<birdPet<<endl;
        //add pet price to total
        //totalPrice += birdPet->GetPrice();
    }
    //virtual void VisitCart(){};
    //return total and reset price
    float getResult() {
        float result = totalPrice;
        totalPrice = 0;
        return result;
    }
};

#endif // PETVISITOR_H
