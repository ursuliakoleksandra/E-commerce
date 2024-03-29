#pragma once
#include <string>
#include "Printable.h"

using namespace std;




class Order
{
private:
	friend ostream& operator<<(ostream& os, const Order& obj);
	string items;
	double total_price;
	string currency;
public:
	Order(const Order &other);
	Order(Order &&other) noexcept;
	Order(string items, double total_price, string currency);
	



	/* Order(string new_items = "None", double new_total = 0, string new_currency = "Unknown");
	string getItems() const;
	double getTotalPrice() const;
	string getCurrency() const; */

};

