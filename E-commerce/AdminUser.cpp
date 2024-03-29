#include "AdminUser.h"




AdminUser::AdminUser(const string& new_name, const string& new_email, int age, const string& position, double salary, Order order, int permission_level, const string& admin_id)
    : EmployeeUser(new_name, new_email, age, position, salary, order), permission_level(permission_level), admin_id(admin_id) {
    cout << " Admin constructor" << endl;
}


int AdminUser::getPermissionLevel() const {
    return permission_level;
}


string AdminUser::getAdminId() const {
    return admin_id;
}

void AdminUser::print() const
{   
    User::print();
    cout << "Admin_Id : " << admin_id << endl <<
        "Permission_level : " << permission_level << endl;
    cout << "---------------------------------------------------" << endl;

}