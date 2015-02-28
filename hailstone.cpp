// Author: Steven Gentry
// Created:1/26/151
// Last Modified:
// Description:hailstone.cpp

#include <iostream>

using namespace std;

int HailCount(int);

int main()
{
  int startnum;
  cout << "Enter start number: " << endl;
  cin >> startnum;
  cout << HailCount(startnum) << " iterations.";



    return 0;
}

int HailCount(int number)
{
 int count=0;
while (number != 1)
  {
   if (number%2 == 0)
   {
     number=number/2;
     cout << number << " " << endl;
   }
   else
   {
     number =(number*3)+1;
     cout << number << " " << endl;
   }
   count++;
  }
  return count;
}

