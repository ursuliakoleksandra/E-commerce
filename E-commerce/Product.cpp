#include "product.h"
#include <string> 
#include <iostream>

string Product::getProductName() const
{
    return name_p;
}

int Product::getQuantity() const
{
    return quantity;
}

double Product::getPrice() const
{
    return price;
}

Product::Product()
    : Product{ "None",0,0 } {}

Product::Product(string name_p)
    : Product{ name_p,0,0 } {}

Product::Product(string name_p, double price)
    : Product{ name_p, price,0 } {}

Product::Product(string name_p, double price, int quantity)
    : name_p(name_p), price(price), quantity(quantity) {}

Product::~Product() {}

void Product::outputProductInfo() const
{
    cout << "Product_name : " << name_p << endl <<
        "Price : " << price << endl <<
        "Quantity : " << quantity << endl;
    cout << "---------------------------------------------------" << endl;

}