/* 
 * File:   TerminalNode.h
 * Author: rasu
 *
 * Created on March 9, 2018, 8:49 PM
 */

#ifndef TERMINALNODE_H
#define TERMINALNODE_H

#include "Node.h"

using namespace std;

class TerminalNode: public Node{
public:
    //constructors
    TerminalNode():Node(){
        value = -1;
    }
    
    TerminalNode(int newValue):Node(newValue){
        value = newValue;
    }
    
    //destructor
    virtual ~TerminalNode(){}
    
    //visitor hook
    virtual void Accept(Visitor* v) {
        v->VisitTerminalNode(this);
    }
    
    //getter
    int getValue(){
        return value;
    }
};

#endif /* TERMINALNODE_H */

