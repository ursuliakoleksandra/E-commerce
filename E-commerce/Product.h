#pragma once
#include <string>

using namespace std;



class Product
{
private:
    string name_p;
    double price;
    int quantity;
    static int totalCount;

public:
    Product();
    Product(string name);
    Product(string name, double price);
    Product(string name, double price, int quantity);
    ~Product();


    string getProductName() const;
    double getPrice() const;
    int getQuantity() const;
    void outputProductInfo() const;
    static int getTotalCount();
};

