#ifndef BUILDER_H
#define BUILDER_H

#include "pet.h"
#include <string>
#include <QTableWidget>
#include <QWidget>

using namespace std;

class Builder{
public:
    virtual ~Builder(){};
    virtual void addBird(string newName, string newType, double newPrice, unsigned int newWeight, bool newNocturnal, vector<Pet*> *petList)=0;
    virtual void addCat(string newName, string newType, double newPrice, unsigned int newWeight, bool newFluffy, vector<Pet*> *petList)=0;
    virtual void addDog(string newName, string newType, double newPrice, unsigned int newWeight, string newCategory, vector<Pet*> *petList)=0;
    virtual void addFish(string newName, string newType, double newPrice, unsigned int newWeight, string newWaterType, vector<Pet*> *petList)=0;
};

#endif // BUILDER_H
