/* 
 * File:   doublequeue.h
 * Author: rasu
 *
 * Created on January 17, 2018, 3:48 PM
 */

#ifndef DOUBLEQUEUE_H
#define DOUBLEQUEUE_H

#include <vector>

class doublequeue{
protected:
    vector<string> stringData;

public:
    void insertL(string s){
        stringData.insert(stringData.begin(), s);
    }
    
    void insertR(string s){
        stringData.push_back(s);
    }
    
    string removeL(){
        string strL = stringData[0];
        stringData.erase(stringData.begin());
        return strL;
    }
    
    string removeR(){
        string strR = stringData[stringData.size() - 1];
        stringData.pop_back();
        return strR;
    }
};

class stack: private doublequeue{
public:
    void push(string s){
        insertL(s);
    }
    string pop(){
        return removeL();
    }
    string top(){
        return stringData[0];
    }
};

class queue: private doublequeue{
public:
    using doublequeue::insertL;
    using doublequeue::removeR;
    
    const short maxCapacity = 100;
    short currentCapacity = 0;
    
    void push(string s){
        if (full()) return;
        currentCapacity += 1;
        insertL(s);
    }
    string pop(){
        currentCapacity -= 1;
        return removeR();
    }
    bool full(){
        return maxCapacity <= currentCapacity;
    }
};

#endif /* DOUBLEQUEUE_H */

