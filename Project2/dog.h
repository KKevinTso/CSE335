#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog: public Pet{
protected:
    string Category;

public:
    //constructors
    Dog(){
        Name = "n/a";
        Type = "unknown";
        Price = 0;
        Weight = 0;
        Category = "none";
    }
    Dog(string newName, string newType, double newPrice, unsigned int newWeight, string newCategory){
        Name = newName;
        Type = newType;
        Price = newPrice;
        Weight = newWeight;
        Category = newCategory;
    }
    Dog(const Dog& baseDog){
        if (this != &baseDog){
            Name = baseDog.Name;
            Type = baseDog.Type;
            Price = baseDog.Price;
            Weight = baseDog.Weight;
            Category = baseDog.Category;
        }
    }
    Dog& operator=(const Dog& baseDog){
        if (this != &baseDog){
            Name = baseDog.Name;
            Type = baseDog.Type;
            Price = baseDog.Price;
            Weight = baseDog.Weight;
            Category = baseDog.Category;
        }
        return *this;
    }
    //destructor
    virtual ~Dog(){}

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
        printf("%-11s", "Category:");
        printf("%-9s", Category.c_str());
        printf("\n");
    }

    //get/set Category
    string GetCategory(){
        return Category;
    }

    void SetCategory(bool newCategory){
        Category = newCategory;
    }
};

#endif /* DOG_H */
