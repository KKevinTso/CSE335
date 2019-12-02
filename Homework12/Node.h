/* 
 * File:   Node.h
 * Author: rasu
 *
 * Created on March 9, 2018, 8:48 PM
 */

#ifndef NODE_H
#define NODE_H

#include "Visitor.h"

class Node{
protected:
    int value;
    
public:
    //constructors
    Node(){
        value = -1;
    }
    
    Node(int newValue){
        value = newValue;
    }
    
    //destructor
    virtual ~Node(){};
    
    //visitor hook
    virtual void Accept(Visitor*) = 0;
};

#endif /* NODE_H */

