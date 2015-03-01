// Author: Steven Gentry
// Created:2/9/15
// Last Modified:2/10/15
// Description:LineSegment.cpp


#include <iostream>


//#include "Point.cpp" // This will not compile under codeblocks


#include "LineSegment.hpp"



using namespace std;

//default constructor





LineSegment::LineSegment(double x, double y, double x1, double y1)
{

setEnd1(x,y);
setEnd2(x1,y1);




}


//mutators
void LineSegment::setEnd1( double x, double y)

{

endPoint1.setXCoord(x);
endPoint1.setYCoord(y);
}
void LineSegment::setEnd2( double x, double y)
{

endPoint2.setXCoord(x);
endPoint2.setYCoord(y);
}



double LineSegment::length()
{
return endPoint1.distanceTo(endPoint2);
}
double LineSegment::slope()
{

//calculate slope
double x1,x2,y1,y2,m;
x1=endPoint1.getXCoord();
x2=endPoint2.getXCoord();
y1=endPoint1.getYCoord();
y2=endPoint2.getXCoord();

m=(y2-y1)/(x2-x1);
return m;

}



int main()
{
int x,y,x1,y1;

cout << "Enter Starting point values separated by a space." << endl;
cin >> x >> y;


cout << "Enter Ending point values separated by a space." << endl;
cin >> x1 >> y1;
LineSegment  myline(x,y,x1,y1);
cout << "Length = " << myline.length() << endl;

cout << "Slope = " << myline.slope() << endl;
//input first point
//input second point
//create line segment object
//get line length
//get line slope--check for infinity
// output slope, length.

return 0;
}

