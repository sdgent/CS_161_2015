// Author: Steven Gentry
// Created:1/22/15
// Last Modified:1/25/15
// Description:maxMin.cpp
// User inputs how many numbers he wants to enter, then enters the numbers
// (doubles and negatives allowed) in any order and program will
// output the highest and lowest numbers entered
//


#include <iostream>

using namespace std;

    int main()
    {
        double high=0.0,low=0.0,numbin; // holders for high and low inputs, user input
        int maxnum; // end of loop based on number entered by user
        int i=0;
        cout << "Enter how many numbers you want to enter." << endl;
        cin >> maxnum;
          // while iteration less then number entered by user, loop
            while (i < maxnum)
            {
                cout << "Enter number: " << i+1 << endl;
            // on first two interations, determine high and low inputs
                cin >> numbin;
                if (i == 0)
                    {
                     if (high < numbin)
                     {
                      high = numbin;
                     }
                     else
                     {
                      low = numbin;
                     }

                    }
                if (i == 1)
                    {
                    if (numbin > high) {low = high; high = numbin;}
                    else {low = numbin;}
                    }
         // if more than 2 iterations, compare new input number to existing
         // high/low values, replace if necessary
                if (i != 0 && i != 1)
                    {
                     if (numbin > high) {high = numbin;}
                     if (numbin < low) {low =numbin;}
                    }

                i++; //accumulator
                }
        // output high and low numbers
                cout << "Highest number entered was: " << high << endl;
                cout << "Lowest number entered was: " << low << endl;

        return 0;
    }
