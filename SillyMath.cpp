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

using namespace std; // sets standard namespace 
 
int main() { // Starting the main function

  string userName = "unknown"; // Declaring and initializing variables 
  int userAnswer = 0;
  int leftNum = 3;
  int rightNum = 4;
  string userYN = "?";

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

// Beginning the interative portion of the program 
  cout << "Please enter your name to begin: ";
  cin >> userName; // Get user input for name 
  cout << endl;
  
// Puts the user's name into the welcome message   
  cout << "Welcome " << userName << ", to the Silly Math Tutor!" << endl; 
  cout << endl;
  
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
