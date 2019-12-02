#ifndef BIRD_H
#define BIRD_H

class Bird: public Pet{
protected:
    bool Nocturnal;

public:
    //constructors
    Bird(){
        Name = "n/a";
        Type = "unknown";
        Price = 0;
        Weight = 0;
        Nocturnal = true;
    }
    Bird(string newName, string newType, double newPrice, unsigned int newWeight, bool newNocturnal){
        Name = newName;
        Type = newType;
        Price = newPrice;
        Weight = newWeight;
        Nocturnal = newNocturnal;
    }
    Bird(const Bird& baseBird){
        if (this != &baseBird){
            Name = baseBird.Name;
            Type = baseBird.Type;
            Price = baseBird.Price;
            Weight = baseBird.Weight;
            Nocturnal = baseBird.Nocturnal;
        }
    }
    Bird& operator=(const Bird& baseBird){
        if (this != &baseBird){
            Name = baseBird.Name;
            Type = baseBird.Type;
            Price = baseBird.Price;
            Weight = baseBird.Weight;
            Nocturnal = baseBird.Nocturnal;
        }
        return *this;
    }
    //destructor
    virtual ~Bird(){}

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
        printf("%-11s", "Nocturnal:");
        printf("%-9s", Nocturnal ? "true" : "false");
        printf("\n");
    }

    //get/set fluffy
    bool GetNocturnal(){
        return Nocturnal;
    }

    void SetNocturnal(bool newNocturnal){
        Nocturnal = newNocturnal;
    }
};

#endif /* BIRD_H */
