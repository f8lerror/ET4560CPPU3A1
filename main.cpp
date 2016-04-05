/*
 * Joshua Wilson
 * Unit 3 Assignment 1
 * Challenges
 * ET4560
 */


// Challenge 2, Page 235 - Roman Numeral Converter

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Please Enter a Number from 1 to 10: ";
    cin >> number;

    if (number > 10 || number < 1)
        cout << "Invalid Selection\n";

    else
    {

        switch (number)    //Switch is used when you have more than 10 options.
        {

            case 1: cout << "Roman numeral: I \n";
                break;
            case 2: cout << "Roman numeral: II\n";
                break;
            case 3: cout << "Roman numeral: III\n";
                break;
            case 4: cout << "Roman numeral: IV\n";
                break;
            case 5: cout << "Roman numeral: V\n";
                break;
            case 6: cout << "Roman numeral: VI\n";
                break;
            case 7: cout << "Roman numeral: VII\n";
                break;
            case 8: cout << "Roman numeral: VIII\n";
                break;
            case 9: cout << "Roman numeral: IX\n";
                break;
            case 10: cout << "Roman numeral: X\n";
                break;

        }
    }

    return 0;
}





// Challenge 18, page 240 - Spectral Analysis

#include<iostream>
using namespace std;

int main()
{
    double wavelength;

    cout << "Enter Wavelength" << endl;
    cout << ">";
    cin >> wavelength;


    if( wavelength  <= 1E-11)
        cout << "Type : Gamma Rays" << endl;
    else if( wavelength <= 1E-8)
        cout <<"Type : X-Rays" << endl;
    else if( wavelength <= 4E-7 )
        cout <<"Type : Ultraviolet" << endl;
    else if( wavelength <= 7E-7)
        cout << "Type: Visible Light" << endl;
    else if( wavelength <= 1E-3)
        cout << "Type: Infrared" << endl;
    else if( wavelength <= 1E-2)
        cout << "Type: Microwaves" << endl;
    else if( wavelength <= 1E-1)
        cout << "Type: Radio Waves" << endl;
    else

        return 0;
}



// Challenge 18, page 318 - Random Number Guessing Game

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    // declare variables
    int rightAnswer, userAnswer;

    // determine rightAnswer
    rightAnswer = (rand() % 100) + 1;

    // begin the game
    cout << "I'm thinking of a number between 1-100!" << endl;
    do{
        // collect data
        cout << "Guess: ";
        cin >> userAnswer;

        // if else statements to determine correctness
        if (userAnswer < 1 || userAnswer > 100)
            cout << "The number is in the range 1-100. Try again!" << endl;
        else if (userAnswer > rightAnswer)
            cout << "Too high! Try harder!" << endl;
        else if (userAnswer < rightAnswer)
            cout << "Too low! Try harder!" << endl;
        else
            cout << "Congratulations you beat the guessing game!" << endl << ":)";


    } while (userAnswer != rightAnswer);
    return 0;
}


