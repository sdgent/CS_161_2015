// Author: Steven Gentry
// Created:1/23/15
// Last Modified:1/25/15
// Description:numGuess.cpp
// program generates a random number between 1-100 and prompts user to guess
// a message is output of "too high" or "too low" based on guess.
// when user guesses correctly, program will output guess is correct and number
// of tries

#include <iostream>
#include <cstdlib>  //needed for random number function

using namespace std;

    int main()
    {
     int answer,guess,tries=0; // input variables and accumulator
     bool correct = false;    // loop gate variable
     answer = rand() % 100 + 1; // generate random number
     //loop until user guesses correctly
        while (correct == false)
        {
         tries++; // accumulator
         cout << "What is your guess?" << endl;
         cin >> guess;
         if (guess > answer)
            {
            cout << "Too High. Try again." << endl;
            }
         if (guess < answer)
            {
             cout << "Too Low.  Try again." << endl;
            }
         if (guess == answer)
            {
            cout << "You have guessed the number!" << endl;
            cout << "It took you " << tries << " tries." << endl;
            correct = true; //leave loop
            }

        }

    }

