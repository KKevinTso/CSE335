/*
 * Sorting algorithm code taken from:
 * http://www.cse.msu.edu/~alexliu/courses/335Spring2018/lectures/ExampleSourceCode_C++AbstractFactorySorting.zip
 */

/* 
 * File:   BubbleSortIncreasing.h
 * Author: rasu
 *
 * Created on February 8, 2018, 5:51 PM
 */

#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H

#include "SortableVector.h"
#include "BubbleSortTemplate.h"

class BubbleSortIncreasing: public BubbleSortTemplate {
public:
    virtual bool needSwap(SortableVector* sv, int i, int j){
          return !sv->smaller(i,j);
    }
};

#endif /* BUBBLESORTINCREASING_H */

