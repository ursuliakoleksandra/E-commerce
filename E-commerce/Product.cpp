#include "Product.h"
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

int Product::totalCount = 0;

Product::Product()
    : Product{ "None",0,0 } {}

Product::Product(string name_p)
    : Product{ name_p,0,0 } {}

Product::Product(string name_p, double price)
    : Product{ name_p, price,0 } {}

Product::Product(string name_p, double price, int quantity)
    : name_p(name_p), price(price), quantity(quantity) {
    totalCount++;
}

Product::~Product() {}



int Product::getTotalCount() {
    return totalCount;
}

ostream& operator<<(ostream& os, const Product& order) {
    os << "Product: " << order.name_p << endl <<
        "Price: " << order.price << endl <<
        "Quantity: " << order.quantity << endl <<
        "-------------------------------------" << endl;
    return os;
}

void Product::output(ostream& os) const {
    cout << "Product: " << name_p << endl <<
        "Price: " << price << endl <<
        "Quantity: " << quantity << endl;
    cout << "-------------------------------------" << endl;
}

istream& operator>>(istream& is, Product& product) {
    cout << "Enter poduct: " << endl;
    is >> product.name_p;
    cout << "Enter Price: " << endl;
    is >> product.price;
    cout << "Enter Quantity: " << endl;
    is >> product.quantity;
    return is;
}