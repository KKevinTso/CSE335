/* 
 * File:   IntegerVectorSearchable.h
 * Author: rasu
 *
 * Created on February 6, 2018, 3:48 PM
 */

#ifndef INTEGERVECTORSEARCHABLE_H
#define INTEGERVECTORSEARCHABLE_H

#include <vector>
#include <iostream>
#include "SearchableVector.h"

using namespace std;

class IntegerVectorSearchable: public SearchableVector{
protected:
    vector <int> integerVector;
    int query;
public:
    virtual unsigned int getSize() const{
        return integerVector.size();
    }
    
    virtual int compareAt(int i){
        if (integerVector[i] == query)
            return 0;
        else if (integerVector[i] > query)
            return 1;
        else
            return -1;
    }
    
    void print() const {
        for(int i = 0; i < integerVector.size(); i++)
            cout << integerVector[i] << "; ";
        cout << endl;
    }
    
    void setQuery(int i){
        query = i;
    }

    void insertInteger(int i) {
        integerVector.push_back(i);
    }
};

#endif /* INTEGERVECTORSEARCHABLE_H */

