#include "bundletable.h"
#include <QTableWidget>

#include <fstream>
#include <string>
#include <QString>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QDebug>

using namespace std;

void BundleTable::addToTable(bool){

    //load bundle database file
    QFile testfile("Bundles.csv");
    if(!testfile.exists()){
        cout<< "error in bundle database exist" << endl;

    }
    if(!testfile.open(QIODevice::ReadOnly)){

        cout<< "error in bundle database open" << endl;
    }

    //set bundle table dimensions
    this->setColumnCount(3);
    this->setRowCount(2);
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

        //set name
        QTableWidgetItem *tblValue = new QTableWidgetItem(wordList[0]);
        this->setItem(row, 0, tblValue);

        //set price
        QTableWidgetItem *tblValue1 = new QTableWidgetItem(wordList[1]);
        this->setItem(row, 1, tblValue1);

        //load prices of pets from pet database to get total price
        double totalPrice = 0;

        QFile petFile("Pets.csv");
        if(!petFile.exists()){
            cout<< "error in pet database exist" << endl;
        }
        if(!petFile.open(QIODevice::ReadOnly)){

            cout<< "error in pet database open" << endl;
        }

        for(int i = 2; i < wordList.length(); i++){
            QStringList petWordList;
            while(!petFile.atEnd()){
                //break line into list
                QString line = petFile.readLine();
                petWordList.append(line.split(','));

                //strip white space
                wordList[i] = wordList[i].simplified();
                wordList[i].replace( " ", "" );

                //find match
                if(petWordList[1]==wordList[i]){
                    totalPrice += petWordList[4].toDouble();
                    break;
                }

                //clear list
                while (petWordList.size()>0) {
                    petWordList.pop_back();
                }
            }
        }

//        for(int i = 2; i < wordList.length(); i++){

//            //strip white space
//            string bundlePetName = wordList[i].simplified().replace( " ", "" ).toStdString();
//            cout << "Bundle: " << bundlePetName << endl;

//            cout << petList.size() << endl;
//            for(unsigned int j = 0; j < petList.size(); j++){
//                cout << "Vector: " << petList[j]->GetName() << endl;
//                if(petList[j]->GetName() == bundlePetName)
//                    cout << "Match" << endl;
//            }
//        }

        //calculate savings
        double bundlePrice = wordList[1].toDouble();
        int savings = 100*(1 - (bundlePrice/totalPrice));

        //set savings
        QString temp = QString::number(savings);
        temp += "%";
        QTableWidgetItem *tblValue3 = new QTableWidgetItem(temp);
        this->setItem(row, 2, tblValue3);

        //move to next row
        row += 1;

        //clear list
        while (wordList.size()>0) {
            wordList.pop_back();
        }
    }

    //sort table
    this->sortItems(0);
}

unsigned int BundleTable::getSize() const{
    return this->rowCount();
}
bool BundleTable::smaller(int i, int j) const{
    if(this->item(i,1) < this->item(j,1))
        return true;
    else
        return false;
}
void BundleTable::swap(int i, int j){
    for(int c = 0; c < this->columnCount(); c++){
        QTableWidgetItem *temp = this->item(i,c);
        this->setItem(i,c,this->item(j,c));
        this->setItem(j,c,temp);
    }
}
