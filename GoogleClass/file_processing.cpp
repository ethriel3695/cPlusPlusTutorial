/*
file_processing.cpp: Reuben Ellis
Description: A program to illustrate file processing

FIX THIS FILE ITS NOT WORKING SINCE MOVING INTO A FOLDER
*/

#include <fstream>
#include <iostream>
using namespace std;

void openFileAndRead () {
    char fileFirstName[30], fileLastName[30];
    char fileContents[255];
    int fileAge;

    //Open an ifstream called ListPeople, open the file
    ifstream ListPeople("GoogleClass\fileProcessing.txt");

    while (1) {
        ListPeople >> fileFirstName;
        ListPeople >> fileLastName;
        ListPeople >> fileAge;

        if (ListPeople.eof()) {
            break;
        }

        cout << "First Name is: " << fileFirstName << endl;
        cout << "Last Name is:  " << fileLastName << endl;
        cout << "Age is:        " << fileAge << endl;
    }
    
    //Close files when complete
    ListPeople.close();
}

int main() {
    char first_name[30] = "";
    char last_name[30] = "";
    char file_name[20];
    int age = 0;
    char done = 0;

    cout << endl << "Enter the name of the file: ";
    cin >> file_name;

    //Create an ofstream called People, open the stream for output.
    ofstream People(file_name, ios::out);

    cout << endl << "Enter your data. " << endl;

    while (1) {
        cout << "Enter First Name: ";
        cin >> first_name;

        cout << "Enter Last Name:  ";
        cin >> last_name;

        cout << "Enter Age:        ";
        if (!(cin >> age)) {
            cout << "Please enter only numbers" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else if (age < 1 && age != -1) {
            cout << "Age must be greater than 0" << endl;
            cin.clear();
        }else {
            //Write the output to the stream.
            People << first_name << endl << last_name << endl << age << endl;
        } 

        cout << "Continue? y/n" << endl;
        cin >> done;
        if (done == 'n') {
            break;
        }
    } 
    //Close files when complete
    People.close();

    openFileAndRead();

    return 0;
}
