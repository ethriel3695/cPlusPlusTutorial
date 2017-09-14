//get_input.cpp: Reuben Ellis
//Description: Illustrate the use of cin to get input.

#include <iostream>
using namespace std;

int main() {
    int input_var = 0;
    //Enter the do while loop and stay there until either
    //a non-numeric is entered or -1 is entered. Note that
    //cin will accept any integer, 4, 40, 400, etc.
    do {
        cout << "Enter a number (-1 = quit): ";
        
        if (!(cin >> input_var)) {
            cout << "You entered a non-numeric. Exiting..." << endl;
            break;
        }
        if (input_var != -1) {
            cout << "You entered " << input_var << endl;
        }
    } while (input_var != -1);
    cout << "All done." << endl;
    return 0;
}