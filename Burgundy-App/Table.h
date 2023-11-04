#ifndef TABLE_H
#define TABLE_H

#include "Customer.h"
#include "Iterator.h"

class Iterator;
class Customer;

class Table{
private:
	Customer** customers;
	int numSeated;
public:
	Table(int);
	Iterator* createIterator();

	void sitCustomer(Customer*);
	Customer** getCustomers();

	int getNumSeated();
};

#endif