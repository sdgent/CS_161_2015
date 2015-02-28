// Author: Steven Gentry
// Created:
// Last Modified:
// Description:Item.cpp


#include <iostream>
#include <string>
#include "Item.hpp"
using namespace std;

Item::Item()
{
    setName("");
    setPrice(0.0);
    setQuantity(0);
}
Item::Item(string nameIn,double priceIn,int quantIn)
{
    setName(nameIn);
    setPrice(priceIn);
    setQuantity(quantIn);
}
    string Item::getName()
    {
        return name;
    }
    double Item::getPrice()
    {
        return price;
    }
    int Item::getQuantity()
    {
        return quantity;
    }
    void Item::setName(string nameIn)
    {
        name=nameIn;
    }

    void Item::setPrice(double priceIn)
    {
        price=priceIn;
    }
    void Item::setQuantity(int quantIn)
    {
        quantity=quantIn;
    }




