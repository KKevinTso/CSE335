/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSearchableByPrice.h
 * Author: rasu 
 *
 * Created on February 12, 2018, 12:16 PM
 */

#ifndef PETDATABASESEARCHABLEBYPRICE_H
#define PETDATABASESEARCHABLEBYPRICE_H
#include "SearchableVector.h"
#include <vector>
#include "Pet.h"
using namespace std;
class PetDatabaseSearchableByPrice:  public SearchableVector{
protected: 
    PetDatabaseSortableByPrice *PriceVec;
    double Query;
public:
    //constructors
    PetDatabaseSearchableByPrice(){
        Query = 0;
    }
    
    PetDatabaseSearchableByPrice(PetDatabaseSortableByPrice *newPriceVec){
        PriceVec = newPriceVec; //implement this operator
        Query = 0;
    }
    
    //destructor
    virtual ~PetDatabaseSearchableByPrice(){
        //delete PriceVec;
    }
    
    //virtual implementation
    virtual unsigned int getSize()const{
        return PriceVec->getSize();
    }
    
    virtual int compareAt(int i)const{
        if (PriceVec->getPet(i)->GetPrice() > Query)
            return 1;
        else if (PriceVec->getPet(i)->GetPrice() == Query)
            return 0;
        else
            return -1;
    }
    
    //other functions
    void setQuery(double newQuery){
        Query = newQuery;
    }
    
    Pet* getPet(int i){
        return PriceVec->getPet(i);
    }
};


#endif /* PETDATABASESEARCHABLEBYPRICE_H */

