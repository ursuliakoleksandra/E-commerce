#pragma once
#include <string>
#include "Printable.h"

using namespace std;




class Order : public Printable
{
private:
	string items;
	double total_price;
public:
	friend ostream& operator<<(ostream& os, const Order& order);
	friend istream& operator>>(istream& is, Order& order);
	Order() { items = ""; total_price = 0; }
	Order(const Order& other);
	Order(string items, double total_price);
	void output(ostream& os) const override;
	//string getItems() const;
	//string getTotal_price() const;

};

