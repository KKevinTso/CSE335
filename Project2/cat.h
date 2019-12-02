#ifndef CAT_H
#define CAT_H

#include <iostream>

class Cat: public Pet{
protected:
    bool Fluffy;

public:
    //constructors
    Cat(){
        Name = "n/a";
        Type = "unknown";
        Price = 0;
        Weight = 0;
        Fluffy = true;
    }
    Cat(string newName, string newType, double newPrice, unsigned int newWeight, bool newFluffy){
        Name = newName;
        Type = newType;
        Price = newPrice;
        Weight = newWeight;
        Fluffy = newFluffy;
    }
    Cat(const Cat& baseCat){
        if (this != &baseCat){
            Name = baseCat.Name;
            Type = baseCat.Type;
            Price = baseCat.Price;
            Weight = baseCat.Weight;
            Fluffy = baseCat.Fluffy;
        }
    }
    Cat& operator=(const Cat& baseCat){
        if (this != &baseCat){
            Name = baseCat.Name;
            Type = baseCat.Type;
            Price = baseCat.Price;
            Weight = baseCat.Weight;
            Fluffy = baseCat.Fluffy;
        }
        return *this;
    }
    //destructor
    virtual ~Cat(){}

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
        printf("%-11s", "Fluffy:");
        printf("%-9s", Fluffy ? "true" : "false");
        printf("\n");
    }

    //get/set fluffy
    bool GetFluffy(){
        return Fluffy;
    }

    void SetFluffy(bool newFluffy){
        Fluffy = newFluffy;
    }
};

#endif /* CAT_H */
