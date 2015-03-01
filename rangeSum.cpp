// Author: Steven Gentry
// Created:1/23/15
// Last Modified:1/25/15
// Description:rangeSum.cpp
// User enters 2 integers. and all numbers (inclusive) are summed between those numbers
// and the total is output

#include <iostream>

using namespace std;


int main()
{
    int sum=0,integer1,integer2; //user input variables, output variable
    int start, finish;  //start and stop of loop (based on input)


    cout << "Enter integer 1: " << endl;
    cin  >> integer1;
    cout << "Enter integer 2: " << endl;
    cin >> integer2;
    // conditional to determine which input is higher/lower
    // lower input put in start, higher put in finish
            if (integer1 > integer2)
                {
                start = integer2;finish = integer1;
                }
            else
                {
                 start = integer1;
                 finish = integer2;
                }
    // loop to sum numbers

            while (start < finish + 1)
            {
            sum += start; // total calculated here
            start++; // accumulator
            }

            cout << "sum: " << sum; // total output to console

return 0;

}


