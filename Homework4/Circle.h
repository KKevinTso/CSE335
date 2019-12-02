/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circle.h
 * Author: rasu
 *
 * Created on January 22, 2018, 6:05 PM
 */

#ifndef CIRCLE_H
#define CIRCLE_H

class circle: public shape{
protected:
    double radius;
    
public:
    circle(double newRadius, string newColor, double X, double Y){
        radius = newRadius;
        color = newColor;
        Xloc = X;
        Yloc = Y;
    }
    
    double computeArea() const {return M_PI*radius*radius;}
};

#endif /* CIRCLE_H */

