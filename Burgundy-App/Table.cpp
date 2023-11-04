#include "Table.h"
// #include "Customer.h"
// #include "Iterator.h"
#include <iostream>
#include "Occupied.h"

Table::Table(int numCustomers){

	std::cout <<"Table is now occupied"<<std::endl;
	state = new Occupied();

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


int Table:: getBill(){
	this->setBill();
 return totalBill;
}
void Table:: setBill(){
	Iterator * iter = new Iterator(this);
    int totalAmount = 0;
 totalAmount = iter->first()->getBill();

int i = 0;

 while ( i < this->getNumSeated()- 1){

  totalAmount += iter->next()->getBill();
 }

 this->totalBill = totalAmount;

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

void Table:: changeState(){
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
// Iterator* Table::createIterator() {
// 	// TODO - implement Table::createIterator
// 	throw "Not yet implemented";
// }
Table* Table::getClone() {
	// TODO - implement Table::getClone
	throw "Not yet implemented";
}
Table::~Table(){
    delete state;
	state = NULL;
	}

	std::string Table:: getState(){
return state->getState();
}

void Table:: setState(TableState * state_){
std::cout << "Table state has changed from "<< state->getState() << " to " << state_->getState() << std::endl;
delete state ;
state = state_;
}