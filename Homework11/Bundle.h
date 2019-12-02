/* 
 * File:   Bundle.h
 * Author: rasu
 *
 * Created on March 8, 2018, 6:57 PM
 */

#ifndef BUNDLE_H
#define BUNDLE_H

#include <iostream>
#include <string>
#include <vector>
#include "Item.h"


using namespace std;

class Bundle: public Item{
protected:
    double discountRate;
    vector<Item*> items;
    
public:
    //constructors
    Bundle():Item(){
        discountRate = 0;
    }
    
    Bundle(string newName, double newDiscountRate):Item(newName, 0){
        discountRate = newDiscountRate;
    }
    
    //destructor
    virtual ~Bundle(){
        for(int i = 0; i < items.size(); i++)
            delete items[i];
    }
    
    //print
    virtual void print() const{
        cout<<"Bundle "<<name<<" contains: (";
        for(int i = 0; i < items.size(); i++){
            items[i]->print();
        }
        cout<<"; Bundle Price= " << price <<" ); ";
    }
    
    //add to bundle
    void addItem(Item* newItem){
        items.push_back(newItem);
        price += (discountRate*newItem->getPrice());
    }
};

#endif /* BUNDLE_H */

