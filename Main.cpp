// Main.cpp
#include <iostream>
#include "Product.h"
#include "Customer.h"
#include "ShoppingCart.h"

int main() {
    Product product1(1, "Leather Bag", 89.99);
    Product product2(2, "Canvas Tote", 49.99);

    Customer customer(101, "John Doe");

    ShoppingCart cart;
    cart.addProduct(product1);
    cart.addProduct(product2);

    std::cout << "Customer: " << customer.getName() << std::endl;
    cart.displayCart();

    return 0;
}
