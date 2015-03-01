// Author: Steven Gentry
// Created:2/9/15
// Last Modified:
// Description:Supplies.cpp


#include <iostream>

#include "Supplies.hpp"


using namespace std;



int main()
{
int thing,watch,fram;
cout << "Enter amount of Thingamajigs, Watchamacallits, and Framistats."<< endl;
cout << "Separate numbers with a space.\n" << endl;
cin >> thing >> watch >> fram;
cout << endl;
Supplies mystuff(thing,watch,fram);
int choice=0;
do
{
    cout << "<1> Make Thing 1." << endl;
    cout << "<2> Make Thing 2." << endl;
    cout << "<3> Print out parts order." << endl;
    cout << "<4> Quit." << endl;
    cin >> choice;
 switch (choice)
 {
     int make1,make2;
     case 1:
     cout << " Enter amount to make of Thing 1." << endl;
     cin >> make1;
     mystuff.produceThing1(make1);
     break;
     case 2:
     cout << " Enter amount to make of Thing 2." << endl;
     cin >> make2;
     mystuff.produceThing2(make2);
     break;
     case 3:
     mystuff.printPartsOrder();




 }
}
while (choice !=4);
return 0;
}

    Supplies::Supplies()
    {
        setNumThingamajigs(100);
        setNumWatchamacallits(70);
        setNumFramistats (50);
    }

    Supplies::Supplies(int thingIn,int watchIn,int framIn)
    {
        setNumThingamajigs(thingIn);
        setNumWatchamacallits(watchIn);
        setNumFramistats (framIn);
    }

    void Supplies::setNumThingamajigs(int thingIn)
    {
       thingamajigs=thingIn;
    }
    void Supplies::setNumWatchamacallits(int watchIn)
    {
     watchamacallits=watchIn;
    }
    void Supplies::setNumFramistats (int framIn)
    {
     framistats=framIn;
    }
    void Supplies::printPartsOrder()
    {
        int order1=0,order2=0,order3=0;
        order1=100-thingamajigs;
        order2=70-watchamacallits;
        order3=50-framistats;
        cout << "Inventory status" << endl;
        cout << "Thingamajigs: " << thingamajigs << " " << "Need: " << order1 << endl;
        cout << "Watchamacallits: " << watchamacallits << " " << "Need: " << order2 << endl;
        cout << "Framistats: " << framistats << " " << "Need: " << order3 << endl << endl;
    }

    void Supplies::produceThing1(int make1)
    {
      cout << "Making Thing 1...\n" << endl;
      for (int i=1;i< make1;i++)
      {
        thingamajigs-=1;
        watchamacallits-=2;
        framistats-=1;

      }

    }
    void Supplies::produceThing2(int make2)
    {
        cout << "Making Thing 2...\n" << endl;
        for (int i=1;i< make2;i++)
        {
        thingamajigs-=2;
        framistats-=1;
        }

    }
