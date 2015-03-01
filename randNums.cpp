// Author: Steven Gentry
// Created:1/12/2015
// Last Modified:
// Description:randNums.cpp
// User inputs upper/lower limits of random integers, program then
// generates 5 random numbers and outputs to console


#include <iostream>
#include <cstdlib> // library needed for rand() function

using namespace std;

int main()
{
	int upperLimit, lowerLimit,i=0;
	cout << "Enter the upper limit ?" << endl;
	cin >> upperLimit;
	cout << "Enter the lower limit ?" << endl;
	cin >> lowerLimit;

	while (i < 6)  // loop 5 times to display 5 numbers
	{
	    //generates random number within limits and outputs to console
		cout << rand() % (upperLimit-lowerLimit+1)+lowerLimit << endl;
		i++;

	}
	return 0;
}
