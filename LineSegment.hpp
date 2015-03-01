#ifndef  LINESEGMENT_HPP
#define  LINESEGMENT_HPP

//requires include Point.hpp CB

#include "Point.hpp"
class LineSegment
{
private:
Point endPoint1;
Point endPoint2;

public:
LineSegment();
LineSegment(double,double,double,double);
void setEnd1(double,double);
void setEnd2(double ,double);
Point getEnd1();
Point getEnd2();

double length();
double slope();

};








#endif
