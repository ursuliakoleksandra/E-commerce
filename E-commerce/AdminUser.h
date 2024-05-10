#pragma once
#include "EmployeeUser.h"




class AdminUser :  public User
{ 
private:
    string admin_id;
    Order order;
public:
    friend ostream& operator<<(ostream& os, const AdminUser& admin);
    AdminUser(const string& new_name, const string& new_email, int age, const string& admin_id);
    AdminUser(const string& new_name, const string& new_email, int age, const string& admin_id, Order order);
    ~AdminUser() {};
    string getAdminId() const;
    
};