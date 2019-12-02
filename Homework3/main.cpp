/* 
 * File:   main.cpp
 * Author: rasu
 *
 * Created on January 17, 2018, 11:53 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
#include <vector>
using namespace std;
#include "doublequeue.h"
using namespace std;


int main(int argc, char** argv) {
    
    doublequeue doubleQueueStrings;
    
    doubleQueueStrings.insertL("string1");
    doubleQueueStrings.insertL("string2");
    doubleQueueStrings.insertL("string3");
    doubleQueueStrings.insertL("string4");
    doubleQueueStrings.insertL("string5");
    
    doubleQueueStrings.insertR("string6");
    doubleQueueStrings.insertR("string7");
    doubleQueueStrings.insertR("string8");
    
    cout << "(--Double Queue--)" << endl;
    cout << doubleQueueStrings.removeL() << endl;
    cout << doubleQueueStrings.removeL() << endl;
    cout << doubleQueueStrings.removeL() << endl;
    cout << doubleQueueStrings.removeL() << endl;
    cout << doubleQueueStrings.removeL() << endl;
    cout << doubleQueueStrings.removeL() << endl;
    cout << doubleQueueStrings.removeL() << endl;
    cout << doubleQueueStrings.removeL() << endl;
    
    stack stackStrings;
    
    stackStrings.push("string100");
    stackStrings.push("string200");
    stackStrings.push("string300");
    stackStrings.push("string400");
    
    cout << "\n(--Stack--)" << endl;
    cout << stackStrings.pop() << endl;
    cout << stackStrings.pop() << endl;
    cout << stackStrings.pop() << endl;
    cout << stackStrings.pop() << endl;
    
    queue queueStrings;
    
    queueStrings.push("string10");
    queueStrings.push("string20");
    queueStrings.push("string30");
    queueStrings.push("string40");
    
    cout << "\n(--Queue--)" << endl;
    cout << queueStrings.pop() << endl;
    cout << queueStrings.pop() << endl;
    cout << queueStrings.pop() << endl;
    cout << queueStrings.pop() << endl;
    
    return 0;
}

