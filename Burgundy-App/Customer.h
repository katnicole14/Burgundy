#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <iostream>

class Customer {
private:
    std::string customerName;
    int order[8];
    int seatNumber;
  float totalAmount;

public:
    Customer(std::string customerName);
    ~Customer();
    void setOrder(int order[8]);
    int* getOrder();
    std::string getCustomerName();
	int getSeatNumber();
	void assignSeatNumber(int);
    void setAmount(float total);
    float getTotalAmount();

};


#endif
