#include <iostream>
using namespace std;

int sum(int a, int b = 20) {
    int result;
    result = a + b;

    return (result);
}

int functionsExample() {

    //locan variables declaration:
    int a = 100;
    int b = 200;
    int result;

    result = sum(a, b);
    cout << "Total value is : " << result << "\n\n";

    result = sum(a);
    cout << "Total value is : " << result << endl;

    return 0;

}