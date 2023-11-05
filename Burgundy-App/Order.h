#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include <vector>

class Order {

private:
	int*** orderArray;
	int tableID;
    int numCustomers;

public:
	Order(int numCustomers, int tableID);
	~Order();
	int getTableID();
	void setTableID(int tableID);
	void printOrderArray();
	void setCustomerOrder(int customerIndex, int* order);
    int*** getOrderArray();
    void setNumCustomers(int numCustomers);
    int getNumCustomers();
};

#endif
