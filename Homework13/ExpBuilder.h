/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExpBuilder.h
 * Author: rasu
 *
 * Created on March 12, 2018, 10:34 AM
 * File based from sample code and
 * https://stackoverflow.com/questions/5313322/c-cast-to-derived-class
 */

#ifndef EXPBUILDER_H
#define EXPBUILDER_H

#include <stack>
#include <iostream>
#include "Node.h"
#include "Builder.h"
#include "NonTerminalNode.h"
#include "TerminalNode.h"

using namespace std;

class ExpBuilder: public Builder{
protected:
    stack<Node*> expStack;
public:
    virtual void addOperand(string operand){
        expStack.push(new NonTerminalNode(operand));
    };
    
    virtual void addLiteral(string literal){
        expStack.push(new TerminalNode(literal));
    };
    
    virtual void addLeftParenthesis(){};
    
    virtual void addRightParenthesis(){
        Node* rightChild = expStack.top();
        expStack.pop();
        
        Node* temp = expStack.top();
        NonTerminalNode* parent = dynamic_cast<NonTerminalNode*>(temp);
        expStack.pop();
        
        Node* leftChild = expStack.top();
        expStack.pop();
        
        parent->setLeftChild(leftChild);
        parent->setRightChild(rightChild);
        expStack.push(parent);
    };
    
    virtual Node* getExpression(){
        Node* root = expStack.top();
        expStack.pop();
        return root;
    };
};

#endif /* EXPBUILDER_H */

