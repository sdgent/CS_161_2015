// Author: Steven Gentry
// Created:2/21/15
// Last Modified:2/22/15
// Description:ShopCart.cpp


#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


#include "ShopCart.hpp"


using namespace std;
void ShopCart::addItem(string nameIn, double priceIn, int quantIn )

{
Item temp;
temp.setName(nameIn);
temp.setPrice(priceIn);
temp.setQuantity(quantIn);
Itemvector.push_back(temp);
}
void ShopCart::listContents()
{
int vectsize;
Item temp;
 vectsize=Itemvector.size();   //get size of vector
 for (int i=0; i < vectsize;i++)   //add create for loop of vector size
{
 temp=Itemvector.at(i);
cout << setprecision(2) << fixed;
cout<< "Name of item is: " << temp.getName() <<endl;
cout<< "Price of item: " << temp.getPrice() <<endl;
cout<< "Number of items: " << temp.getQuantity()<<endl << endl;
// output to console;

}

}
double ShopCart::totalPrice()
{
Item temp;
double priceTotal,pricetemp;
int itemtemp;
int vectsize;
vectsize=Itemvector.size();   //get size of vector
for (int i=0; i < vectsize;i++)   //add create for loop of vector size

    {
     temp=Itemvector.at(i);
     cout << setprecision(2) << fixed;
    itemtemp=temp.getQuantity(); //get number of items
    pricetemp=temp.getPrice();   //get price
    pricetemp=itemtemp*pricetemp;//total price of items
    priceTotal+=pricetemp; //add to total of all items in vector

    }
    return priceTotal;

}

int main()
{
bool quit=false;
string nameIn;
double priceIn;
int quantIn;
ShopCart myCart;
unsigned choice;



do
{
cout << "<1>  Add Item." << endl;
cout << "<2>  List Contents." <<endl;
cout << "<3>  Total Price." << endl;
cout << "<4>  Quit." <<endl;



 if (cin >> choice )
    {
        switch (choice)

                {

                case 1:
                    cout << "Enter item name."<<endl;
                    cin >> nameIn;
                    cout << "Enter price."<<endl;


                         if (cin >> priceIn)
                        cout << "Enter quantity."<<endl;
                            else
                    {
                        cout << "Invalid Input" << endl;
                        cin.clear();
                        cin.ignore(256, ' ');


                    }




                    if(cin>> quantIn)
                    {
                        myCart.addItem(nameIn,priceIn,quantIn);
                        break;
                    }
                       else
                    {
                        cout << "Invalid Input" << endl;
                        cin.clear();
                        cin.ignore(256, ' ');
                        break;

                    }
                case 2:
                    myCart.listContents();
                    break;
                case 3:
                    double totalprice;
                    totalprice=myCart.totalPrice();
                    cout << endl;
                    cout << "Total price is: " << totalprice << endl << endl;

                    break;
                case 4:
                    quit=true;
                    break;
                default:
                    cout << "Invalid Input. Enter <1-4>" << endl;
                }

              }
            else
                {
                 cout << "Invalid Input. Enter <1-4>" << endl;
                 cin.clear();
                 cin.ignore(256, ' ');

                }




}
while (quit==false);


return 0;
}
