#ifndef SHOPCART_HPP
#define SHOPCART_HPP

#include <vector>
#include <string>
#include "Item.hpp"

class ShopCart

{
    private:
        Item myItem;
        std::vector<Item> Itemvector;

    public:
        void addItem(std::string,double,int);
        void listContents();
        double totalPrice();

};


#endif // SHOPCART_HPP
