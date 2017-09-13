/*
randomNumbers.cpp: Reuben Ellis
Description: A program which generates actual random numbers
by setting a seed and then generating random numbers
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int randomNumbers() {

    int i, j;

    //set the seed
    srand( (unsigned) time(NULL) );

    /* generate 10 random numbers. */
    for(i = 0; i < 10; i++) {
        //generate actual random number
        j = rand();
        cout << "Random Number : " << j << endl;
    }

    return 0;

}