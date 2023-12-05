// ShoppingCart.h
#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <vector>
#include "Product.h"

class ShoppingCart {
public:
    void addProduct(const Product& product);
    double calculateTotal() const;
    void displayCart() const;

private:
    std::vector<Product> products;
};

#endif // SHOPPING_CART_H
