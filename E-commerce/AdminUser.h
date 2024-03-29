#pragma once
#include "EmployeeUser.h"




class AdminUser final :  public EmployeeUser
{ 
private:
    string admin_id;
   int permission_level;
public:
    AdminUser(const string& new_name, const string& new_email, int age, const string& position,
        double salary,Order order, int permission_level, const string& admin_id);
    ~AdminUser() { cout << " Admin destructor" << endl; };
    void print() const override;
    int getPermissionLevel() const;
    string getAdminId() const;
    void hello() const override {
        cout << " hello Admin! " << endl;
    }
    virtual ~AdminUser();
};

