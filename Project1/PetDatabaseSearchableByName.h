/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSearchableByName.h
 * Author: rasu and mattw
 *
 * Created on February 12, 2018, 12:16 PM
 */

#ifndef PETDATABASESEARCHABLEBYNAME_H
#define PETDATABASESEARCHABLEBYNAME_H
#include <vector>
#include "Pet.h"
#include "SearchableVector.h"
#include "PetDatabaseSortableByName.h"
using namespace std;
class PetDatabaseSearchableByName:  public SearchableVector{
protected: 
    PetDatabaseSortableByName *NameVec;
    string Query;
public:
    //constructors
    PetDatabaseSearchableByName(){
        Query = "";
    }
    
    PetDatabaseSearchableByName(PetDatabaseSortableByName *newNameVec){
        NameVec = newNameVec; //implement this operator
        Query = "";
    }
    
    //destructor
    virtual ~PetDatabaseSearchableByName(){
        //delete NameVec;
    }
    
    //virtual implementation
    virtual unsigned int getSize()const{
        return NameVec->getSize();
    }
    
    virtual int compareAt(int i)const{
        if (NameVec->getPet(i)->GetName() > Query)
            return 1;
        else if (NameVec->getPet(i)->GetName() == Query)
            return 0;
        else
            return -1;
    }
    
    //other functions
    void setQuery(string newQuery){
        Query = newQuery;
    }
    
    Pet* getPet(int i){
        return NameVec->getPet(i);
    }
};


#endif /* PETDATABASESEARCHABLEBYNAME_H */

