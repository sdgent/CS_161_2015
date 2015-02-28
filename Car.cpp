// Author: Steven Gentry
// Created:2/9/15
// Last Modified:
// Description:Car.cpp


#include <iostream>
#include <string>
#include "Car.hpp"


using namespace std;



int main()
{
    int yearIn;
    string makeIn;
    cout << "Enter year and make separated by a space." << endl;
    cin >> yearIn >> makeIn;
    Car mycar(yearIn, makeIn);

    int choice = 0;
do
{
 cout<< endl << "Current speed is:  " << mycar.getSpeed() << endl;
 cout << "Enter 1 to accelerate." << endl;
 cout << "Enter 2 to brake." << endl;
 cout << "Enter 3 to quit." << endl;
  cin >> choice;

 if (choice==1)
         mycar.accelerate();
 else if (choice ==2)
         mycar.brake();

}

while (choice != 3);
return 0;
}

Car::Car()
{
    setYear(0);
    setMake("");
    setSpeed(0);
}


Car::Car(int yearIn, string makeIn)
{
    setYear(yearIn);
    setMake(makeIn);
    setSpeed(0);
}
void Car::setYear(int yearIn)
{
year=yearIn;
}
void Car::setMake(string makeIn)
{
make=makeIn;
}
void Car::setSpeed(int speedIn)
{
speed=speedIn;
}
int Car::getSpeed()
{
return speed;
}
void Car::accelerate()
{
if (speed < 80)
    speed+=10;

else
    cout << "Maximum speed of 80 reached" << endl;

}
void Car::brake()
{
    if (speed >=1)
    {
    speed-=10;
    }

    else if (speed <=0)
        cout << "Minimum speed of 0 reached" << endl;

}



