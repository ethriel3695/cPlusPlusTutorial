/*
illustrate_scope.cpp: Reuben Ellis
Description: A program to illustrate different scopes
*/

#include <iostream>
using namespace std;

int a = 18;
int b = 6;

int firstFunction (int a, int b) {
    return a - b;
}

int secondFunction() {
    int c;
    c = a + b;
    return c;
}

int main () {
    int b = 12;
    int c = 0;
    a = firstFunction(b, a);
    c = secondFunction();
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
}
