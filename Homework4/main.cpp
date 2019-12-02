/*
 * testing main
 */

/* 
 * File:   main.cpp
 * Author: rasu
 *
 * Created on January 22, 2018, 11:03 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <iomanip>

#include "Shape.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

int main(int argc, char** argv) {
    
    vector<shape*> squaresAndCircles;
    
    square* square1 = new square(1, "white", 0, 0);
    square* square2 = new square(2.5, "black", 2, 5);
    square* square3 = new square(3, "red", 5, 1.3);
    square* square4 = new square(4.5, "white", 2, 0);
    circle* circle1 = new circle(1, "black", 0, 3.4);
    circle* circle2 = new circle(5, "red", 1.1, 3.4);
    
    squaresAndCircles.push_back(square1);
    squaresAndCircles.push_back(square2);
    squaresAndCircles.push_back(square3);
    squaresAndCircles.push_back(square4);
    squaresAndCircles.push_back(circle1);
    squaresAndCircles.push_back(circle2);
    
    for (int i; i <= squaresAndCircles.size(); i++){
        cout << "Shape area: ";
        cout << setprecision(3) << squaresAndCircles[i]->computeArea();
        squaresAndCircles[i]->printColor();
    }
    
    return 0;
}

