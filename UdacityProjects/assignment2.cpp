/*
Author: Reuben Ellis
Description: This program accepts 15 numbers
from the user and returns the average of the numbers
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0;

    //get the numbers from the user
    for (int i = 0; i < 15; i++) {
        cout << "Enter a number: ";
        scanf("%d", &userInput);
        cout << userInput << "\n";

        if (userInput > maxNumber) {
            //the biggest number entered so far is th emax number
            maxNumber = userInput;
        }

        if(userInput < minNumber) {
            //the lowest number entered so far is the min number
            minNumber = userInput;
        }
        sumTotal = sumTotal + userInput;
    }

    cout << "Maximum number = " << maxNumber << "\n";
    cout << "Minimum number = " << minNumber << "\n";
    average = sumTotal / 15;
    cout << "Average = " << average << "\n";
    return 0;
}