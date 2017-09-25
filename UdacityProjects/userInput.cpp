/*Author: Reuben Ellis
Description: This program accepts input from 
the user.
*/

#include <iostream>
using namespace std;

int main () {
    int year = 0;
    int age = 0;
    string name = "";

    cout << "What is your favorite year? ";

    cin >> year;

    cout << "How interesting, your favorite year is " << year << "!\n";

    cout << "At what age did you learn to ride a bike? ";

    cin >> age;

    cout << "How interesting, you learned to ride at age " << age << "!\n";

    cout << "What is your name? ";

    cin >> name;

    cout << "Hello " << name << "!\n";

    return 0;
}