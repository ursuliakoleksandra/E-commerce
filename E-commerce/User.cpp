#include "User.h"
#include <string>
#include <iostream>




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

void User::outputUserInfo() const
{
    cout << "User_name : " << name_u << endl <<
        "Age : " << age << endl <<
        "Email : " << email << endl;
    cout << "---------------------------------------------------" << endl;
}