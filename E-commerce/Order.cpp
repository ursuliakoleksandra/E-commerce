#include "Order.h"
#include <string>
#include <iostream>



Order::Order(const Order
    & other) {
    items = other.items;
    total_price = other.total_price;
}



Order::Order(string items, double total_price) {
    this->items = items;
    this->total_price = total_price;
}


ostream& operator<<(ostream& os, const Order& order) {
    os << "Item: " << order.items << endl <<
        "Total price: " << order.total_price << endl <<
        "-------------------------------------" << endl;
    os << "Order (Item: " << order.items <<
        ", Total price: " << order.total_price << ")" << endl;
    return os;
}

void Order::output(ostream& os) const {
    cout << "Item: " << items << endl <<
        "Price: " << total_price << endl;
    cout << "-------------------------------------" << endl;
}
istream& operator>>(istream& is, Order& order) {
    cout << "Enter item: " << endl;
    is >> order.items;
    cout << "Enter Total price: " << endl;
    is >> order.total_price;
    return is;
}