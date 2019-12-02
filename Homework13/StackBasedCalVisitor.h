/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackBasedCalVisitor.h
 * Author: rasu
 *
 * Created on March 12, 2018, 10:35 AM
 */

#ifndef STACKBASEDCALVISITOR_H
#define STACKBASEDCALVISITOR_H

#include "Visitor.h"
#include "Node.h"
#include <stack>
#include <sstream>
#include <iostream>

using namespace std;

class StackBasedCalVisitor: public Visitor{
protected:
    stack<double> nodeStack;
    
public:
    //constructor
    StackBasedCalVisitor(){};
    
    //destructor
    virtual ~StackBasedCalVisitor(){};

    //visitor implementations
    virtual void VisitTerminalNode(TerminalNode* terminalNode){
        //convert string to double and add to stack
        istringstream iss (terminalNode->getValue());
        double temp;
        iss >> temp;
        nodeStack.push(temp);
    }
    
    virtual void VisitNonTerminalNode(NonTerminalNode* nonTerminalNode){
        //get left child node
        nonTerminalNode->getLeftChild()->Accept(this);
        
        //get right child node
        nonTerminalNode->getRightChild()->Accept(this);
        
        //check operation
        double left, right, total;
        switch(nonTerminalNode->getValue()[0]){
            case '+':
                //add given numbers
                right = nodeStack.top();
                nodeStack.pop();
                left = nodeStack.top();
                nodeStack.pop();
                total = left + right;
                nodeStack.push(total);
                break;
            case '-':
                //subtract given numbers
                right = nodeStack.top();
                nodeStack.pop();
                left = nodeStack.top();
                nodeStack.pop();
                total = left - right;
                nodeStack.push(total);
                break;
            case '*':
                //multiply given numbers
                right = nodeStack.top();
                nodeStack.pop();
                left = nodeStack.top();
                nodeStack.pop();
                total = left * right;
                nodeStack.push(total);
                break;
            case '/':
                //divide given numbers
                right = nodeStack.top();
                nodeStack.pop();
                left = nodeStack.top();
                nodeStack.pop();
                total = left / right;
                nodeStack.push(total);
                break;
            default:
                cout << "Not an operation character" << endl;
        }
    };
        
    //return total and reset stack
    double getResult() {
        double result = nodeStack.top();
        nodeStack.pop();
        return result;
    }
};

#endif /* STACKBASEDCALVISITOR_H */

