#include "Table.h"
#include "Customer.h"
#include "Iterator.h"
#include <iostream>
#include "Occupied.h"

Table::Table(){
	tableID = 0;
	customers = nullptr;
	std::cout <<"Table is now occupied"<<std::endl;
	state = new Occupied();
}

Iterator* Table::createIterator(){
	return new Iterator(this);
}

int Table:: getSeatNumber(){
	return numSeated;
}
Customer** Table::getCustomers(){
	return customers;
}

void Table::setAvailableSeats(int availableSeats) {
	this->availableSeats = availableSeats;
}

int Table::getAvailableSeats() {
   	return availableSeats;
}

void Table::setNumCustomers(int numCustomers) {
    	this->numCustomers = numCustomers;
}

int Table::getNumCustomers() {
    	return numCustomers;
}

void Table::placeOrders() {
	order->setNumCustomers(numCustomers);
	for (int i = 0; i < numCustomers; i++)
	{
		int* customerOrder = customers[i]->getOrder();
		order->setCustomerOrder(i, customerOrder);
	}
}

Order *Table::getCustomerOrders() {
    	return order;
}

void Table::createOrder(Order *order) {
    	this->order = order;
}

void Table::receiveFinishedMeal(Order* order) {
	// Customers should somehow eat their meals here
	
	std::cout << "Customers at table " << tableID << " are eating their meals." << std::endl;
}

void Table::changeState() {
	state->changeTo(this);
}
int Table::getTableID() {
	return this->tableID;
}
void Table::setTableID(int tableID) {
	this->tableID = tableID;
}
bool Table::getTableSatisfaction() {
	return this->tableSatisfaction;
}
void Table::setTableSatisfaction(bool tableSatisfaction) {
	this->tableSatisfaction = tableSatisfaction;
}

Table* Table::getClone() {
	// TODO - implement Table::getClone
	throw "Not yet implemented";
}
Table::~Table() {
    	delete state;
	state = NULL;

	if (customers) {
        for (int i = 0; i < numCustomers; i++) {
            if (customers[i])
            {
                delete customers[i];
            }
        }
        delete[] customers;
    }
}

std::string Table:: getState() {
	return state->getState();
}

void Table::setState(TableState* state_) {
std::cout << "Table state has changed from "<< state->getState() << " to " << state_->getState() << std::endl;
delete state ;
state = state_;
}

void Table::receiveOrder(Order* order) {
    // Do nothing
}

Order* Table::sendOutFinishedMeal() {
    // Do nothing
	return nullptr;
}
