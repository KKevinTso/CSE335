/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSearchableByWeight.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:17 PM
 */

#ifndef PETDATABASESEARCHABLEBYWEIGHT_H
#define PETDATABASESEARCHABLEBYWEIGHT_H

#include <vector>
#include "Pet.h"
#include "SearchableVector.h"
#include "PetDatabaseSortableByWeight.h"
using namespace std;
class PetDatabaseSearchableByWeight:  public SearchableVector{
protected: 
    PetDatabaseSortableByWeight *WeightVec;
    int Query;
public:
    //constructors
    PetDatabaseSearchableByWeight(){
        Query = 0;
    }
    
    PetDatabaseSearchableByWeight(PetDatabaseSortableByWeight *newWeightVec){
        WeightVec = newWeightVec; //implement this operator
        Query = 0;
    }
    
    //destructor
    virtual ~PetDatabaseSearchableByWeight(){
        //delete WeightVec;
    }
    
    //virtual implementation
    virtual unsigned int getSize()const{
        return WeightVec->getSize();
    }
    
    virtual int compareAt(int i)const{
        if (WeightVec->getPet(i)->GetWeight() > Query)
            return 1;
        else if (WeightVec->getPet(i)->GetWeight() == Query)
            return 0;
        else
            return -1;
    }
    
    //other functions
    void setQuery(double newQuery){
        Query = newQuery;
    }
    
    Pet* getPet(int i){
        return WeightVec->getPet(i);
    }
};

#endif /* PETDATABASESEARCHABLEBYWEIGHT_H */

