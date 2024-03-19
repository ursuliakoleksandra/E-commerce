#pragma once
#include <string>
#include <iostream>
#include "Order.h"

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
    User(const User& other);
    string getName() const;
    string getEmail() const;
    int getAge() const;
    ~User() { cout << " User destructor" << endl; };
};



class EmployeeUser : public User
{
private:
    string position;
    double salary;
    Order order;
public:
    EmployeeUser(const string& new_name, const string& new_email, int age, const string& position, double salary, Order order);
    EmployeeUser(const EmployeeUser& other);
    string getPosition() const;
    double getSalary() const;
    ~EmployeeUser() { cout << " Employee destructor" << endl; };
};



class AdminUser : public EmployeeUser
{
private:
    string admin_id;
    int permission_level;
public:
    AdminUser(const string& new_name, const string& new_email, int age, const string& position,
        double salary,Order order, int permission_level, const string& admin_id);
    ~AdminUser() { cout << " Admin destructor" << endl; };
    int getPermissionLevel() const;
    string getAdminId() const;

};