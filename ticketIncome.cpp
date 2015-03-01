// Author: Steven Gentry
// Created:1/12/15
// Last Modified:
// Description: ticketIncome.cpp
// User inputs amount sold and program will output total amount
// of each ticket sold. Uses fixed and setprecision to control formatting out output


#include <iostream>
#include <iomanip> // needed for setprecision and fixed functions

using namespace std;

int main()
{
double ticketA,ticketB,ticketC;

cout << "Enter number of ticket A sold" << endl;
cin  >> ticketA;
cout << "Enter number of ticket B sold" << endl;
cin >> ticketB;
cout << "Enter number of ticket C sold " << endl;
cin >> ticketC;
cout << fixed << setprecision(2);
cout << "$" << ticketA*15.00 << " Ticket A sales." << endl;
cout << "$" << ticketB*12.00 << " Ticket B sales. " << endl;
cout << "$" << ticketC*9.00 << " Ticket C sales." << endl;
return 0;
}
