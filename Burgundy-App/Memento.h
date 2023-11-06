#ifndef MEMENTO_O
#define MEMENTO_O

#include "State.h"
#include "Order.h"

/**
 *  \brief A summary of the Memento class.
 * 		The Memento takes a snapshot of the state of the Order object then stores it for later use. Details to follow.
 * 
 * The Memento stores the state of the Order object, more specifically, the orders made by the customers at the table, the tableID
 * and the number of customers at the table. The Memento class makes use of a State class to store the snapshot.
 */

class State;
class Order;

class Memento{
private:
	friend class Order;
	/**
	 * \brief Stores the state of the Memento (The snapshot of the orders of the customers at the table)
	 */
	State* state;
	/**
	 * \brief Stores the snapshot into the State object
	 */
	Memento(int***, int, int);
public:
	/**
	 * \brief Prints the state of the orders of the customers at the table
	 */
	void printState();
};

#endif