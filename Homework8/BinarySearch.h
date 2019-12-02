/* 
 * File:   BinarySearch.h
 * Author: rasu
 *
 * Created on February 6, 2018, 3:20 PM
 */

#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include <iostream>
#include "SearchableVector.h"
using namespace std;

class BinarySearch{
public:
    //from http://www.algolist.net/Algorithms/Binary_search
    int search(SearchableVector* vector) {
        int left = 0;
        int right = vector->getSize() - 1;
        while (left <= right) {
            int middle = (left + right) / 2;
            if (vector->compareAt(middle) == 0)
                return middle;
            else if (vector->compareAt(middle) == 1)
                right = middle - 1;
            else
                left = middle + 1;
        }
        return -1;
    }
};

#endif /* BINARYSEARCH_H */

