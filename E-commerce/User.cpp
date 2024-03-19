#include "User.h"
#include "Order.h"
#include <string>
#include <iostream>

using namespace std;


User::User(const string& new_name, const string& new_email, int new_age)
    : name_u(new_name), email(new_email), age(new_age) {
    cout << " User constructor" << endl;
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

ostream& operator<<(ostream& os, const User& obj)
{
    os << "User name: " << obj.name_u << endl << "User email: " << obj.email << endl << "User age: " << obj.age << endl;
    return os;
}

  
EmployeeUser::EmployeeUser(const string& new_name, const string& new_email, int age, const string& position, double salary, Order order)
    : User(new_name, new_email, age), position(position), salary(salary), order(order) {
    cout << " Employee constructor" << endl;
}


string EmployeeUser::getPosition() const {
    return position;
}


double EmployeeUser::getSalary() const {
    return salary;
}

EmployeeUser::EmployeeUser(const EmployeeUser& other) 
    : User(other), position(other.position), salary(other.salary), order(other.order) {}

AdminUser::AdminUser(const string& new_name, const string& new_email, int age, const string& position, double salary, Order order , int permission_level, const string& admin_id)
    : EmployeeUser(new_name, new_email, age, position, salary, order ), permission_level(permission_level), admin_id(admin_id) {
    cout << " Admin constructor" << endl;
}



int AdminUser::getPermissionLevel() const {
    return permission_level;
}



string AdminUser::getAdminId() const {
    return admin_id;
}