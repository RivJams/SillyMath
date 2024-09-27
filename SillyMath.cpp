/**********************************************************************
Course Section: 1 - 9:00am
Program: SillyMath
Version: 2
Programmers: River Wallerstedt and Anneliese Kleinschmit
Creation Date: 8/26/2024
GitHub URL: https://github.com/RivJams/SillyMath
Description: This program is a fun and easy-to-use math tutor for elementary students. 
**********************************************************************/

#include <iostream> // required for couts & cins 
#include <cstdlib> // allows for randomizer
#include <ctime> // enables use of time function

using namespace std; // sets standard namespace 
 
int main() { // Starting the main function

//*********************************************************************
 
// Variable list 
  string userName = "unknown"; // Declaring and initializing variables
  int leftNum = 0;
  int rightNum = 0;
  int mType = 0;
  char mSymbol = '?';
  int correctAnswer = 0;
  int userAnswer = 0;
  int temp = 0;
  string userYN = "?";
 
//*********************************************************************
srand(time(0)); // unique seed so its random


// Beginning the interative portion of the program 
  cout << "Please enter your name to begin: ";
  cin >> userName; // Get user input for name 
  cout << endl;
  
// Puts the user's name into the welcome message   
  cout << "Welcome " << userName << ", to the Silly Math Tutor!" << endl; 
  cout << endl;


  leftNum = rand() % 10; //randomizes first number
  rightNum = rand() % 10; //randomizes second number
  mType = (rand() % 3) + 1; //randomizes math symbol


  switch (mType) { // assigns math symbol
    case 1:
      mSymbol = '+';
    break;
    case 2:
      mSymbol = '-';
    break;
    case 3:
      mSymbol = '*';
    break;
    case 4:
      mSymbol = '/';
    break;
  }

  if (mSymbol == '-' && (leftNum < rightNum)) {
    temp = leftNum;
    leftNum = rightNum;
    rightNum = temp;
  } else {....}







  cout << "Can you solve this problem?" << endl;
  cout << leftNum << " + " << rightNum << " = "; // Displays the math problem 
  cin >> userAnswer; // Get user input for the answer 


// End of program. Leave message to user. Couts break up the end message to display better in console.
  cout << endl;
  cout << "Sorry! That's all the program can do for now," << endl;
  cout << "but be sure to come back in the near future" << endl;
  cout << "for more updates, and most importantly," << endl;
  cout << "MORE FUN!" << endl;

return 0;
}
