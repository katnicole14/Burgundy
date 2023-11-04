#include "Table.h"
// #include "Customer.h"
// #include "Iterator.h"

Table::Table(int numCustomers){
	numSeated = numCustomers;

	customers = new Customer*[numSeated];

	for(int i = 0; i < numSeated; i ++ ){
		customers[i] = new Customer();
		customers[i]->assignSeatNumber(i);
	}
}

Iterator* Table::createIterator(){
	return new Iterator(this);
}

void Table::sitCustomer(Customer* customer){
	customers[customer->getSeatNumber()] = customer;
	return;
}

Customer** Table::getCustomers(){
	return customers;
}

int Table::getNumSeated(){
	return numSeated;
}