/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegerVectorSortableSearchable.h
 * Author: rasu
 *
 * Created on February 9, 2018, 10:08 PM
 */

#ifndef INTEGERVECTORSORTABLESEARCHABLE_H
#define INTEGERVECTORSORTABLESEARCHABLE_H

#include <vector>
#include "IntegerVectorSortable.h"
#include "SearchableVector.h"
using namespace std;

class IntegerVectorSortableSearchable: public IntegerVectorSortable, public SearchableVector{
    //IntegerVectorSortable *SortVec;
    int query;
public:
    virtual unsigned int getSize() const{
        return intVec.size();
    }
    
    virtual int compareAt(int i){
        if (intVec[i] == query)
            return 0;
        else if (intVec[i] > query)
            return 1;
        else
            return -1;
    }
    
    void setQuery(int i){
        query = i;
    }
};

#endif /* INTEGERVECTORSORTABLESEARCHABLE_H */

