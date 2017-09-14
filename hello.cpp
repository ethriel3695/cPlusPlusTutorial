/*
https://developers.google.com/edu/c++/getting-started

hello.cpp: Reuben Ellis
Description: The main file which controls all the other functions
*/

#include <iostream>
#include "header.h"
using namespace std;

#include <iomanip>
using std::setw;

//main() is where program execution begins.
int main() {
    cout << setiosflags(ios::left);
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 3; j++) {
            cout << setw(17) << "Hello World!.";
        }
        cout << endl;
    }

    // cout << dataTypes() << endl;
    // cout << variables() << endl;
    // cout << functionsExample() << endl;
    // cout << mathematicalFunction() << endl;
    // cout << randomNumbers() << endl;
    // cout << arrayPractice() << endl;
   // cout << stringFunctionClass() << endl;
    
    return 0;
}