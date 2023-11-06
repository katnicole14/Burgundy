#include "Iterator.h"
#include <stdexcept>
#include "Customer.h"
#include "Table.h"

/*! \brief Iterator pattern.
 * 		The iterator is used to iterate through the customers seated at the table
 * 		The patterns has 3 functions available to the user. The functions are; first(), next(), getCurrentCustomer().
 */

Iterator::Iterator(Table* table_){
	table = table_;
	currentCustomer = nullptr;
}

 /// The first() function must be called before any other function. This function, points the iterator to the first customer on the table, allowing iteration. It will return the pointer to the first customer.
Customer* Iterator::first(){
	currentCustomer = table->getCustomers()[0];
	return currentCustomer;
}

 /// The next() function iterates to the next customer seated at the table. It returns a pointer to the next customer.
 /// NOTE: next() throws a runtime_error exception when it has iterated through all the customers at the table. It is important to call next()
 /// inside a try/catch block.
Customer* Iterator::next(){
	int seatNumber = currentCustomer->getSeatNumber();

	if(table->getNumCustomers()<= seatNumber+ 1)
		throw std::runtime_error("Done Iterating");
	else
		currentCustomer = table->getCustomers()[seatNumber+ 1];

	return currentCustomer;
}

///The getCurrentCustomer() does exactly what it says, it returns the current customer without iterating to the next customer in the list.
Customer* Iterator::getCurrentCustomer(){
	return currentCustomer;
}
