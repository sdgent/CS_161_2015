#ifndef  POINT_HPP
#define  POINT_HPP




class  Point
{
private:
    double xCoord;
    double yCoord;
public:

    Point();
    Point(double,double);
    void setXCoord(double);
    void setYCoord(double);
    double getXCoord()const ;
    double getYCoord()const ;
    double distanceTo( const Point&) ;
};


#endif
