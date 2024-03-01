#include "Order.h"
#include <string>
#include <iostream>


string Order::getItems() const {
    return items;
}

double Order::getTotalPrice() const {
    return total_price;
}

string Order::getCurrency() const {
    return currency;
}

Order::Order(string new_items, double new_total, string new_currency)
    : items(new_items), total_price(new_total), currency(new_currency) {}

void Order::outputOrderInfo() const {
    cout << " Items : " << items << endl <<
        "Total Price : " << total_price << endl <<
        "Currency : " << currency << endl;
    cout << "---------------------------------------------------" << endl;
}