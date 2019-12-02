/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   queue.h
 * Author: rasu
 *
 * Created on February 2, 2018, 1:38 PM
 */

#ifndef QUEUE_H
#define QUEUE_H

#include <vector>
using namespace std;

template <class queueType> class queue{
protected:
    vector<queueType> queueVec;
    
public:
    queue(){};
    virtual ~queue(){};
    
    queueType top(){
        if (queueVec.empty()){
            cout << "No values in queue; returning 0" << endl;
            return 0;
        }
        return queueVec[0];
    }
    
    queueType pop(){
        if (queueVec.empty()){
            cout << "No values in queue; returning 0" << endl;
            return 0;
        }
        queueType top = queueVec[0];
        queueVec.erase(queueVec.begin());
        return top;
    }
    
    void push(queueType item){
        queueVec.push_back(item);
    }
    
    bool empty(){
        return queueVec.size() == 0;
    }
};

#endif /* QUEUE_H */

