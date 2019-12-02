/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SearchableVector.h
 * Author: rasu
 *
 * Created on February 9, 2018, 10:13 PM
 */

#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H

class SearchableVector{
public:
    virtual unsigned int getSize() const = 0; //returns vector size
    virtual int compareAt(int i) = 0; //checks at given index and returns based on larger/smaller/equals
};

#endif /* SEARCHABLEVECTOR_H */

