#ifndef DATE_HPP
#define DATE_HPP


#include <string>

class Date
{
private:
    int month;
    int day;
    int year;
    std::string monthName(int);
public:
    Date();
    Date(int,int,int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    void print1();
    void print2();
    void print3();





};

#endif
