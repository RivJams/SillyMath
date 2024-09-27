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


// Beginning the interactive portion of the program
  cout << "Please enter your name to begin: ";
  getline(cin,userName); // Get user input for name
  cout << endl;
  
// Puts the user's name into the welcome message   
  cout << "Welcome " << userName << ", to the Silly Math Tutor!" << endl; 
  cout << endl;


  leftNum = (rand() % 10) + 1; //randomizes first number
  rightNum = (rand() % 10) + 1; //randomizes second number
  mType = (rand() % 4) + 1; //randomizes math symbol

  switch (mType) { // assigns math symbol
    case 1:
      mSymbol = '+';
      correctAnswer = leftNum + rightNum;
    break;

    case 2:
      mSymbol = '-';
    if (leftNum < rightNum) {
      temp = leftNum;
      leftNum = rightNum;
      rightNum = temp;
    }
      correctAnswer = leftNum - rightNum;
    break;

    case 3:
      mSymbol = '*';
      correctAnswer = leftNum * rightNum;
    break;

    case 4:
      mSymbol = '/';
      correctAnswer = leftNum;
      leftNum *= rightNum;
    break;

    default:
      cout << "Invalid question type: " << mType << endl;
      cout << "Contact RivJams or AnnelieseKleinschmit about the error" << endl;
      return -1;
    break;
  }








  cout << "Can you solve this problem?" << endl;
  cout << leftNum << " " << mSymbol << " " << rightNum << " = "; // Displays the math problem
  cin >> userAnswer; // Get user input for the answer 

  // Tests to see if user answer is correct
  if (userAnswer == correctAnswer) {
    cout << "Correct!" << endl;
  }
  else {
    cout << "Oops!" << endl;
  }

// End of program. Leave message to user. Couts break up the end message to display better in console.
  cout << endl;
  cout << "Sorry! That's all the program can do for now," << endl;
  cout << "but be sure to come back in the near future" << endl;
  cout << "for more updates, and most importantly," << endl;
  cout << "MORE FUN!" << endl;

return 0;
}
