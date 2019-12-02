#ifndef FISH_H
#define FISH_H

#include <iostream>
#include <string>
using namespace std;
class Fish: public Pet{
protected:
    string WaterType;

public:
    //constructors
    Fish(){
        Name = "n/a";
        Type = "unknown";
        Price = 0;
        Weight = 0;
        WaterType = true;
    }
    Fish(string newName, string newType, double newPrice, unsigned int newWeight, string newWaterType){
        Name = newName;
        Type = newType;
        Price = newPrice;
        Weight = newWeight;
        WaterType = newWaterType;
    }
    Fish(const Fish& baseFish){
        if (this != &baseFish){
            Name = baseFish.Name;
            Type = baseFish.Type;
            Price = baseFish.Price;
            Weight = baseFish.Weight;
            WaterType = baseFish.WaterType;
        }
    }
    Fish& operator=(const Fish& baseFish){
        if (this != &baseFish){
            Name = baseFish.Name;
            Type = baseFish.Type;
            Price = baseFish.Price;
            Weight = baseFish.Weight;
            WaterType = baseFish.WaterType;
        }
        return *this;
    }
    //destructor
    virtual ~Fish(){}

    //print
    virtual void print() const {
        printf("%-7s" , "Name:");
        printf("%-8s" , Name.c_str());
        printf(" ");
        printf("%-7s" , "Type:");
        printf("%-10s" , Type.c_str());
        printf("%-9s" , "Weight:");
        printf("%-3i" , (int)Weight);
        printf("%-8s", "Price: ");
        printf("%-8.2F", Price);
        printf("%-11s", "WaterType:");
        printf("%-9s", WaterType.c_str());
        printf("\n");
    }

    //get/set fluffy
    string GetWaterType(){
        return WaterType;
    }

    void SetWaterType(bool newWaterType){
        WaterType = newWaterType;
    }
};

#endif /* FISH_H */
