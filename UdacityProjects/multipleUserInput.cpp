/*Author: Reuben Ellis
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#include <iostream>
using namespace std;

int main () {
    string firstUserName = "";
    string firstUserAddress = "";
    string firstUserPhoneNumber = "";
    string secondUserName = "";
    string secondUserAddress = "";
    string secondUserPhoneNumber = "";

    cout << "\nFirst user, please enter your name ";

    getline(cin, firstUserName);

    cout << "\nFirst User, please enter your address ";

    getline(cin, firstUserAddress);

    cout << "\nFirst User, please enter your phone number ";

    getline(cin, firstUserPhoneNumber);

    cout << "Second user, please enter your name ";

    getline(cin, secondUserName);

    cout << "\nSecond User, please enter your address ";

    getline(cin, secondUserAddress);

    cout << "\nSecond User, please enter your phone number ";

    getline(cin, secondUserPhoneNumber);

    cout << "\n\n" << firstUserName << "\n\t" << firstUserAddress 
        << "\n\t" << firstUserPhoneNumber << endl;
    cout << "\n\n" << secondUserName << "\n\t" << secondUserAddress
        << "\n\t" << secondUserPhoneNumber << endl;

    return 0;
}