/*
randomNumbers.cpp: Reuben Ellis
Description: A program which shows the different data types and sizes.
NOTE: Sizes vary for each data type based on the PC being used.
*/

#include <iostream>
using namespace std;

int dataTypes() {
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    enum color { red, green, blue } c;
    c = blue;

    typedef int feet;

    feet distance;

    cout << "feet is another way to initialize int. : " << sizeof(feet) << endl;

    cout << "Value of c : " << c << endl;

    return 0;
}