/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cats.h
 * Author: rasu
 *
 * Created on January 9, 2018, 1:26 PM
 */

#ifndef CATS_H
#define CATS_H

class cat{
protected:
    string catname;
    unsigned short catage;
    string catbreed;
    unsigned short catpower;
    
public:
    cat(const string& name, const unsigned short& age, const string& breed, const unsigned short power){
        catname = name;
        catage = age;
        catbreed = breed;
        catpower = power;
    }
    
    string getName() const{
        return catname;
    }
    
    unsigned short getAge() const{
        return catage;
    }
    
    string getBreed() const{
        return catbreed;
    }
    
    unsigned short getPower() const{
        return catpower;
    }
    
    void updateName(const string& name) {
        catname = name;
    }
    
    void updateAge(const unsigned short& age) {
        catage = age;
    }
    
    void updatePower(const unsigned short& power) {
        catpower = power;
    }
};

#endif /* CATS_H */

