#include "Iterator.h"
#include <stdexcept>


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

	if(table->getNumSeated()<= seatNumber+ 1)
		throw std::runtime_error("Done Iterating");
	else
		currentCustomer = table->getCustomers()[seatNumber+ 1];

	return currentCustomer;
}

// bool Iterator::isDone(){
// 	return currentCustomer == nullptr;
// }

Customer* Iterator::getCurrentCustomer(){
	return currentCustomer;
}