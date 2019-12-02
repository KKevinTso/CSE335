/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SearchableVector.h
 * Author: mattw
 *
 * Created on February 8, 2018, 10:04 AM
 */

#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H
#include "Pet.h"
using namespace std;
class SearchableVector{
public:
    //the virtual functions for searchable vectors
    virtual unsigned int getSize()const =0;
    virtual int compareAt(int i)const = 0;
};


#endif /* SEARCHABLEVECTOR_H */

