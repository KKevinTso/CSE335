#ifndef TABLEBUILDER_H
#define TABLEBUILDER_H

#include "pet.h"
#include "bird.h"
#include "cat.h"
#include "dog.h"
#include "fish.h"
#include "builder.h"
#include <QTableWidget>
#include <QWidget>
#include <QString>

using namespace std;

class TableBuilder: public Builder{
public:
    virtual void addBird(string newName, string newType, double newPrice, unsigned int newWeight, bool newNocturnal, vector<Pet*> *petList){
        Bird* newBird = new Bird(newName, newType, newPrice, newWeight, newNocturnal);
        petList->push_back(newBird);
    }

    virtual void addCat(string newName, string newType, double newPrice, unsigned int newWeight, bool newFluffy, vector<Pet*> *petList){
        Cat* newCat = new Cat(newName, newType, newPrice, newWeight, newFluffy);
        petList->push_back(newCat);
    }

    virtual void addDog(string newName, string newType, double newPrice, unsigned int newWeight, string newCategory, vector<Pet*> *petList){
        Dog* newDog = new Dog(newName, newType, newPrice, newWeight, newCategory);
        petList->push_back(newDog);
    }

    virtual void addFish(string newName, string newType, double newPrice, unsigned int newWeight, string newWaterType, vector<Pet*> *petList){
        Fish* newFish = new Fish(newName, newType, newPrice, newWeight, newWaterType);
        petList->push_back(newFish);
    }
};

#endif // TABLEBUILDER_H
