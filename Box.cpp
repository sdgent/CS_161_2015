// Author: Steven Gentry
// Created:2-4-15
// Last Modified:2-8-15
// Description:Box.cpp
// Gets 3 double values from user, sets these to height,width, and length.
// outputs volume and surface area


#include <iostream>
#include <cstdlib> // Needed for exit function.
#include "Box.hpp"


using namespace std;



int main()
{
double height,width,length;

// User input
cout << "Enter height, width, and length separated by spaces." << endl;
cin >> height >> width >> length;


 Box box1(height,width,length); // create object

cout << "Volume= " << box1.getVolume() << endl;
cout << "Surface Area= " << box1.getSurfaceArea() << endl;


return 0;
}
// default constructor
Box::Box()
{
        setHeight(1);
        setWidth(1);
        setLength(1);
}
// constructor for input values
Box::Box(double heightIn,double widthIn,double lengthIn)
{

        setHeight(heightIn);
        setWidth(widthIn);
        setLength(lengthIn);
}

// set and get methods
void Box::setHeight(double heightIn)
{
        if (heightIn < 0)
            {
            height=0;
            cout << "Invalid input for height." << endl;
            exit(EXIT_FAILURE);
            }

        else
        height=heightIn;
}

void Box::setWidth (double widthIn)
{
        if (widthIn < 0)
        {
        widthIn = 0;
        cout << "Invalid input for width." << endl;
        exit(EXIT_FAILURE);
        }

        else
        width=widthIn;
}

void Box::setLength (double lengthIn)
{
        if (lengthIn <0)
        {
        lengthIn = 0;
        cout << "Invalid input for length." << endl;
        exit(EXIT_FAILURE);
        }
        else
        length=lengthIn;
}
/*********************************************************************
** Description:getVolume() returns product of height,length,width (double)

** Parameters:no parameters
*********************************************************************/
double Box::getVolume()
{
        return height*length*width;
}
/*********************************************************************
** Description:getSurfaceArea returns surface area-2lw*2lh*2wh (double)
** Parameters: no parameters
*********************************************************************/
double Box::getSurfaceArea()
{
    return (2*length*width)+(2*length*height)+(2*width*height);
}
