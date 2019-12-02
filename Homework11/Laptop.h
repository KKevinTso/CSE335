/* 
 * File:   Laptop.h
 * Author: rasu
 *
 * Created on March 8, 2018, 6:57 PM
 */

#ifndef LAPTOP_H
#define LAPTOP_H

#include <iostream>
#include <string>
#include "Item.h"


using namespace std;

class Laptop: public Item{
protected:
    string model;
    
public:
    //constructors
    Laptop():Item(){
        model = "";
    }
    
    Laptop(string newName, int newPrice, string newModel):Item(newName, newPrice){
        model = newModel;
    }
    
    //destructor
    virtual ~Laptop(){}
    
    //print
    virtual void print() const{
        cout<<"(Laptop name=" << name << ", Laptop price=" << price << "); ";
    }
};

#endif /* LAPTOP_H */

