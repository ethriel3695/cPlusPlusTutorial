/*
stringFunctionClass.cpp: Reuben Ellis
Description: A program which calculates several
salary options and assists the user to choose
the best choice of compensation
*/

#include <iostream>
using namespace std;

int shoeCost = 225;
int weeklyWage = 600;
double hourlySalary = 7.0;
double hoursWorkedPerWeek = 40.00;
double commissionPercentageOption2 = .10;
double commissionPercentageOption3 = .20;
double salaryAmount = 0.00;

int numberOfShoesSold = 0;
int salaryOption = 0;

double CalculateSalaryOptionOne(int WeeklySales) {
    salaryAmount = 600.00;
    return salaryAmount;
}

double CalculateSalaryOptionTwo(int WeeklySales) {
    cout << "Please enter the number of hours worked this week: ";
    cin >> hoursWorked;
    salaryAmount = 7.00;
    commissionPercentage = .1 * shoeCost;
    commissionPercentage = commissionPercentage * hoursWorked;
    salaryAmount = salaryAmount + commissionPercentage;
    return salaryAmount;
}

double CalculateSalaryOptionThree(int WeeklySales) {
    commissionPercentage = .2 * shoeCost;
    salaryAmount = 20 * WeeklySales;
    salaryAmount = salaryAmount + commissionPercentage;
    return salaryAmount;
}

double GetInputFromUser() {
    cout << "Please enter the number of shoes sold this week: ";
    cin >> numberOfShoesSold;

    do {
        cout << "Please enter salary option. (Either 1, 2, or 3): ";
        if (!(cin >> salaryOption)) {
            cout << "Please enter only numbers" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else if (salaryOption != 1 && salaryOption != 2 && salaryOption != 3)
        {
            cout << "Please enter either 1, 2 or 3" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    } while (salaryOption != 1 && salaryOption != 2 && salaryOption != 3);
    

    switch(salaryOption) {
        case 1:
            salaryAmount = CalculateSalaryOptionOne(numberOfShoesSold);
            break;
        case 2:
            salaryAmount = CalculateSalaryOptionTwo(numberOfShoesSold);
            break;
        case 3:
            salaryAmount = CalculateSalaryOptionThree(numberOfShoesSold);
            break;
    }
    return salaryAmount;
}

int main () {
    salaryAmount = GetInputFromUser();

    switch(salaryOption) {
        case 1:
            cout << "Option 1 returns: $" << salaryAmount << " per week." << endl;
            break;
        case 2:
            cout << "Option 2 returns: $" << salaryAmount << " per week." << endl;
            break;
        case 3:
            cout << "Option 3 returns: $" << salaryAmount << " per week." << endl;
            break;

    return 0;
    }
}