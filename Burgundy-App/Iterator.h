#ifndef ITERATOR_H
#define ITERATOR_H

#include "Customer.h"
#include "Table.h"

class Customer;
class Table;
/**
 * \class Iterator
 * \brief The class for the Iterator pattern.
 * The iterator is used to iterate through the customers seated at the table
 * The patterns has 3 functions available to the user. The functions are; first(), next(), getCurrentCustomer().
 */
class Iterator{
private:
	/**
	 * \brief The Table object to be deleted
	 */
	Table* table;
	/**
	 * \brief The Customer the iterator is currently pointing to
	 */
	Customer* currentCustomer;

public:
/**
* \brief The constructor for the Iterator class.
* It sets the table member variable to the passed in Table paramater and initialises the currentCustomer to null.
* \param A pointer to a table.
*/
	Iterator(Table*);
/**
 * \brief The first() function must be called before any other function. 
 * This function, points the iterator to the first customer on the table, allowing iteration. 
 * It will return the pointer to the first customer.
 */
	Customer* first();
/**
 * \brief The next() function iterates to the next customer seated at the table. It returns a pointer to the next customer.
 * NOTE: next() throws a runtime_error exception when it has iterated through all the customers at the table. It is important to call next()
 * inside a try/catch block.
*/
	Customer* next();
/**
 * The getCurrentCustomer() does exactly what it says, it returns the current customer without iterating to the next customer in the list.
 */
	Customer* getCurrentCustomer();
};

#endif
