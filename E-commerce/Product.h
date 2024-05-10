#pragma once
#include <string>
#include "Printable.h"

using namespace std;



class Product : public Printable
{
private:
    string name_p;
    double price;
    int quantity;
    static int totalCount;

public:
    friend ostream& operator<<(ostream& os, const Product& product);
    friend istream& operator>>(istream& is, Product& product);
    Product();
    Product(string name);
    Product(string name, double price);
    Product(string name, double price, int quantity);
    ~Product();

    void output(ostream& os) const override;
    string getProductName() const;
    double getPrice() const;
    int getQuantity() const;
    static int getTotalCount();

};


