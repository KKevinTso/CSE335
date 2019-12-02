/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortIncreasing.h
 * Author: rasu
 *
 * Created on February 11, 2018, 12:45 PM
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

