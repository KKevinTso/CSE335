/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Builder.h
 * Author: rasu
 *
 * Created on March 12, 2018, 12:42 PM
 * File from sample code
 */

#ifndef BUILDER_H
#define BUILDER_H

#include "Node.h"
#include <string>

using namespace std;

class Builder{
public:
    virtual void addOperand(string operand)=0;
    virtual void addLiteral(string literal)=0;
    virtual void addLeftParenthesis()=0;
    virtual void addRightParenthesis()=0;
    virtual Node* getExpression()=0;
};

#endif /* BUILDER_H */

