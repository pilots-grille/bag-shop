// Product.h
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    Product(int id, const std::string& name, double price);
    
    int getId() const;
    const std::string& getName() const;
    double getPrice() const;

private:
    int id;
    std::string name;
    double price;
};

#endif // PRODUCT_H
