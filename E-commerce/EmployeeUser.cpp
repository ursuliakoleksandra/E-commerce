#include "EmployeeUser.h"
#include <iostream>




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


//void EmployeeUser::print() const
//{
//    User::print();
//    cout << "Position : " << position << endl <<
//        "Salary : " << salary << endl;
//    cout << "---------------------------------------------------" << endl;
//
//}

//EmployeeUser::~EmployeeUser(){}
