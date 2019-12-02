/* 
 * File:   NonStackBasedSumVisitor.h
 * Author: rasu
 *
 * Created on March 9, 2018, 8:53 PM
 */

#ifndef NONSTACKBASEDSUMVISITOR_H
#define NONSTACKBASEDSUMVISITOR_H

#include "Visitor.h"
#include "Node.h"

class NonStackBasedSumVisitor: public Visitor{
protected:
    unsigned int nodeSumInt;
    
public:
    //constructor 
    NonStackBasedSumVisitor(){
        nodeSumInt = 0;
    };
    
    //destructor
    virtual ~NonStackBasedSumVisitor(){};

    //visitor implementations
    virtual void VisitTerminalNode(TerminalNode* terminalNode){
        nodeSumInt += terminalNode->getValue();
    }
    
    virtual void VisitNonTerminalNode(NonTerminalNode* nonTerminalNode){
        nodeSumInt += nonTerminalNode->getValue();
        
        //for every child, add its value to nodeSumInt.
        for(int i = 0; i < nonTerminalNode->getChildrenSize(); i++){
            nonTerminalNode->getChild(i)->Accept(this);
        }
    };
        
    //return total and reset sum
    double getResult() {
        unsigned int result = nodeSumInt;
        nodeSumInt = 0;
        return result;
    }
};

#endif /* NONSTACKBASEDSUMVISITOR_H */

