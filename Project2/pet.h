#ifndef PET_H
#define PET_H

#include <string>
#include "petvisitor.h"
using namespace std;

class Pet{
protected:
    string Name;
    string Type;
    double Price;
    unsigned int Weight;

public:
    //constructors
    Pet(){
        Name = "n/a";
        Type = "unknown";
        Price = 0;
        Weight = 0;
    }
    Pet(string newName, string newType, double newPrice, unsigned int newWeight){
        Name = newName;
        Type = newType;
        Price = newPrice;
        Weight = newWeight;
    }
    Pet(const Pet& basePet){
        if (this != &basePet){
            Name = basePet.Name;
            Type = basePet.Type;
            Price = basePet.Price;
            Weight = basePet.Weight;
        }
    }
    Pet& operator=(const Pet& basePet){
        if (this != &basePet){
            Name = basePet.Name;
            Type = basePet.Type;
            Price = basePet.Price;
            Weight = basePet.Weight;
        }
        return *this;
    }
    //destructor
    virtual ~Pet(){}

    //getters
    string GetName(){
        return Name;
    }
    string GetType(){
        return Type;
    }
    double GetPrice(){
        return Price;
    }
    unsigned int GetWeight(){
        return Weight;
    }

    //setters
    void SetName(string newName){
        Name = newName;
    }
    void SetType(string newType){
        Type = newType;
    }
    void SetPrice(double newPrice){
        Price = newPrice;
    }
    void SetWeight(unsigned int newWeight){
        Weight = newWeight;
    }

    //print
    virtual void print() const = 0;
};

#endif /* PET_H */
