/**********************************************************************
Course Section: 1 - 9:00am
Program: SillyMath
Version: 2
Programmers: River Wallerstedt and Anneliese Kleinschmit
Creation Date: 9/25/2024
GitHub URL: https://github.com/RivJams/SillyMath
Description: This program is a fun and easy-to-use math tutor for elementary students.
Version two generates a simple random math question and grades the user's answer.
**********************************************************************/

#include <iostream> // required for couts & cins 
#include <cstdlib> // allows for randomizer
#include <ctime> // enables use of time function
#include <string> // allows for strings to be used

using namespace std; // sets standard namespace 

int main() {
    // Starting the main function

    //*********************************************************************

    // Declares and initializes variables
    string userName = "unknown"; // Declaring and initializing variables
    int leftNum = 0;
    int rightNum = 0;
    int mType = 0;
    char mSymbol = '?';
    int correctAnswer = 0;
    int userAnswer = 0;
    int temp = 0;
    char userYN = '?';

    srand(time(0)); // Generates a unique seed so its random.

    //*********************************************************************

    // Set of cout statements to display the Silly Math ASCII art and welcome banner
    cout << "*******************************************" << endl;
    cout << " _____ _ _ _      ___  ___      _   _    " << endl;
    cout << "/  ___(_| | |     |  /// |     | | | |   " << endl;
    cout << "| `--. _| | |_   _| .  . | __ _| |_| |__ " << endl;
    cout << " `--. | | | | | | | |//| |/ _` | __| '_ | " << endl;
    cout << " ___/ | | | | |_| | |  | | (_| | |_| | | |" << endl;
    cout << "/____/|_|_|_|__, /|_|  |_/,__,_|,__|_| |_|" << endl;
    cout << "            __/ /                       " << endl;
    cout << "           |___/                       " << endl;
    cout << "*******************************************" << endl;
    cout << "*    Welcome to Silly Math Tutor V2 by    *" << endl;
    cout << "*    RivJams and Anneliese Kleinschmit    *" << endl;
    cout << "*******************************************" << endl;
    cout << endl;

    // Asks prompt whether to display the jokes or not
    cout << "Do you wanna hear some math puns? (y/n): ";
    cin >> userYN;

    if (userYN == 'y') {
        //response to 'y' as input
        cout << "Great! Here they are:" << endl;
    } else {
        cout << "That's too bad." << endl;
        cout << "You're gonna hear them anyway!" << endl;
    }
    cout << endl;

    // Couts to display jokes. After user input, jokes appear. Maybe add functionality later to reveal answers to jokes after pressing enter.
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

    // Beginning the interactive portion of the program
    cout << "Please enter your name to begin: ";
    getline(cin, userName); // Clears out leftover carriage return
    getline(cin, userName); // Get user input for name
    cout << endl;

    // Puts the user's name into the welcome message
    cout << "Welcome " << userName << ", to the Silly Math Tutor!" << endl;
    cout << endl;

    //Portion of code dedicated to random number generation
    leftNum = (rand() % 10) + 1; //randomizes first number
    rightNum = (rand() % 10) + 1; //randomizes second number
    mType = (rand() % 4) + 1; //randomizes math symbol

    switch (mType) {
        // assigns math symbol
        case 1:
            mSymbol = '+'; //assigns an addition problem
            correctAnswer = leftNum + rightNum; // adds the numbers and stores correct answer
            break;

        case 2:
            mSymbol = '-'; //assigns a subtraction problem
        // This is used to make sure the left number is larger than the right, preventing negative numbers.
            if (leftNum < rightNum) {
                temp = leftNum;
                leftNum = rightNum;
                rightNum = temp;
            }
            correctAnswer = leftNum - rightNum;
            break;

        case 3:
            mSymbol = '*'; //assigns a multiplication problem
            correctAnswer = leftNum * rightNum;
            break;

        case 4:
            mSymbol = '/'; //assigns a division problem
        // Following code makes sure division problem doesn't generate a fraction
            correctAnswer = leftNum;
            leftNum *= rightNum;
            break;

        default: // This is here to catch any errors
            cout << "Invalid question type: " << mType << endl;
            cout << "Contact RivJams or AnnelieseKleinschmit about the error" << endl;
            return -1;
    }

    //*********************************************************************


    //Asks the math question generated from our random number generator
    cout << userName << ", can you solve this problem?" << endl;
    cout << leftNum << " " << mSymbol << " " << rightNum << " = "; // Displays the math problem
    cin >> userAnswer; // Get user input for the answer
    cout << endl; // extra space in between the answer and the confirmation message

    // Tests to see if user answer is correct
    if (userAnswer == correctAnswer) {
        cout << "Correct!" << endl;
        cout << "You're a real Math Whizz!" << endl;
    } else {
        cout << "Oops!" << endl;
        cout << "Looks like someone needs to study." << endl; // The AI suggested to put "You're not a real Math Whizz!"
        cout << "The correct answer was " << correctAnswer << "." << endl; //gives the user the right answer
    }

    // End of program. Leave message to user. Couts break up the end message to display better in console.
    cout << endl;
    cout << "Thank you, " << userName << ", for playing Silly Math Tutor!" << endl;
    cout << endl;
    cout << "Be sure to come back in the near future" << endl;
    cout << "for more updates, and most importantly," << endl; // promises future improvements, the next being Version 3
    cout << "MORE FUN!" << endl;

    return 0;
}
