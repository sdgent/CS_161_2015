// Author: Steven Gentry
// Created:2/5/15
// Last Modified:
// Description:Date.cpp
/**** Get month,day,year input values from user and outputs in
 3 different formats based on user selection. ****/


#include <iostream>
#include <string>
#include <iomanip>  // needed for setw() and setfill()
#include <cstdlib>  // needed for exit()
#include "Date.hpp"

using namespace std;


int main()
{

// get user input
int monthIn1,dayIn1,yearIn1;
bool endLoop = false;
cout << "Enter Month (1-12)" << endl;
cin >> monthIn1;
cout << "Enter Day (1-31)" << endl;
cin >> dayIn1;
cout << "Enter Year" << endl;
cin >> yearIn1;

// create a Date object
Date date1(monthIn1,dayIn1,yearIn1);

// output selection loop
    do
    {
    char choice;
    cout << "Choose One" << endl;
    cout << "<1> All numeric format" << endl;
    cout << "<2> Month,Day,Year" << endl;
    cout << "<3> Day,Month,Year" << endl;
    cout << "<4> Exit" << "\n" << endl;
    cin >> choice;

/*** user chooses output or exits ***/
    switch (choice)
        {
    case '1':
            date1.print1();
            break;
        case '2':
            date1.print2();
            break;
        case '3':
            date1.print3();
            break;
        case '4':
            endLoop = true;
            break;

        // check for invalid input
        default:
            cout << "Invalid entry (enter 1-4)\n" << endl;

        }

       }

    while(endLoop == false);
   return 0;
}
// Default constructor
    Date::Date()
    {
        setMonth(1);
        setDay(1);
        setYear(2001);
    }
// Input constructor
    Date::Date(int monthIn, int dayIn, int yearIn)
    {
        setMonth(monthIn);
        setDay(dayIn);
        setYear(yearIn);
    }

// set and get methods
     void Date::setMonth(int monthIn)
    {
        // check for range of month values, exit on error
        if (monthIn < 1 || monthIn > 12)
        {
            month=0;
            cout << "Month input invalid" << endl;
            exit (EXIT_FAILURE);
        }
        else
        month=monthIn;
    }

    void Date::setDay(int dayIn)
    {
        // check for range of day values, exit on error
        if (dayIn < 1 || dayIn > 31)
        {
        day=10;
        cout << "Day input invalid" << endl;
        exit (EXIT_FAILURE);
        }
        else
        day=dayIn;
    }
    void Date::setYear(int yearIn)
    {
        // check for range of year values, exit on error
        if (yearIn < 1 || yearIn > 9999)
        {
        year =0;
        cout << "Year input invalid" << endl;
        exit (EXIT_FAILURE);
        }
        else
        year=yearIn;
    }
/*********************************************************************
** Description: print1() output numeric date input. Truncates year
** Parameters: no parameters
*********************************************************************/

    void Date::print1()
    {
     cout << month << "/" << day << "/" << setw(2)<< setfill('0')<< year%100 << "\n" << endl;
    }
/*********************************************************************
** Description: printw() outputs month(text),day,year. Calls monthName();
** Parameters: no parameters
*********************************************************************/

    void Date::print2()
    {
    cout << monthName(month) << " " << day << "," << " " << year << "\n" << endl;
    }
/*********************************************************************
** Description: print3() outputs day,month(text),year. Calls monthName();
** Parameters: no parameters
*********************************************************************/

    void Date::print3()
    {
    cout << day << " " << monthName(month) << " " << year << "\n" << endl;
    }
/*********************************************************************
** Description: monthName() converts passed integer to respective month and returns text
** Parameters: int numIn - integer 1-12
*********************************************************************/

    string Date::monthName(int numIn)
    {

        /**** return month date based on integer passed ****/
        switch (numIn)
        {
            case 1:
            return "January";
            case 2:
            return "February";
            case 3:
            return "March";
            case 4:
            return "April";
            case 5:
            return "May";
            case 6:
            return "June";
            case 7:
            return "July";
            case 8:
            return "August";
            case 9:
            return "September";
            case 10:
            return "October";
            case 11:
            return "November";
            case 12:
            return "December";
        }


    }
