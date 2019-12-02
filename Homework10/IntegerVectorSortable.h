/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegerVectorSortable.h
 * Author: rasu
 *
 * Created on February 9, 2018, 10:13 PM
 */

#ifndef INTEGERVECTORSORTABLE_H
#define INTEGERVECTORSORTABLE_H

#include <vector>
#include <iostream>
#include "SortableVector.h"
using namespace std;

class IntegerVectorSortable: public SortableVector {
protected:
    vector <int> intVec;
public:    
    virtual unsigned int getSize() const {
        return intVec.size();
    }
    
    virtual bool smaller(int i, int j) const {
        if(intVec[i] < intVec[j])
            return true;
        else
            return false;
    }
    
    virtual void swap(int i, int j){
        int temp = intVec[i];
        intVec[i]=intVec[j];
        intVec[j]=temp;
    }
    
    void print() const {
        for(int i=0; i<getSize(); i++)
            cout << intVec[i] << "; ";
        cout << endl;
    }
    
    int getInteger(int i) const{
        return intVec[i];
    }
    
    void insertInteger(int element) {
        intVec.push_back(element);
    }
};

#endif /* INTEGERVECTORSORTABLE_H */

