/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSortableByWeight.h
 * Author: rasu & mattw
 *
 * Created on February 12, 2018, 12:14 PM
 */

#ifndef PETDATABASESORTABLEBYWEIGHT_H
#define PETDATABASESORTABLEBYWEIGHT_H
#include "SortableVector.h"
#include <vector>
#include "Pet.h"
using namespace std;
class PetDatabaseSortableByWeight:  public SortableVector{
protected: 
    vector<Pet*> pet_vec;
public:
    //constructors
    PetDatabaseSortableByWeight(){}
    
    PetDatabaseSortableByWeight(vector<Pet*> in_vec){
        pet_vec = in_vec;
    }
    
    PetDatabaseSortableByWeight(const PetDatabaseSortableByWeight& vec1){
        if (this != &vec1){
            pet_vec = vec1.pet_vec;
        }
    }
    
    PetDatabaseSortableByWeight& operator=(const PetDatabaseSortableByWeight& vec1){
        if (this != &vec1){
            pet_vec = vec1.pet_vec;
        }
        return *this;
    }
    
    //destructor
    virtual ~PetDatabaseSortableByWeight(){
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
        if(pet_vec[i]->GetWeight() < pet_vec[j]->GetWeight())
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
        int i=0;
        //call print of pet
        while(i< pet_vec.size()){
            getPet(i)->print();           
            i++;
        }
    }
    
    Pet* getPet(int i){
        if (i >= pet_vec.size()){
            cout << "Index exceeds size of vector; returning 0" << endl;
            return 0;
        }
        return pet_vec[i];
    }  
};
#endif /* PETDATABASESORTABLEBYWEIGHT_H */

