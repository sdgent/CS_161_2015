// Author: Steven Gentry
// Created:1-31-15
// Last Modified:
// Description:isPalindrome.cpp


#include <iostream>
#include <string>


using namespace std;
bool CheckPalin(string);


    int main()
{
    string userinp;
    bool palflag;
    cout << "Enter in a string." << endl;
    getline (cin,userinp);
    palflag = CheckPalin(userinp);
    if (palflag == true)
    {
        cout << "String is a Palindrome." << endl;
    }
    else
    {
        cout << "String is not a Palindrome." << endl;
    }
   return 0;
}

bool CheckPalin(string instr)
    {

    unsigned i=0,strsize;
    string tempstr,chkstr;
    strsize = instr.length();

    while (i <strsize)

        {
         tempstr = instr.at(i) ;
         chkstr = tempstr + chkstr;
         i++;
        }
         if (instr == chkstr)
         {
             return true;
         }
         else
         {
             return false;
         }

    }

