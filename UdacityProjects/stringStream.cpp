/*Author: Reuben Ellis
Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

 #include <iostream>
 #include <sstream>
 using namespace std;

 int main () {
     string stringLength = "";
     string stringWidth = "";
     float lengthOfRoom = 0.0;
     float widthOfRoom = 0.0;
     float areaOfRoom = 0.0;
     const char superScriptSquaredSymbol = 253;

     cout << "Please enter the length of the room: ";
     getline(cin, stringLength);
     stringstream(stringLength) >> lengthOfRoom;

     cout << "Please enter the width of the room: ";
     getline(cin, stringWidth);
     stringstream(stringWidth) >> widthOfRoom;

     areaOfRoom = lengthOfRoom * widthOfRoom;

     cout << "The area of the room is: " << areaOfRoom
        << " ft." << superScriptSquaredSymbol; << endl;

    return 0;
 }