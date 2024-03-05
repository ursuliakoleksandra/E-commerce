#pragma once
#include <string>
#include <iostream>

using namespace std;



class User
{
private:
    friend ostream& operator<<(ostream &os, const User &obj);
    string name_u;
    string email;
    int age;

public:
    User(const string& new_name, const string& new_email, int age);
    string getName() const;
    string getEmail() const;
    int getAge() const;
};

