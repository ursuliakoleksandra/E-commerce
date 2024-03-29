#pragma once
#include <string>
#include <iostream>
#include "Order.h"
#include "Printable.h"

using namespace std;



class User : public Printable
{
private:
    string name_u;
    string email;
    int age;

public:
    User(const string& new_name, const string& new_email, int age);
    User(const User& other);
    string getName() const;
    string getEmail() const;
    int getAge() const;
    ~User() { cout << " User destructor" << endl; };
    void print() const override;
    virtual void hello() const {
        cout << " hello User! " << endl;
    }
    virtual ~User();
};



