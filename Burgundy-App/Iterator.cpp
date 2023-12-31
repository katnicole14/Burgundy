#include "Iterator.h"
#include <stdexcept>
#include "Customer.h"
#include "Table.h"



Iterator::Iterator(Table* table_){
	table = table_;
	currentCustomer = nullptr;
}

Customer* Iterator::first(){
	currentCustomer = table->getCustomers()[0];
	return currentCustomer;
}

Customer* Iterator::next(){
	int seatNumber = currentCustomer->getSeatNumber();

	if(table->getNumCustomers()<= seatNumber+ 1)
		throw std::runtime_error("Done Iterating");
	else
		currentCustomer = table->getCustomers()[seatNumber+ 1];

	return currentCustomer;
}

Customer* Iterator::getCurrentCustomer(){
	return currentCustomer;
}
