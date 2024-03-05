#include <iostream>
#include "User.h"
#include "Product.h"
#include "Order.h"



int main()
{
    User user1("John", "john@example.com", 27);
    User user2("Tomas", "tomas@example.com", 21);
    cout << user1 << endl;
    cout << user2 << endl;

    const Product product1("kyeboard", 3000, 2);
    Product product2("mouse", 2500, 3);
    product1.outputProductInfo();
    product2.outputProductInfo();

    Order order1("keyboard, mouse", 5500, "USD" );
    order1.outputOrderInfo();

    cout << "Total products: " << Product::getTotalCount() << endl;
}