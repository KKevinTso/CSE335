/*
 * shape abstract class
 * square and circle derived classes
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
    
    virtual double computeArea() const = 0;
    
    void printColor(){
        cout << (" color: " + color) << endl;
    }
};

#endif /* SHAPE_H */

