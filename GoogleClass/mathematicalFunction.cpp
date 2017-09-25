/*
randomNumbers.cpp: Reuben Ellis
Description: A program which shows some of the math functions available in C++
*/

#include <iostream>
#include <cmath>
using namespace std;

int mathematicalFunction() {

    //number definition:
    short s = 10;
    int i = -1000;
    long l = 100000;
    float f = 230.47;
    double d = 200.374;

    //mathematical operations:
    cout << "sin(d) :" << sin(d) << endl;
    cout << "abs(i) :" << abs(i) << endl;
    cout << "floor(d) :" << floor(d) << endl;
    cout << "sqrt(f) :" << sqrt(f) << endl;
    cout << "pow(d, 2) :" << pow(d, 2) << endl;

    return 0;

}