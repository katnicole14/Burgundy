#include "Memento.h"

using namespace std;

/*! \brief A summary of the Memento class.
 * 		The Memento takes a snapshot of the state of the Order object then stores it for later use. Details to follow.
 * 
 * The Memento stores the state of the Order object, more specifically, the orders made by the customers at the table, the tableID
 * and the number of customers at the table. The Memento class makes use of a State class to store the snapshot.
 */

/// Stores the snapshot into the State object

Memento::Memento(int*** orderArray_, int tableID_, int numCustomers_){
	state= new State(orderArray_, tableID_, numCustomers_);
}

void Memento::printState(){
	state->printArrays();
}
