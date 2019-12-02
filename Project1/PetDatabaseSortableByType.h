/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSortableByType.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:15 PM
 */

#ifndef PETDATABASESORTABLEBYTYPE_H
#define PETDATABASESORTABLEBYTYPE_H
#include "SortableVector.h"
#include <vector>
#include "Pet.h"
using namespace std;
class PetDatabaseSortableByType:  public SortableVector{
protected: 
    vector<Pet*> pet_vec;
public:
    //constructors
    PetDatabaseSortableByType(){}
    
    PetDatabaseSortableByType(vector<Pet*> in_vec){
        pet_vec = in_vec;
    }
    
    PetDatabaseSortableByType(const PetDatabaseSortableByType& vec1){
        if (this != &vec1){
            pet_vec = vec1.pet_vec;
        }
    }
    
    PetDatabaseSortableByType& operator=(const PetDatabaseSortableByType& vec1){
        if (this != &vec1){
            pet_vec = vec1.pet_vec;
        }
        return *this;
    }
    
    //destructor
    virtual ~PetDatabaseSortableByType(){
        /*
        for (int i = 0; i < pet_vec.size(); i++){
            delete pet_vec[i];
        }
        pet_vec.clear();
        */
    }
    
    //virtual function implementation
    virtual unsigned int getSize() const {
        return pet_vec.size();
    }
    
    virtual bool smaller(int i, int j) const{
        if(pet_vec[i]->GetType() < pet_vec[j]->GetType())
            return true;
        else
            return false;
    }
    
    virtual void swap(int i, int j){
        Pet *temp = pet_vec[i];
        pet_vec[i]=pet_vec[j];
        pet_vec[j]=temp;
    }
    
    virtual void DisplayRecords() {
        //call print of pet
        int i =0;
        while(i< pet_vec.size()){
            getPet(i)->print();           
            i++;
        }
    
    }
    
    Pet* getPet(int i) const{
        if (i >= pet_vec.size()){
            cout << "Index exceeds size of vector; returning 0" << endl;
            return 0;
        }
        return pet_vec[i];
    }
};


#endif /* PETDATABASESORTABLEBYTYPE_H */

