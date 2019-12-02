/* 
 * File:   NonTerminalNode.h
 * Author: rasu
 *
 * Created on March 9, 2018, 8:48 PM
 * File based on homework 12
 */

#ifndef NONTERMINALNODE_H
#define NONTERMINALNODE_H

#include "Node.h"

using namespace std;

class NonTerminalNode: public Node{
protected:
    Node* leftChild;
    Node* rightChild;

public:
    //constructors
    NonTerminalNode():Node(){
        value = "";
    }
    
    NonTerminalNode(string newValue):Node(newValue){
        value = newValue;
    }
    
    //destructor
    virtual ~NonTerminalNode(){
        delete leftChild;
        delete rightChild;
    }
    
    //add to tree
    void setLeftChild(Node* newNode){
        leftChild = newNode;
    }
    
    void setRightChild(Node* newNode){
        rightChild = newNode;
    }
    
    //fetch node
    virtual Node* getLeftChild() const{
        return leftChild;
    };
    
    virtual Node* getRightChild() const{
        return rightChild;
    };
    
    //getter
    string getValue(){
        return value;
    }
    
    //visitor hook
    virtual void Accept(Visitor* v) {
        v->VisitNonTerminalNode(this);
    }
    
    virtual void print(){
        if(leftChild){
            cout<<"(";
            leftChild->print();
        }
        cout<<value;
        if(rightChild){
            rightChild->print();
            cout<<")";
        }
    }
};

#endif /* NONTERMINALNODE_H */

