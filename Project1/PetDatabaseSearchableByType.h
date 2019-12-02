/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSearchableByType.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:17 PM
 */

#ifndef PETDATABASESEARCHABLEBYTYPE_H
#define PETDATABASESEARCHABLEBYTYPE_H
#include "SearchableVector.h"
#include <vector>
#include "Pet.h"
using namespace std;
class PetDatabaseSearchableByType:  public SearchableVector{
protected: 
    PetDatabaseSortableByType *TypeVec;
    string Query;
public:
    //constructors
    PetDatabaseSearchableByType(){
        Query = "";
    }
    
    PetDatabaseSearchableByType(PetDatabaseSortableByType *newTypeVec){
        TypeVec = newTypeVec; //implement this operator
        Query = "";
    }
    
    //destructor
    virtual ~PetDatabaseSearchableByType(){
        //delete TypeVec;
    }
    
    //virtual implementation
    virtual unsigned int getSize()const{
        return TypeVec->getSize();
    }
    
    virtual int compareAt(int i)const{
        if (TypeVec->getPet(i)->GetType() > Query)
            return 1;
        else if (TypeVec->getPet(i)->GetType() == Query)
            return 0;
        else
            return -1;
    }
    
    //other functions
    void setQuery(string newQuery){
        Query = newQuery;
    }
    
    Pet* getPet(int i){
        return TypeVec->getPet(i);
    }
};


#endif /* PETDATABASESEARCHABLEBYTYPE_H */

