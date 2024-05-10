#include "AdminUser.h"

AdminUser::AdminUser(const string& new_name, const string& new_email, int age, const string& admin_id)
    : User(new_name, new_email, age), admin_id(admin_id), order()
{
    cout << " Admin constructor" << endl;
}

AdminUser::AdminUser(const string& new_name, const string& new_email, int age, const string& admin_id, Order order)
    : User(new_name, new_email, age), admin_id(admin_id), order(order)
{
    cout << " Admin constructor" << endl;
}



string AdminUser::getAdminId() const {
    return admin_id;
}

ostream& operator<<(ostream& os, const  AdminUser& admin) {
    os << "Administrator (Name: " << admin.getName() << ", Age: " << admin.getAge() << ", Admin_ID: "
        << admin.admin_id << ")" << endl;
    return os;
}