/* 
 * File:   Visitor.h
 * Author: rasu
 *
 * Created on March 9, 2018, 8:49 PM
 */

#ifndef VISITOR_H
#define VISITOR_H

class TerminalNode;
class NonTerminalNode;

class Visitor{
public:
    //constructor
    Visitor(){};
    
    //destructor
    virtual ~Visitor(){};
    
    //visitors
    virtual void VisitTerminalNode(TerminalNode*) = 0;
    virtual void VisitNonTerminalNode(NonTerminalNode*) = 0;    
};

#endif /* VISITOR_H */

