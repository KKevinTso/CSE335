/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortDecreasing.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:15 PM
 */

#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H

#include "SortableVector.h"
#include "BubbleSortTemplate.h"

class BubbleSortDecreasing: public BubbleSortTemplate {
public:
    virtual bool needSwap(SortableVector* sv, int i, int j){
          return sv->smaller(i,j);
    }
};

#endif /* BUBBLESORTDECREASING_H */

