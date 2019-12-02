#include "pettable.h"
#include <QTableWidget>

#include <fstream>
#include <string>
#include <QString>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "bird.h"
#include "cat.h"
#include "dog.h"
#include "fish.h"
#include "tablebuilder.h"

using namespace std;

void PetTable::addToTable(bool){

    //load pet database file
    QFile testfile("Pets.csv");
    if(!testfile.exists()){
        cout<< "error in pet database exist" << endl;
    }
    if(!testfile.open(QIODevice::ReadOnly)){

        cout<< "error in pet database open" << endl;
    }

    TableBuilder* petTableBuilder = new TableBuilder;

    //set pet table dimensions
    this->setColumnCount(4);
    this->setRowCount(5);
    this->setColumnWidth(3,240);

    //begin pet parsing database
    int row = 0;
    QStringList wordList;
    while(!testfile.atEnd()){

        //adjust pet table for more entries
        if (row ==this->rowCount()){
          this->setRowCount(this->rowCount() +1);
        }

        //break line into list
        QString line = testfile.readLine();
        wordList.append(line.split(','));

        //create pet variables
        string petClass = wordList[0].toLower().toStdString();
        string petName = wordList[1].toStdString();
        string petBreed = wordList[2].toStdString();
        double petWeight = wordList[3].toDouble();
        double petPrice = wordList[4].toDouble();
        string petStringAttribute = wordList[5].toLower().simplified().replace( " ", "" ).toStdString();
        bool petBoolAttribute = false;
        if(petStringAttribute == "true")
            petBoolAttribute = true;
        else if(petStringAttribute == "false")
            petBoolAttribute = false;

        //set class
        QTableWidgetItem *tblValue = new QTableWidgetItem(wordList[0]);
        this->setItem(row, 1, tblValue);

        //set name
        QTableWidgetItem *tblValue1 = new QTableWidgetItem(wordList[1]);
        this->setItem(row, 0, tblValue1);

        //set price
        QTableWidgetItem *tblValue3 = new QTableWidgetItem(wordList[4]);
        this->setItem(row, 2, tblValue3);

        //set special attribute
        QString temp ="";
        if(petBoolAttribute){
            if(petClass == "cat"){
                temp += "Fluffy ";
            }
            if(petClass == "bird"){
                temp += "Nocturnal ";
            }
        }
        else if(!petBoolAttribute){
            if(petClass == "bird"){
                temp += "Diurnal ";
            }
        }

        if(petClass == "fish"){
            temp += wordList[5];
            temp += " ";
        }

        temp += wordList[2];
        QTableWidgetItem *tblValue2 = new QTableWidgetItem(temp);
        this->setItem(row, 3, tblValue2);

        //builder creates pet objects and stores into vector
        if (petClass == "bird")
            petTableBuilder->addBird(petName, petClass, petPrice, petWeight, petBoolAttribute, &petList);
        else if (petClass == "cat")
            petTableBuilder->addCat(petName, petClass, petPrice, petWeight, petBoolAttribute, &petList);
        else if (petClass == "dog")
            petTableBuilder->addDog(petName, petClass, petPrice, petWeight, petStringAttribute, &petList);
        else if (petClass == "fish")
            petTableBuilder->addFish(petName, petClass, petPrice, petWeight, petStringAttribute, &petList);

        //move to next row
        row += 1;

        //clear list
        while (wordList.size()>0) {
            wordList.pop_back();
        }
    }

    //sort table
    this->sortItems(0);

    //delete builder
    delete petTableBuilder;
}

unsigned int PetTable::getSize() const{
    return this->rowCount();
}
bool PetTable::smaller(int i, int j) const{
    if(this->item(i,0) < this->item(j,0))
        return true;
    else
        return false;
}
void PetTable::swap(int i, int j){
    for(int c = 0; c < this->columnCount(); c++){
        QTableWidgetItem *temp = this->item(i,c);
        this->setItem(i,c,this->item(j,c));
        this->setItem(j,c,temp);
    }
}
