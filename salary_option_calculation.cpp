/*
stringFunctionClass.cpp: Reuben Ellis
Description: A program which calculates several
salary options and assists the user to choose
the best choice of compensation
*/

#include <iostream>
using namespace std;

int unitCost = 225;
int weeklyWage = 600;
int numberOfUnitsSold = 0;

double hourlySalary = 7.00;
double hoursWorkedPerWeek = 40.00;
double commissionPercentageOption2 = .10;
double commissionPercentageOption3 = .20;
double BonusPerUnit = 20;

//The employee earns a salary of $600 per week
void CalculateSalaryOptionOne() {
    cout << "Option 1 returns: $" << weeklyWage << " per week." << endl;
}
//The employee earns a salary of $7.00 per hour plus a 10% commission on sale
void CalculateSalaryOptionTwo(int unitsSold) {
    double baseSalary, totalPay, commission;

    baseSalary = hourlySalary * hoursWorkedPerWeek;
    commission = (unitsSold * unitCost) * commissionPercentageOption2;
    totalPay = baseSalary + commission;
    cout << "Option 2 returns: $" << totalPay << " per week." << endl;
}

//The employee earns a no salary, but 20% commissions and $20 for each pair of shoes sold
void CalculateSalaryOptionThree(int unitsSold) {
    int extraBonus;
    double baseSalary, totalPay, commission;

    extraBonus = BonusPerUnit * unitsSold;
    commission = (unitsSold * unitCost) * commissionPercentageOption3;
    totalPay = extraBonus + commission;
    cout << "Option 3 returns: $" << totalPay << " per week." << endl;
}

int GetInputFromUser() {
    int units;

    do {
        cout << "Please enter the number of units sold this week: ";
        if (!(cin >> units)) {
            cout << endl << "Please enter only numbers" << endl << endl;
                cin.clear();
                cin.ignore(10000, '\n');
        }
        else if (units < 0) {
            cout << endl << "Please enter 0 or greater" << endl << endl;
                cin.clear();
                cin.ignore(10000, '\n');
        }
    } while (!(units > 0));
    
    return units;
}

int main () {
    numberOfUnitsSold = GetInputFromUser();

    if (numberOfUnitsSold == 0) {
        return 0;
    }
    CalculateSalaryOptionOne();
    CalculateSalaryOptionTwo(numberOfUnitsSold);
    CalculateSalaryOptionThree(numberOfUnitsSold);
}