#include <iostream>
using namespace std;

//Global variable declaration:
int g;

int localVariables() {

    //Local variable declaration:
    int a, b;
    int c;

    //actual initialization
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;

    return 0;
}

int globalVariables() {
    
    //Lcal variable declaration:
    int a, b;

    //actual initialization
    a = 10;
    b = 20;
    g = a + b;
    
    cout << g << endl;
    
    return 0;
}