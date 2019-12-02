/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Square.h
 * Author: rasu
 *
 * Created on January 22, 2018, 6:05 PM
 */

#ifndef SQUARE_H
#define SQUARE_H

class square: public shape{
protected:
    double edge;
    
public:
    square(double newEdge, string newColor, double X, double Y){
        edge = newEdge;
        color = newColor;
        Xloc = X;
        Yloc = Y;
    }
    
    double computeArea() const {return edge*edge;}
};

#endif /* SQUARE_H */

