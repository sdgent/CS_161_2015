// Author: Steven Gentry
// Created:2/6/15
// Last Modified:2/8/15
// Description:DiceCup.cpp
/***** Get user input: number of dice and number of dice faces. Main loop
gets number of rolls from user and outputs roll results.
********/

#include <iostream>
#include <cstdlib>  // required for rand() function
#include <ctime>    // required for time seed
#include "DiceCup.hpp"


using namespace std;

int main()
{
int output,diceIn,faceIn,rolls,i=0;
srand (time(NULL)); // random seed

// get user input
cout << "Enter number of dice." << endl;
cin >> diceIn;
cout << "Enter number of faces." << endl;
cin >> faceIn;

/*** create DiceCup object ***/
DiceCup cup1(diceIn,faceIn);

cout << "Enter number of rolls" << endl;
cin >> rolls;
cout << "**********************" << endl;

// output roll results

    while (i < rolls)
    {
    output=cup1.rollDice();
    i++;
    cout << "Roll " << i << " = " << output << endl;
    }

cout << "**********************" << endl;

return 0;
}

// default constructor
DiceCup::DiceCup()
{
 setNumDice(1);
 setNumFaces(2);
}

// user input constructor
DiceCup::DiceCup(int diceIn,int faceIn)
{
    setNumDice(diceIn);
    setNumFaces(faceIn);
}

// get and set methods
void DiceCup::setNumDice(int diceIn)
{
   // check for negative value, exit if true
  if (diceIn < 0)
  {
        numDice=0;
        cout << "Dice number input error." << endl;
        exit (EXIT_FAILURE);
  }
  else
  numDice=diceIn;
}

void DiceCup::setNumFaces(int faceIn)
{

    // check for negative value, exit if true
    if (faceIn <0)
    {
        numFaces=0;
        cout << "Face number input error." << endl;
        exit (EXIT_FAILURE);
    }
        else
        numFaces=faceIn;
}
/*********************************************************************
** Description: rollDice() calculate dice roll based on number of dice and
number of faces entered
** Parameters: no parameters
*********************************************************************/

int DiceCup::rollDice()
{

    int dieValue=0,dieTotal=0;

    // loop for number of dice
    for (int i=1; i <= numDice;i++)
    {
        /*********************************
        random dice result. range based on
        number of faces entered
        *********************************/
        dieValue  = rand() % numFaces + 1;
        dieTotal += dieValue;  // calculate result
    }

    return dieTotal;

}
