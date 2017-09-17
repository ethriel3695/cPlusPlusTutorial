//number_of_animals.cpp: Reuben Ellis
//Description: Find an algorithm
//to find how many of each animal the farmer
//bought for $100

#include <iostream>
using namespace std;

/* My hybrid solution */
int main () {
    double horsePrice = 10.0;
    double pigPrice = 3.0;
    double rabbitPrice = .5;
    double totalAmountFarmerSpends = 100.0;

    for (int horse = 0; horse < 100; horse++) {
        for (int pig = 0; pig < 100; pig++) {
            for (int rabbit = 0; rabbit < 100; rabbit++) {
                if ((horse + pig + rabbit) == 100) {
                    if (((horsePrice * horse) + (pigPrice * pig) + (rabbitPrice * rabbit)) == totalAmountFarmerSpends) {
                        cout << "Found a solution! " << horse << " horse(s) " << pig << " pig(s) " << rabbit << " rabbit(s) "  << endl;
                    }
                }
            }
        }
    }
    return 0;
}


/* My initial solution 
int main () {
    double horsePrice = 10.0;
    double pigPrice = 3.0;
    double rabbitPrice = .5;

    for (int i = 0; i <= 100 / horsePrice; i++) {
        for (int j = 0; j <= ((100 - i * horsePrice) / pigPrice); j++) {
            double money = (100 - horsePrice * i - pigPrice * j);
            if (rabbitPrice * (100 - i - j) == money) {
                cout << "The number of Horses are: " << i << endl;
                cout << "The number of Pigs are: " << j << endl;
                cout << "The number of Rabbits are: " << 100 - i - j << endl;
            }
        }
    }
    return 0;
}
*/

/* Googles solution

int main () {
    
      for (int h = 0; h < 100; h++)
        for (int p = 0; p < 100; p++)
          for (int r = 0; r < 100; r++)
            if ((h + p + r) == 100)
              if (((10 * h) + (3 * p) + (0.5 * r)) == 100)
                cout << "Found one! " << h << " horses " << p << " pigs " << r << " rabbits "  << endl;
    }
*/