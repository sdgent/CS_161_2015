#ifndef CAR_HPP
#define CAR_HPP

#include <string>

class Car
{
private:
    int year;
    std::string make;
    int speed;

public:
    Car();
    Car(int,std::string);
    void setYear(int);
    void setMake(std::string);
    void setSpeed(int);
    int getSpeed();
    void accelerate();
    void brake();



};









#endif
