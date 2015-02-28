// Author: Steven Gentry
// Created:2/5/2015
// Last Modified:2/07/15
// Description:Hero.cpp
/******* Gets user input to set initial hero stats and outputs to console
 main loop gets damage input and continues loop until hit points are <=0
then output message that hero has died *****/


#include <iostream>
#include "Hero.hpp"


using namespace std;

int main()
{
int strengthIn1,hitPointsIn1,speedIn1,moneyIn1,damageIn1;
bool alive=true;

// input hero attributes
cout << "*****************" << endl;
cout << "Hero Attributes:" << endl;
cout << "*****************" << endl;
cout <<"Enter strength." << endl;
cin >> strengthIn1;
cout <<"Enter hit points." << endl;
cin >> hitPointsIn1;
cout <<"Enter speed." << endl;
cin >> speedIn1;
cout <<"Enter money." << endl;
cin >> moneyIn1;

// Create a hero object
Hero hero1(strengthIn1,hitPointsIn1,speedIn1,moneyIn1);

// get damage input loop until hero dies
    do
    {
    hero1.printStats();
    cout << "Enter Hero damage." << endl;
    cin >> damageIn1;
    alive = hero1.takeDamage(damageIn1);

    }
    while (alive == true);
cout << "**************************************" << endl;
cout << "****** Your hero has perished! *******" << endl;
cout << "**************************************" << endl;


   return 0;
}

    // default constructor
    Hero::Hero()
    {
    setStrength(1);
    setHitPoints(1);
    setSpeed(1);
    setMoney(1);
    }

    // retrieve user input constructor
    Hero::Hero(int strengthIn,int hitPointsIn,int speedIn,int moneyIn)
    {
        setStrength(strengthIn);
        setHitPoints(hitPointsIn);
        setSpeed(speedIn);
        setMoney(moneyIn);
    }

    // get and set methods
    void Hero:: setStrength(int strengthIn)
    {
        strength=strengthIn;
    }
    void Hero:: setHitPoints(int hitPointsIn)
    {
        hitPoints=hitPointsIn;
    }

    void Hero:: setSpeed(int speedIn)
    {
        speed=speedIn;
    }
    void Hero:: setMoney(int moneyIn)
    {
        money=moneyIn;
    }
    int  Hero:: getStrength()
    {
        return strength;
    }
    int  Hero:: getHitPoints()
    {
        return hitPoints;
    }
    int  Hero:: getSpeed()
    {
        return speed;
    }

    int  Hero:: getMoney()
    {
        return money;
    }

    /*********************************************************************
    ** Description: takeDamage() get damage value from  user, compute hero
    hit points return bool true/false
    ** Parameters: int damageIn - damage input from user
    *********************************************************************/

    bool Hero:: takeDamage(int damageIn)
    {

        int temphp; // holder for member hit points value
        temphp=getHitPoints();
        temphp=temphp-damageIn; //subtract damage from hero hit points
        setHitPoints(temphp); // set new hit points value
        if (hitPoints <=0)
            return false; // hero has died
        else
            return true; // hero still alive

    }
    /*********************************************************************
    ** Description: printStats() output hero attributes
    ** Parameters: no parameters
    *********************************************************************/

    void Hero::printStats()
    {
        cout << "*****************" << endl;
        cout << "Strength = " << strength << endl;
        cout << "Hit points = " << hitPoints << endl;
        cout << "Speed = " << speed << endl;
        cout << "Money = " << money << endl;
        cout << "*****************" << endl;
    }
