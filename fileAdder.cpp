// Author: Steven Gentry
// Created:1/24/15
// Last Modified:1/25/15
// Description: fileAdder.cpp
// program reads numbers from "nums.txt" and totals them
// and then writes them to "sum.txt." Checks for file open errors
// reaquire "nums.txt" to be in executable directory or error will occur.

#include <iostream>
#include <fstream> //needed for file I/O

using namespace std;

int main()
{
double number=0.0,total=0.0;
ifstream input; //create file input object
input.open("nums.txt"); // open file

//if no file open error then read until end of file

    if (input)
        while (input >> number)
        {
        total += number; //add total to current number read from file
        }
    else
    {
     cout << "Error opening file"; // file open error
     return 0;
    }
input.close(); //close file

ofstream output;  // create file output object
output.open("sum.txt"); // create/open file to write

 // if file write/open success write total to file
    if (output)
    {
     output << "The sum of the values is " << total;
     cout << "File write successful.";
    }

    else
    {
     cout << "Error opening file"; //file open error
    }
output.close(); // close file

return 0;
}
