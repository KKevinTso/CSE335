/* 
 * File:   NonTerminalNode.h
 * Author: rasu
 *
 * Created on March 9, 2018, 8:48 PM
 */

#ifndef NONTERMINALNODE_H
#define NONTERMINALNODE_H

#include <vector>
#include "Node.h"

using namespace std;

class NonTerminalNode: public Node{
protected:
    vector<Node*> nodes;

public:
    //constructors
    NonTerminalNode():Node(){
        value = -1;
    }
    
    NonTerminalNode(int newValue):Node(newValue){
        value = newValue;
    }
    
    //destructor
    virtual ~NonTerminalNode(){
        for(int i = 0; i < nodes.size(); i++)
            delete nodes[i];
    }
    
    //add to tree
    void addChild(Node* newNode){
        nodes.push_back(newNode);
    }
    
    //fetch node
    virtual Node* getChild(int i) const{
        return nodes[i];
    };
    
    //getter
    int getValue(){
        return value;
    }
    
    //size of list
    virtual unsigned int getChildrenSize() const{
        return nodes.size();
    };
    
    //visitor hook
    virtual void Accept(Visitor* v) {
        v->VisitNonTerminalNode(this);
    }
};

#endif /* NONTERMINALNODE_H */

