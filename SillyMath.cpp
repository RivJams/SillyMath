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

// Set of cout statements to display the Silly Math ASCII art and welcome banner
  cout << "*******************************************" << endl;
  cout << " _____ _ _ _      ___  ___      _   _    "   << endl;
  cout << "/  ___(_| | |     |  /// |     | | | |   "   << endl;
  cout << "| `--. _| | |_   _| .  . | __ _| |_| |__ "   << endl;
  cout << " `--. | | | | | | | |//| |/ _` | __| '_ | "  << endl;
  cout << " ___/ | | | | |_| | |  | | (_| | |_| | | |"  << endl;
  cout << "/____/|_|_|_|__, /|_|  |_/,__,_|,__|_| |_|"  << endl;
  cout << "            __/ /                       "    << endl;
  cout << "           |___/                       "     << endl;
  cout << "*******************************************" << endl;
  cout << "*Welcome to Silly Math Tutor V1 by RivJams*" << endl;
  cout << "*******************************************" << endl;
  cout << endl;

// Asks prompt whether to display the jokes or not
  cout << "Do you wanna hear some math puns? (y/n): ";
  cin >> userYN;
  cout << endl;
// Lol, I don't know how to properly implement this yet. "Currently runs on make believe." Will come back to this with a better system for (y/n) later

// Couts to display jokes. After user input, jokes appear. Maybe add functionality later to reveal answers to jokes after pressing enter
  cout << "Great! And if you said no, that's too bad," << endl;
  cout << "you're going to hear them anyway!" << endl;
  cout << endl;
  cout << "*******************************************" << endl;
  cout << endl;
  cout << "Question: Do you think monsters are good at math?" << endl;
  cout << "Answer: No, unless you Count Dracula." << endl;
  cout << endl;
  cout << "Question: Which knight created the round table?" << endl;
  cout << "Answer: Sir Cumference." << endl;
  cout << endl;
  cout << "Question: What do you call a number who can't stay in place?" << endl;
  cout << "Answer: A roamin' numeral." << endl;
  cout << endl;
  cout << "*******************************************" << endl;
  cout << endl;

//*********************************************************************

//Portion of code dedicated to random number generation
srand(time(0)); // unique seed so its random

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

//*********************************************************************

// Beginning the interactive portion of the program
  cout << "Please enter your name to begin: ";
  getline(cin,userName); // Get user input for name
  cout << endl;

// Puts the user's name into the welcome message
  cout << "Welcome " << userName << ", to the Silly Math Tutor!" << endl;
  cout << endl;

//Asks the math question generated from our random number generator
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
