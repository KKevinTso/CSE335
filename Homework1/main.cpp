/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rasu
 *
 * Created on January 9, 2018, 12:04 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
#include "Cats.h"

using namespace std;

string strongerCat(const cat& cat1, const cat& cat2){
    if (cat1.getPower() > cat2.getPower()) return cat1.getName();
    else if (cat1.getPower() < cat2.getPower()) return cat2.getName();
    return "same power";
}

bool sameBreed(const cat& cat1, const cat& cat2){
    return cat1.getBreed() == cat2.getBreed();
}

string olderCat(const cat& cat1, const cat& cat2){
    if (cat1.getAge() > cat2.getAge()) return cat1.getName();
    else if (cat1.getAge() < cat2.getAge()) return cat2.getName();
    return "same age";
}

int main(int argc, char** argv) {
    
    const cat Jarippa("Jarippa", 423, "Himalayan", 15);
    const cat Chomusuke("Chomusuke", 30, "Russian Blue", 12);
    const cat Ras("Ras", 145, "Himalayan", 12);
    
    cout<< strongerCat(Jarippa, Chomusuke) <<endl;
    cout<< sameBreed(Jarippa, Ras) <<endl;
    cout<< olderCat(Ras, Chomusuke) <<endl;
    
    
    return 0;
}

