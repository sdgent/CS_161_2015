// Author: Steven Gentry
// Created:1-30-15
// Last Modified:
// Description:smallSort.cpp
// User inputs three integers in any order which are then passed to
// SortNums by reference and sorted then output to console.


#include <iostream>


using namespace std;

void SortNums (int&, int&, int&);



    int main()
{
    int num1,num2,num3;
    cout << "Enter three integers to sort, insert a space between each number." << endl;
    cin >> num1 >> num2 >> num3;
    SortNums(num1,num2,num3);
    cout << "Numbers in order: " << num1 << " " << num2 << " " << num3 << endl;

    return 0;
}

void SortNums (int& num1, int& num2, int& num3)
{
    int swapn=0;
        if (num2 < num1)
        {
            swapn = num1;
            num1 = num2;
            num2 = swapn;
        }

        if (num3 < num1)
        {
            swapn = num1;
            num1 = num3;
            num3 = swapn;
        }

        if (num3 < num2)
        {
            swapn = num2;
            num2 = num3;
            num3 = swapn;
        }


return;
}
