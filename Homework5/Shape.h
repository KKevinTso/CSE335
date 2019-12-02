/*
 * shape abstract class
 * shape and circle derived classes
 */

/* 
 * File:   Shape.h
 * Author: rasu
 *
 * Created on January 22, 2018, 11:23 AM
 */

#include <math.h>
using namespace std;

#ifndef SHAPE_H
#define SHAPE_H

class shape{
public:
    double Xloc;
    double Yloc;
    string color;
    
    shape(){
        color = "none";
        Xloc = 0;
        Yloc = 0;
        cout << "Shape default constructor used" << endl;
    }
    shape(string newColor, double X, double Y){
        color = newColor;
        Xloc = X;
        Yloc = Y;
        cout << "Shape constructor with parameters used" << endl;
    }
    shape(const shape& baseShape){
        if (this != &baseShape){
            color = baseShape.color;
            Xloc = baseShape.Xloc;
            Yloc = baseShape.Yloc;
            cout << "Shape copy constructor used" << endl;
        }
    }
    shape& operator=(const shape& baseShape){
        if (this != &baseShape){
            color = baseShape.color;
            Xloc = baseShape.Xloc;
            Yloc = baseShape.Yloc;
            cout << "Shape assignment constructor used" << endl;
        }
        return *this;
    }
    virtual ~shape(){
        
        cout << "Shape destructor used" << endl;
    }
    
    virtual double computeArea() const = 0;
    
    void printColor(){
        cout << (" color: " + color) << endl;
    }
};

#endif /* SHAPE_H */

