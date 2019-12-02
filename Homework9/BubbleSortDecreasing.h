/*
 * Sorting algorithm code taken from:
 * http://www.cse.msu.edu/~alexliu/courses/335Spring2018/lectures/ExampleSourceCode_C++AbstractFactorySorting.zip
 */

/* 
 * File:   BubbleSortDecreasing.h
 * Author: rasu
 *
 * Created on February 8, 2018, 5:52 PM
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

