#pragma once
#include "User.h"





class EmployeeUser : public User
{
private:
     string position;
	 double salary;
	 Order order;
public:
	 EmployeeUser(const string& new_name, const string& new_email, int age, const string& position, double salary, Order order);
	 EmployeeUser(const EmployeeUser& other);
	 /*void print() const override;*/
	
	 string getPosition() const;
     double getSalary() const;
	 ~EmployeeUser() { cout << " Employee destructor" << endl; };
	 void hello() const {
		 cout << " hello Employee! " << endl;
	 }
	 /*~EmployeeUser();*/
};

