/* 
 * File:   Object.h
 * Author: rasu
 *
 * Created on March 8, 2018, 8:07 PM
 */

#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item{
protected:
    string name;
    int price;
    
public:
    //constructors
    Item(){
        name = "n/a";
        price = 0;
    }
    
    Item(string newName, int newPrice){
        name = newName;
        price = newPrice;
    }
    
    //destructor
    virtual ~Item(){};
    
    //getters
    virtual string getName() const{
        return name;
    }
    
    virtual int getPrice() const{
        return price;
    }
    
    //print
    virtual void print() const=0;
};

#endif /* OBJECT_H */

