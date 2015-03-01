#ifndef SUPPLIES_HPP
#define SUPPLIES_HPP


class Supplies
{
private:
  int thingamajigs;
  int watchamacallits;
  int framistats;
public:
  Supplies();
  Supplies(int,int,int);
  void setNumThingamajigs(int);
  void setNumWatchamacallits(int);
  void setNumFramistats (int);
  void printPartsOrder();
  void produceThing1(int);
  void produceThing2(int);
};









#endif

