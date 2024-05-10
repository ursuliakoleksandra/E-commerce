#pragma once
#include <iostream>
#include <cstring>


using namespace std;

class Printable
{   
    friend ostream& operator<<(ostream& os, const Printable& obj);
    friend istream& operator>>(istream& is, const Printable& obj);
public:
    virtual void output(ostream& os) const = 0;

    virtual ~Printable();
};

