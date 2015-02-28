// Author: Steven Gentry
// Created:2/18/15
// Last Modified:
// Description:caesar.cpp


#include <iostream>
#include <cstring>


using namespace std;

void offsetString(char [],int);



int main()
{
    char inString[100];
    int offset;
    cout << "Enter in string."<<endl;
    cin.getline(inString, 100);
    cout << "Enter in offset. (1-26)"<<endl;
    cin >> offset;
    offsetString(inString,offset);







   return 0;
}

void offsetString(char inString[],int offset)
{

int letter=0,strSize;
strSize = strlen(inString);

        for(int i=0;i< strSize;i++)
        {
            letter=(int)inString[i];
                if(letter >=65 || letter <=90 || letter >=97 || letter <=122)
                      inString[i]=inString[i]+offset;

        }
         cout << "Offset string is: "<<inString << endl;
}



