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
    circle(){
        radius = 0;
        color = "none";
        Xloc = 0;
        Yloc = 0;
        cout << "Circle default constructor used" << endl;
    }
    circle(double newRadius, string newColor, double X, double Y){
        radius = newRadius;
        color = newColor;
        Xloc = X;
        Yloc = Y;
        cout << "Circle constructor with parameters used" << endl;
    }
    circle(const circle& baseCircle){
        if (this != &baseCircle){
            radius = baseCircle.radius;
            color = baseCircle.color;
            Xloc = baseCircle.Xloc;
            Yloc = baseCircle.Yloc;
            cout << "Circle copy constructor used" << endl;
        }
    }
    circle& operator=(const circle& baseCircle){
        if (this != &baseCircle){
            radius = baseCircle.radius;
            color = baseCircle.color;
            Xloc = baseCircle.Xloc;
            Yloc = baseCircle.Yloc;
            cout << "Circle assignment constructor used" << endl;
        }
        return *this;
    }
    virtual ~circle(){
        
        cout << "Circle destructor used" << endl;
    }
    
    double computeArea() const {return M_PI*radius*radius;}
};

#endif /* CIRCLE_H */

