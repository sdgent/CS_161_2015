// Author: Steven Gentry
// Created:1-31-15
// Last Modified:
// Description:falldistance.cpp
// program that calculates how far an object has fallen based on
// number of seconds input by user


#include <iostream>
#include <cmath>

using namespace std;
const double GRAVITY = 9.8;
double FallCalc(double);

    int main()
{

    double falltime,distance;
    cout <<"Enter the number of seconds of falling object" << endl;
    cin >> falltime;
    distance = FallCalc(falltime);
    cout << "Object has fallen " << distance << " meters. " << endl;

    return 0;
}

double FallCalc (double ftime)

{


     return  .5*GRAVITY * pow(ftime,2);

}
