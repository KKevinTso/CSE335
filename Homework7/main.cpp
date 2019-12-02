/* 
 * File:   main.cpp
 * Author: rasu
 *
 * Created on February 2, 2018, 1:29 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include "queue.h"

using namespace std;

int main(int argc, char** argv) {

    cout << "Integer queue values: ";
    
    queue<int> *intQueue = new queue<int>;
    
    intQueue->push(1);
    intQueue->push(2);
    intQueue->push(3);
    intQueue->push(4);
    intQueue->push(5);
    intQueue->push(6);
    
    cout << intQueue->pop() << " ";
    cout << intQueue->pop() << " ";
    cout << intQueue->pop() << " ";
    cout << intQueue->pop() << " ";
    cout << intQueue->pop() << " ";
    cout << intQueue->pop();
    
    delete intQueue;

    cout << "\nDouble queue values: ";
    
    queue<double> *doubleQueue = new queue<double>;
    
    doubleQueue->push(0.1);
    doubleQueue->push(0.2);
    doubleQueue->push(0.3);
    doubleQueue->push(0.4);
    doubleQueue->push(0.5);
    doubleQueue->push(0.6);
    
    cout << doubleQueue->pop() << " ";
    cout << doubleQueue->pop() << " ";
    cout << doubleQueue->pop() << " ";
    cout << doubleQueue->pop() << " ";
    cout << doubleQueue->pop() << " ";
    cout << doubleQueue->pop();
    
    delete doubleQueue;
    
    return 0;
}

