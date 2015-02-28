#ifndef BOX_HPP
#define BOX_HPP

class Box
{
private:
    double height;
    double width;
    double length;

public:
    Box ();
    Box (double,double,double);
    void setHeight(double);
    void setWidth(double);
    void setLength(double);
    double getVolume();
    double getSurfaceArea();
};




#endif
