/* 
 * File:   Node.h
 * Author: rasu
 *
 * Created on March 9, 2018, 8:48 PM
 * File from homework 12
 */

#ifndef NODE_H
#define NODE_H

#include <string>
#include "Visitor.h"

using namespace std;

class Node{
protected:
    string value;
    
public:
    //constructors
    Node(){
        value = "";
    }
    
    Node(string newValue){
        value = newValue;
    }
    
    //destructor
    virtual ~Node(){};
    
    //visitor hook
    virtual void Accept(Visitor*) = 0;
    
    //print
    virtual void print() = 0;
};

#endif /* NODE_H */

