#pragma once
#include <string>

using namespace std;




class Order
{
private:
	string items;
	double total_price;
	string currency;
public:
	Order(string new_items = "None", double new_total = 0, string new_currency = "Unknown");


	string getItems() const;
	double getTotalPrice() const;
	string getCurrency() const;
	void outputOrderInfo() const;

};

