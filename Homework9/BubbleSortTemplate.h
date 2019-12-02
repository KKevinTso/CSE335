/* 
 * File:   BubbleSort.h
 * Author: rasu
 *
 * Created on February 8, 2018, 5:44 PM
 */

#ifndef BUBBLESORTTEMPLATE_H
#define BUBBLESORTTEMPLATE_H

class BubbleSortTemplate{
public:
    void sort(SortableVector* sortableVector){
        bool sorted = false;
        int n=sortableVector->getSize();
        while( !sorted ){
            sorted = true;
            for(int i=1; i<n; i++){
                if(needSwap(sortableVector, i-1, i)){
                    sortableVector->swap(i-1,i);
                    sorted = false;
                }
            }
            n--;
        }
    }
    
    virtual bool needSwap(SortableVector* sv, int i, int j) = 0;
};

#endif /* BUBBLESORTTEMPLATE_H */

