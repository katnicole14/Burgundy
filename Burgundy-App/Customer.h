#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <iostream>

class Customer {
private:
    std::string customerName;
    int order[8];

public:
    Customer(std::string customerName);
    ~Customer();
    void setOrder(int order[8]);
    int* getOrder();
    std::string getCustomerName();
};


#endif
