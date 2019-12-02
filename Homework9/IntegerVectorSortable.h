/*
 * Taken from:
 * http://www.cse.msu.edu/~alexliu/courses/335Spring2018/lectures/ExampleSourceCode_C++AbstractFactorySorting.zip
 */

/* 
 * File:   IntegerVectorSortable.h
 * Author: rasu
 *
 * Created on February 8, 2018, 3:00 PM
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
            cout << intVec[i] << "; " << endl;
    }
    
    int getInteger(int i) const{
        return intVec[i];
    }
    
    void insertInteger(int element) {
        intVec.push_back(element);
    }
};

#endif /* INTEGERVECTORSORTABLE_H */

