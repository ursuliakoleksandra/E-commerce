#include "User.h"
#include <string>
#include <iostream>

using namespace std;


User::User(const string& new_name, const string& new_email, int new_age)
    : name_u(new_name), email(new_email), age(new_age) {}

string User::getName() const {
    return name_u;
}

string User::getEmail() const {
    return email;
}

int User::getAge() const {
    return age;
}



ostream& operator<<(ostream& os, const User& obj)
{
    os << "User name: " << obj.name_u << endl << "User email: " << obj.email << endl << "User age: " << obj.age << endl;
    return os;
}
