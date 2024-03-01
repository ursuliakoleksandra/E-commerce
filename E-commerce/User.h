#pragma once
#include <string>

using namespace std;



class User
{
private:
    string name_u;
    string email;
    int age;

public:
    User(const string& new_name, const string& new_email, int age);
    string getName() const;
    string getEmail() const;
    int getAge() const;
    void outputUserInfo() const;
};

