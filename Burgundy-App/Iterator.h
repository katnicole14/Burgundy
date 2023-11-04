#ifndef ITERATOR_H
#define ITERATOR_H

#include "Customer.h"
#include "Table.h"

class Customer;
class Table;

class Iterator{
private:
	Table* table;
	Customer* currentCustomer;

public:
	Iterator(Table*);

	Customer* first();
	Customer* next();
	// bool isDone();
	Customer* getCurrentCustomer();
};

#endif