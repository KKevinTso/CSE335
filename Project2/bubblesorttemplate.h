#ifndef BUBBLESORTTEMPLATE_H
#define BUBBLESORTTEMPLATE_H

#include "carttable.h"

class BubbleSortTemplate{
public:
    void sort(DatabaseTable* sortableTable){
        bool sorted = false;
        int n=sortableTable->getSize();
        while( !sorted ){
            sorted = true;
            for(int i=1; i<n; i++){
                if(needSwap(sortableTable, i-1, i)){
                    sortableTable->swap(i-1,i);
                    sorted = false;
                }
            }
            n--;
        }
    }

    virtual bool needSwap(DatabaseTable* st, int i, int j) = 0;
};

#endif /* BUBBLESORTTEMPLATE_H */
