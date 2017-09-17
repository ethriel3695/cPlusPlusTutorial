//greatest_common_divisor.cpp: Reuben Ellis
//Description: Uses the Euclidean algorithm to find
//the greatest common divisor of two numbers
//both recursively and non recursively

#include <iostream>
using namespace std;

//This is a non recursive Euclidean algorithm
int NonRecursiveGreatestCommonDivisor (int numberOne, int numberTwo) {
    if (numberOne < numberTwo) {
        numberOne += numberTwo;
        numberTwo = numberOne - numberTwo;
        numberOne -= numberTwo;
    }

    if (numberTwo == 0) return numberOne;

    while (numberOne % numberTwo != 0) {
        numberOne += numberTwo;
        numberTwo = numberOne - numberTwo;
        numberOne -= numberTwo;
        numberTwo %= numberOne;
    }
    return numberTwo;
}

//This is a recursive Euclidean algorithm
int RecursiveGreatestCommonDivisor (int numberOne, int numberTwo) {
    if (numberTwo == 0) {
        return numberOne;
    }
    else {
        return RecursiveGreatestCommonDivisor (numberTwo, numberOne % numberTwo);
    }    
}

int main () {

    int userInputOne = 0;
    int userInputTwo = 0;
    int greatestCommonDivisor = 0;


    cout << endl;
    cout << "This portion of the program will find the " << endl;
    cout << "Greatest Common Divisor of two numbers entered " << endl;
    cout << "by the user using a non-recursive Euclidean algorithm." << endl;

    cout << "Please enter two numbers: ";

    if (!(cin >> userInputOne >> userInputTwo)) {
        cout << "Please enter only numbers" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
    } 
    else {
        greatestCommonDivisor = NonRecursiveGreatestCommonDivisor(userInputOne, userInputTwo);
        cout << "The greatest common divisor of (" << userInputOne << ", " << userInputTwo << ") = " << greatestCommonDivisor << endl;
    }

    cout << endl;
    cout << "This portion of the program will find the " << endl;
    cout << "Greatest Common Divisor of two numbers entered " << endl;
    cout << "by the user using a recursive Euclidean algorithm." << endl;

    cout << "Please enter two numbers: ";

    if (!(cin >> userInputOne >> userInputTwo)) {
        cout << "Please enter only numbers" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
    } 
    else {
        greatestCommonDivisor = RecursiveGreatestCommonDivisor(userInputOne, userInputTwo);
        cout << "The greatest common divisor of (" << userInputOne << ", " << userInputTwo << ") = " << greatestCommonDivisor << endl;
    }

}