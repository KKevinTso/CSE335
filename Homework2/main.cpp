/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rasu
 *
 * Created on January 11, 2018, 12:53 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class animal{
public:
    string name;
    void changeName(string newname){
        name = newname;
    }
protected:
    short age;
    void changeAge(short newage){
        age = newage;
    }
private:
    short ID;
    void changeID(short newID){
        ID = newID;
    }
public:
    animal(string animalName, short animalAge, short animalID):\
        name(animalName),age(animalAge),ID(animalID){}
};

class cat: public animal{
public:
    cat(string animalName, short animalAge, short animalID):\
        animal(animalName, animalAge, animalID){}
    
    void printCat(){
        cout << name << endl;
        cout << age << endl;
        
        //cout << ID << endl;
        //error: 'ID' is a private member of 'animal'
    }
    
    void updateCat(string newname, short newage, short newID){
        changeName(newname);
        changeAge(newage);
        
        //changeID(newID);
        //error: 'changeID' is a private member of 'animal'
    }
    
};

class american_curl: public cat{
public:
    american_curl(string animalName, short animalAge, short animalID):\
        cat(animalName, animalAge, animalID){}
    
    void printAmericanCurl(){
        cout << name << endl;
        cout << age << endl;
        
        //cout << ID << endl;
        //error: 'ID' is a private member of 'animal'
    }
    
    void updateCat(string newname, short newage, short newID){
        changeName(newname);
        changeAge(newage);
        
        //changeID(newID);
        //error: 'changeID' is a private member of 'animal'
    }
};

class dog: protected animal{
public:
    dog(string animalName, short animalAge, short animalID):\
        animal(animalName, animalAge, animalID){}
    
    void printDog(){
        cout << name << endl;
        cout << age << endl;
        
        //cout << ID << endl;
        //error: 'ID' is a private member of 'animal'
    }
    
    void updateDog(string newname, short newage, short newID){
        changeName(newname);
        changeAge(newage);
        
        //changeID(newID);
        //error: 'changeID' is a private member of 'animal'
    }
    
};

class corgi: public dog{
public:
    corgi(string animalName, short animalAge, short animalID):\
        dog(animalName, animalAge, animalID){}
    
    void printCorgi(){
        cout << name << endl;
        cout << age << endl;
        
        //cout << ID << endl;
        //error: 'ID' is a private member of 'animal'
    }
    
    void updateDog(string newname, short newage, short newID){
        changeName(newname);
        changeAge(newage);
        
        //changeID(newID);
        //error: 'changeID' is a private member of 'animal'
    }
};

class bird: private animal{
public:
    bird(string animalName, short animalAge, short animalID):\
        animal(animalName, animalAge, animalID){}
    
    void printBird(){
        cout << name << endl;
        cout << age << endl;
        
        //cout << ID << endl;
        //error: 'ID' is a private member of 'animal'
    }
    
    void updateBird(string newname, short newage, short newID){
        changeName(newname);
        changeAge(newage);
        
        //changeID(newID);
        //error: 'changeID' is a private member of 'animal'
    }
    
};

class finch: public bird{
public:
    finch(string animalName, short animalAge, short animalID):\
        bird(animalName, animalAge, animalID){}
    
    void printFinch(){
        //cout << name << endl; //error: 'name' is a private member of 'animal'
        //cout << age << endl;  //error: 'age' is a private member of 'animal'
        //cout << ID << endl;   //error: 'ID' is a private member of 'animal'
    }
    
    void updateFinch(string newname, short newage, short newID){
        //changeName(newname);  //error: 'changeName' is a private member of 'animal'
        //changeAge(newage);    //error: 'changeAge' is a private member of 'animal'
        //changeID(newID);      //error: 'changeID' is a private member of 'animal'
    }
};

int main(int argc, char** argv) {
    cat newcat("Ras", 12, 1);
    cout << newcat.name << endl;
    //cout << newcat.age << endl; //error: 'age' is a protected member of 'animal'
    //cout << newcat.ID << endl;  //error: 'ID' is a private member of 'animal'
    
    newcat.changeName("Jerry");
    //newcat.changeAge(10); //error: 'changeAge' is a protected member of 'animal'
    //newcat.changeID(10);  //error: 'changeID' is a private member of 'animal'
    
    dog newdog("Zwei", 15, 2);
    //cout << newdog.name << endl; //error: 'name' is a protected member of 'animal'
    //cout << newdog.age << endl;  //error: 'age' is a protected member of 'animal'
    //cout << newdog.ID << endl;   //error: 'ID' is a private member of 'animal'
    
    //newdog.changeName("Doggo"); //error: 'changeName' is a protected member of 'animal'
    //newdog.changeAge(10);       //error: 'changeAge' is a protected member of 'animal'
    //newdog.changeID(10);        //error: 'changeID' is a private member of 'animal'
    
    bird newbird("Boco", 4, 3);
    //cout << newbird.name << endl; //error: 'name' is a protected member of 'animal'
    //cout << newbird.age << endl;  //error: 'age' is a protected member of 'animal'
    //cout << newbird.ID << endl;   //error: 'ID' is a private member of 'animal'
    
    //newbird.changeName("Voco");  //error: 'changeName' is a protected member of 'animal'
    //newbird.changeAge(10);       //error: 'changeAge' is a protected member of 'animal'
    //newbird.changeID(10);        //error: 'changeID' is a private member of 'animal'
    
    return 0;
}

