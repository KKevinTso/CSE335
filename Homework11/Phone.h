/* 
 * File:   Phone.h
 * Author: rasu
 *
 * Created on March 8, 2018, 6:57 PM
 */

#ifndef PHONE_H
#define PHONE_H

#include <iostream>
#include "Item.h"


using namespace std;

class Phone: public Item{
protected:
    double year;
    
public:
    //constructors
    Phone():Item(){
        year = 0;
    }
    
    Phone(string newName, int newPrice, int newYear):Item(newName, newPrice){
        year = newYear;
    }
    
    //destructor
    virtual ~Phone(){}
    
    //print
    virtual void print() const{
        cout<<"(Phone name=" << name << ", Phone price=" << price << "); ";
    }
};

#endif /* PHONE_H */

