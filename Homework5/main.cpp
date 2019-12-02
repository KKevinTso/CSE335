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
    
    {
    square* newSquare = new square(1, "white", 0, 0);
    delete newSquare;
    }
    circle* newCircle = new circle(1, "black", 0, 3.4);
    delete newCircle;
    
    return 0;
}

