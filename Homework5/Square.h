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

#include "Shape.h"


class square: public shape{
protected:
    double edge;
    
public:
    square(){
        edge = 0;
        color = "none";
        Xloc = 0;
        Yloc = 0;
        cout << "Square default constructor used" << endl;
    }
    square(double newEdge, string newColor, double X, double Y){
        edge = newEdge;
        color = newColor;
        Xloc = X;
        Yloc = Y;
        cout << "Square constructor with parameters used" << endl;
    }
    square(const square& baseSquare){
        if (this != &baseSquare){
            edge = baseSquare.edge;
            color = baseSquare.color;
            Xloc = baseSquare.Xloc;
            Yloc = baseSquare.Yloc;
            cout << "Square copy constructor used" << endl;
        }
    }
    square& operator=(const square& baseSquare){
        if (this != &baseSquare){
            edge = baseSquare.edge;
            color = baseSquare.color;
            Xloc = baseSquare.Xloc;
            Yloc = baseSquare.Yloc;
            cout << "Square assignment constructor used" << endl;
        }
        return *this;
    }
    virtual ~square(){
        
        cout << "Square destructor used" << endl;
    }
    
    double computeArea() const {return edge*edge;}
};

#endif /* SQUARE_H */

