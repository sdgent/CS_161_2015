#ifndef HERO_HPP
#define HERO_HPP

class Hero
{
private:
    int strength;
    int hitPoints;
    int speed;
    int money;

public:
    Hero();
    Hero(int,int,int,int);
    void  setStrength(int);
    void  setHitPoints(int);
    void  setSpeed(int);
    void  setMoney(int);
    int   getStrength();
    int   getHitPoints();
    int   getSpeed();
    int   getMoney();
    bool  takeDamage(int);
    void  printStats();
};









#endif
