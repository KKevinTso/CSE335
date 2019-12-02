#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H

#include "carttable.h"
#include "BubbleSortTemplate.h"

class BubbleSortIncreasing: public BubbleSortTemplate {
public:
    virtual bool needSwap(DatabaseTable* st, int i, int j){
          return !st->smaller(i,j);
    }
};

#endif /* BUBBLESORTINCREASING_H */

