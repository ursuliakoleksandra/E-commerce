#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <vector>
#include <stdexcept>
#include "User.h"
#include "Product.h"
#include "Order.h"
#include "AdminUser.h"


enum class UserE {
    user, admin, undefined
};
enum class Database {
    administators, products, orders, undefined
};

UserE login() {
    string username;
    UserE usertype = UserE::undefined;

    cout << "*-*-*-*-*-*-*-Login-*-*-*-*-*-*-*" << endl;
    cout << "Input username: " << endl;
    cin >> username;

    if (username == "Vladik") {
        string password;
        cout << "Input password: " << endl;
        cin >> password;

        if (password == "admin123") {
            usertype = UserE::admin;
        }
        else {
            cout << "Incorrect credentials!" << endl;
        }
    }
    else {
        usertype = UserE::user;
    }

    cout << "Login successful!" << endl;
    return usertype;
}

void userActivity(string text)
{
    string fileName = "userActivity.txt";
    ofstream write;
    write.open(fileName, ios_base::app);
    if (!write.is_open()) {
        cerr << "File opening error!" << endl;
    }
    else {
        write << text << endl;
    }
    write.close();
}

Database selectDatabase() {
    int fileNumber;
    cin >> fileNumber;

    Database database;

    switch (fileNumber) {
    case 1:
        database = Database::administators;
        break;
    case 2:
        database = Database::products;
        break;
    case 3:
        database = Database::orders;
        break;
    default:
        cerr << "Invalid file number error!" << endl;
        database = Database::undefined;
        break;
    }
    return database;
}
string getDatabaseFile(Database database) {
    string fileName;

    switch (database) {
    case Database::administators:
        fileName = "administrators.txt";
        userActivity("User read from administrators.txt");
        break;
    case Database::products:
        fileName = "products.txt";
        userActivity("User read from products.txt");
        break;
    case Database::orders:
        fileName = "orders.txt";
        userActivity("User read from orders.txt");
        break;
    case Database::undefined:
        fileName = "";
        break;
    }
    return fileName;
}

AdminUser createAdministrator() {
    string name;
    int age;
    string email;
    string admin_id;
    cout << "Please input administrator data : " << endl;
    cout << "Name: ";
    cin >> name;
    cout << endl;
    cout << "Age: ";
    cin >> age;
    cout << endl;
    cout << "Email: ";
    cin >> email;
    cout << endl;
    cout << "Admin_id: ";
    cin >> admin_id;
    cout << endl;

    cout << "Administrator created" << endl;
    Order order();
    AdminUser administrator (name, email, age, admin_id);
    return administrator;
}

Product createProduct() {
    string name_p;
    double price;
    int quantity;
    cout << "Please input order data : " << endl;
    cout << "Name: ";
    cin >> name_p;
    cout << endl;
    cout << "Price: ";
    cin >> price;
    cout << endl;
    cout << "Quantity: ";
    cin >> quantity;
    cout << endl;

    cout << "Order created" << endl;
    Product product{ name_p, price, quantity };
    return product;
}

Order createOrder() {
    string items;
    double total_price;
    cout << "Please input order data : " << endl;
    cout << "Item: ";
    cin >> items;
    cout << endl;
    cout << "Price: ";
    cin >> total_price;
    cout << endl;

    cout << "Order created" << endl;
    Order order{ items, total_price };
    return order;
}
void readFromFile() {
    cout << "Please select database for reading:" << endl;
    cout << "1. Administrator" << endl;
    cout << "2. Product" << endl;
    cout << "3. Order" << endl;
    cout << "Please, select number of table" << endl;

    Database database = selectDatabase();

    if (database == Database::undefined) {
        throw std::invalid_argument("Invalid input type");
    }

    string fileName = getDatabaseFile(database);

    cout << "Reading from database..." << endl;

    ifstream read;
    read.open(fileName);

    if (!read.is_open()) {
        cerr << "File opening error!" << endl;
    }
    string buff;
    while (getline(read, buff)) {
        cout << buff << endl;
    }

    read.close();
    cout << "Reading from database finished." << endl;
}
void createAndWriteObject(Database database, ofstream& write) {
    switch (database) {
    case Database::administators:
        write << createAdministrator() << endl;
        userActivity("User wrote to administrators.txt");
        break;
    case Database::products:
        write << createProduct() << endl;
        userActivity("User wrote to employees.txt");
        break;
    case Database::orders:
        write << createOrder() << endl;
        userActivity("User wrote to orders.txt");
        break;
    }
}
void writeToFile() {
    cout << "Please select database for writing:" << endl;
    cout << "1. Administrator" << endl;
    cout << "2. Product" << endl;
    cout << "3. Order" << endl;
    cout << "Please, select number of table" << endl;

    Database database = selectDatabase();

    if (database == Database::undefined) {
        throw std::invalid_argument("Invalid input type");
    }
    string fileName = getDatabaseFile(database);

    cout << "Writing in database..." << endl;

    ofstream write;
    write.open(fileName, ios_base::app);

    if (!write.is_open()) {
        cerr << "File opening error!" << endl;
    }
    else {
        createAndWriteObject(database, write);
    }
    write.close();
    cout << "Writing in database finished." << endl;
}

void makeOrder() {
    userActivity("User ordered something");
    string fileName = "orders.txt";
    ofstream write;
    write.open(fileName, ios_base::app);
    if (!write.is_open()) {
        cerr << "File opening error!" << endl;
    }
    else {
        write << createOrder() << endl;
    }
    write.close();
}

int main()
{
    UserE usertype = login();

    if (usertype == UserE::admin) {
        cout << "You logged in as admin. You can read and write from database" << endl;
        cout << "Please select action: read | write" << endl;
        userActivity("\n Admin logged in to app \n");
    }
    else {
        cout << "You logged in as user. You can read from database" << endl;
        cout << "Please select action: read | order" << endl;
        userActivity("\n User logged in to app \n");
    }
    string action;
    bool appIsActive = true;
    while (appIsActive) {
        cout << "Your action -> ";
        cin >> action;
        if (action == "read") {
            readFromFile();
            continue;
        }
        else if (action == "write" && usertype == UserE::admin) {
            writeToFile();
            continue;
        }
        else if (action == "write" && usertype == UserE::user) {
            cout << "You have no rights for writing database" << endl;
        }
        else if (action == "order" && usertype == UserE::user) {
            cout << "-*-* Please, make an order *-*-" << endl;
            makeOrder();
            cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;

        }
        else if (action == "exit") {
            cout << "Exit..." << endl;
            appIsActive = false;
            break;
        }
        else {
            cout << "Incorrect action!" << endl;
            appIsActive = false;
            break;
        }
    }

    return 0;
}