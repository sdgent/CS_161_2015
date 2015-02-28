// Author: Steven Gentry
// Created:1-31-15
// Last Modified:
// Description:isPrime.cpp
// user inputs number and program output is\f number is prime


#include <iostream>



using namespace std;
int PrimeCheck(int);


    int main()
{
    int number;
    bool primeflag;
    cout << "Enter an integer for the prime check." << endl;
    cin >> number;
    primeflag = PrimeCheck(number);
    if (primeflag == true)
    {
        cout << "Number is prime." << endl;
    }
    else
    {
        cout << "Number is not prime." << endl;
    }

   return 0;
}

int PrimeCheck (int num)
    {

        int i = 3;
        if (num == 1 || num == 2)
        {
            return true;
        }


        if ( num%2 == 0)
        {
            return false;
        }
        while ( i <= num-1)

        {
           if (num%i == 0)
            {

           return false;
           }
           i+=2;

        }
     return true;
    }
