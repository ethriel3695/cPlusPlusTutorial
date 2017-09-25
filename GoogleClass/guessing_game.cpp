//guessing_game.cpp: Reuben Ellis
//Description: Create a program which generates random numbers between 0 and 100
//and the player must guess the secret number

#include <iostream>
#include <time.h>
#include <cstdlib>
#include <string>

using namespace std;

int main() {

    int i, j = 0;
    int randomNumber = 0;
    int userInput = 0;

    //Set a random seed
    srand((unsigned) time(NULL));

    //This generates a random number between 0 and 100
    randomNumber = rand() % 100 + 1;

    cout << endl;
    cout << "Welcome to the guessing game! The object of the game" << endl;
    cout << "is to enter a number between 1 and 100 and correctly guess" << endl;
    cout << "the secret number!" << endl << endl;
    cout << "Please Enter a value: ";
    cin;

    do {
        cout << "Please Enter a value: ";
        if (!(cin >> userInput)) {
            cout << "Please enter only numbers" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else if (userInput < 1 || userInput > 100) {
            cout << "The number must be between 1 and 100. Please enter another value" << endl;
            cin.clear();
        } 
        else {
            if (userInput > randomNumber) {
                cout << "Incorrect guess. The secret number is lower than: " << userInput << endl;
            }
            else if (userInput < randomNumber) {
                cout << "Incorrect guess. The secred number is higher than: " << userInput << endl;
            }
            else {
                cout << "You guessed it: " << randomNumber << endl;
            }
        }
    } while (userInput != randomNumber);
    
    cout << "random value was: " << randomNumber << endl;
    return 0;
}
