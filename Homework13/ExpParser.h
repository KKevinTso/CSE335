/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExpParser.h
 * Author: rasu
 *
 * Created on March 12, 2018, 10:34 AM
 * File from sample code
 */

#ifndef EXPPARSER_H
#define EXPPARSER_H

#include <string>
#include <iostream>
#include "Builder.h"

class ExpParser{
protected:
    Builder* m_expBuilder;
public:
    void setBuilder(ExpBuilder* builder){
        m_expBuilder=builder;
    }
    
    void parse(string exp){
        string literal;
        for(int i=0; i<exp.size(); i++){
            switch(exp[i]){
                case '(':
                    if(literal.size() > 0){
                        m_expBuilder->addLiteral(literal);
                        literal.clear();
                    }
                    m_expBuilder->addLeftParenthesis();
                    break;
                case ')':
                    if(literal.size() > 0){
                        m_expBuilder->addLiteral(literal);
                        literal.clear();
                    }
                    m_expBuilder->addRightParenthesis();
                    break;
                case '+':
                    if(literal.size() > 0){
                        m_expBuilder->addLiteral(literal);
                        literal.clear();
                    }
                    m_expBuilder->addOperand("+");
                    break;
                case '-':
                    if(literal.size() > 0){
                        m_expBuilder->addLiteral(literal);
                        literal.clear();
                    }
                    m_expBuilder->addOperand("-");
                    break;
                case '*':
                    if(literal.size() > 0){
                        m_expBuilder->addLiteral(literal);
                        cout<<literal<<endl;
                        literal.clear();
                    }
                    m_expBuilder->addOperand("*");
                    break;
                case '/':
                    if(literal.size() > 0){
                        m_expBuilder->addLiteral(literal);
                        literal.clear();
                    }
                    m_expBuilder->addOperand("/");
                    break;
                default:
                    literal.push_back(exp[i]);
                    break;
            }
        }
    }
};

#endif /* EXPPARSER_H */

