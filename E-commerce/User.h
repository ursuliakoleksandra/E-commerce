#pragma once
#include <string>
#include <iostream>
#include "Order.h"
#include "Printable.h"

using namespace std;



class User  
{
private:
    string name_u;
    string email;
    int age;

public:
    friend ostream& operator<<(ostream& os, const User& user);
    User(const string& new_name, const string& new_email, int age);
    User(const User& other);
    string getName() const;
    string getEmail() const;
    int getAge() const;
    ~User() {};
    
};



