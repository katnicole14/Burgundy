#include "Table.h"
#include <iostream>
#include "Occupied.h"


Table::Table(){
	std::cout <<"Table is now occupied"<<std::endl;
	state = new Occupied();

}
void Table:: setState(TableState * state_){
std::cout << "Table state has changed from "<< state->getState() << " to " << state_->getState() << std::endl;
delete state ;
state = state_;

}

std::string Table:: getState(){
return state->getState();
}

Table::~Table(){
    delete state;
	state = NULL;
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
