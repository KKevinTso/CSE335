/* 
 * File:   TerminalNode.h
 * Author: rasu
 *
 * Created on March 9, 2018, 8:49 PM
 * File based on homework 12
 */

#ifndef TERMINALNODE_H
#define TERMINALNODE_H

#include "Node.h"

using namespace std;

class TerminalNode: public Node{
public:
    //constructors
    TerminalNode():Node(){
        value = "";
    }
    
    TerminalNode(string newValue):Node(newValue){
        value = newValue;
    }
    
    //destructor
    virtual ~TerminalNode(){}
    
    //visitor hook
    virtual void Accept(Visitor* v) {
        v->VisitTerminalNode(this);
    }
    
    //getter
    string getValue(){
        return value;
    }
    
    //print
    virtual void print(){
        cout << value;
    }
};

#endif /* TERMINALNODE_H */

