// Customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
public:
    Customer(int id, const std::string& name);
    
    int getId() const;
    const std::string& getName() const;

private:
    int id;
    std::string name;
};

#endif // CUSTOMER_H
