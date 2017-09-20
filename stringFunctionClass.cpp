/*
stringFunctionClass.cpp: Reuben Ellis
Description: A program which uses the C++ string class
and replaces the statement "...to be..." with "to jump"
inserts the word only after "the" in the statement
and prints out the subString "or not to be" character by character
each on a new line under the statement
and erases the word "not" in the statement
*/

#include <iostream>
using namespace std;

int main() {

    string fullStatement = "To be or not to be, that is the question";
    string insertWord = "only ";
    string fullStatementSubString = fullStatement.substr(6, 12);
    fullStatement.insert(32, insertWord);
    fullStatement.replace(fullStatement.find("to be", 0), 5, "to jump");
    fullStatement.erase(9, 4);
    cout << fullStatement << endl;
    for (int i = 0; i < fullStatementSubString.length(); i++) {
        cout << fullStatementSubString[i];
        cout << endl;
    }

    return 0;

}