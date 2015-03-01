// Author: Steven Gentry
// Created:2/9/15
// Last Modified:
// Description:Point.cpp


#include <iostream>
#include <cmath>
#include  "Point.hpp"


   Point::Point()
   {

        setXCoord(0);
        setYCoord(0);

   }

    Point::Point(double xIn,double yIn)
    {
        setXCoord(xIn);
        setYCoord(yIn);
    }
    void Point::setXCoord(double xCoordIn)
    {
        xCoord= xCoordIn;
    }
    void Point::setYCoord(double yCoordIn)
    {
        yCoord=yCoordIn;
    }
    double Point::getXCoord() const
    {
        return xCoord;
    }
    double Point::getYCoord() const
     {
        return yCoord;
    }
    double Point::distanceTo( const Point &pointIn )
     {
        double x1,x2,y1,y2,sum;
        x1=getXCoord();
        x2=pointIn.getXCoord();
        y1=getYCoord();
        y2=pointIn.getYCoord();
        sum=pow((x2-x1),2)+pow(y2-y1,2); // calculate param. to square

        return sqrt(sum); // return distance **/

    }

