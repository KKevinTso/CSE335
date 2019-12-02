/* 
 * File:   SearchableVector.h
 * Author: rasu
 *
 * Created on February 6, 2018, 1:49 PM
 */

#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H

class SearchableVector{
public:
    virtual unsigned int getSize() const = 0; //returns vector size
    virtual int compareAt(int i) = 0; //checks at given index and returns based on larger/smaller/equals
};

#endif /* SEARCHABLEVECTOR_H */

