/*
 * Taken from:
 * http://www.cse.msu.edu/~alexliu/courses/335Spring2018/lectures/ExampleSourceCode_C++AbstractFactorySorting.zip
 */

/* 
 * File:   SortableVector.h
 * Author: rasu
 *
 * Created on February 8, 2018, 5:26 PM
 */

#ifndef SORTABLEVECTOR_H
#define SORTABLEVECTOR_H

class SortableVector{
public:
    virtual unsigned int getSize() const = 0;
    virtual bool smaller(int i, int j) const = 0;
    virtual void swap(int i, int j) = 0;
};

#endif /* SORTABLEVECTOR_H */

