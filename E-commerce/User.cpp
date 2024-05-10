#include "User.h"
#include "Order.h"
#include <string>
#include <iostream>

using namespace std;


User::User(const string& new_name, const string& new_email, int new_age)
    : name_u(new_name), email(new_email), age(new_age) {
}


User::User(const User& other) 
: name_u(other.name_u), email(other.email), age(other.age) {}


string User::getName() const {
    return name_u;
}

string User::getEmail() const {
    return email;
}

int User::getAge() const {
    return age;
}

ostream& operator<<(ostream& os, const  User& user) {
    os << "Employee (Name: " << user.name_u <<
        ", Age: " << user.age <<
        ", Email: " << user.email << ")" << endl;
    return os;
}


  

