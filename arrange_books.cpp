//arrange_books.cpp: Reuben Ellis
//Description: This algorithm finds how many
//different ways 6 books can be arranged left to right;

#include <iostream>
using namespace std;

int main () {
    int numberOfItems;
    int factorial;

    cout << "Enter a number to get its factorial: ";
    cin >> numberOfItems;

    factorial = numberOfItems;

    if (factorial < 0) {
        cout << "A negative number was entered. Exiting..." << endl;
        return 1;
    }
    else {
        if (factorial == 0 || factorial == 1) {
            factorial = 1;
        }
        else {
            for (int index = factorial - 1; index > 1; index--) {
                factorial  *= index;
            }
        }
    }
    cout << "The total number of times " << factorial
    << " books can be arranged left to right is: " << factorial << endl;
}
