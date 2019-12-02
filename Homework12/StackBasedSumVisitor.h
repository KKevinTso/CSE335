/* 
 * File:   StackBasedSumVisitor.h
 * Author: rasu
 *
 * Created on March 9, 2018, 8:53 PM
 */

#ifndef STACKBASEDSUMVISITOR_H
#define STACKBASEDSUMVISITOR_H

#include "Visitor.h"
#include "Node.h"
#include <stack>

class StackBasedSumVisitor: public Visitor{
protected:
    stack<unsigned int> nodeSumStack;
    
public:
    //constructor
    StackBasedSumVisitor(){};
    
    //destructor
    virtual ~StackBasedSumVisitor(){};

    //visitor implementations
    virtual void VisitTerminalNode(TerminalNode* terminalNode){
        nodeSumStack.push(terminalNode->getValue());
    }
    
    virtual void VisitNonTerminalNode(NonTerminalNode* nonTerminalNode){
        unsigned int sum = nonTerminalNode->getValue();
        
        //for every child, store its value in nodeSumStack
        for(int i = 0; i < nonTerminalNode->getChildrenSize(); i++){
            nonTerminalNode->getChild(i)->Accept(this);
        }
        
        //add values in nodeSumStack and delete
        for(int i = 0; i < nonTerminalNode->getChildrenSize(); i++ ){
            sum += nodeSumStack.top();
            nodeSumStack.pop();
        }
        
        //store total in nodeSumStack.
        nodeSumStack.push(sum);
    };
        
    //return total and reset stack
    double getResult() {
        unsigned int result = nodeSumStack.top();
        nodeSumStack.pop();
        return result;
    }
};

#endif /* STACKBASEDSUMVISITOR_H */

