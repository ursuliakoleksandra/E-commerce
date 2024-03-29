#include "Order.h"
#include <string>
#include <iostream>


/* string Order::getItems() const {
    return items;
}

double Order::getTotalPrice() const {
    return total_price;
}

string Order::getCurrency() const {
    return currency;
} */

Order::Order(const Order
    & other) {
    items = other.items;
    total_price = other.total_price;
}

Order::Order(Order
    && other) noexcept {
    items = move(other.items);
    total_price = other.total_price;
    other.total_price = 0;
}

Order::Order(string items, double total_price, string currency) {
    this->items = items;
    this->total_price = total_price;
    this->currency = currency;
}

void Order::outputOrderInfo() const {
    cout << " Items : " << items << endl <<
        "Total Price : " << total_price << endl <<
        "Currency : " << currency << endl;
    cout << "---------------------------------------------------" << endl;
}