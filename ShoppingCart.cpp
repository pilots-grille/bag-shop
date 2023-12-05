// ShoppingCart.cpp
#include <iostream>
#include "ShoppingCart.h"

void ShoppingCart::addProduct(const Product& product) {
    products.push_back(product);
}

double ShoppingCart::calculateTotal() const {
    double total = 0.0;
    for (const auto& product : products) {
        total += product.getPrice();
    }
    return total;
}

void ShoppingCart::displayCart() const {
    for (const auto& product : products) {
        std::cout << "Product: " << product.getName() << ", Price: " << product.getPrice() << std::endl;
    }
    std::cout << "Total: " << calculateTotal() << std::endl;
}
