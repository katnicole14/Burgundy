#include "..\..\..\Github desktop\Burgundy\Documention\Task-2\Complete Burgundy UML\Table.h"

void Table::changeTo() {
	// TODO - implement Table::changeTo
	throw "Not yet implemented";
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

Iterator* Table::createIterator() {
	// TODO - implement Table::createIterator
	throw "Not yet implemented";
}

Table* Table::getClone() {
	// TODO - implement Table::getClone
	throw "Not yet implemented";
}

tableState* Table::getState() {
	return this->state;
}

void Table::setState(tableState* state) {
	this->state = state;
}

void Table::changeTo(Table t) {
	// TODO - implement Table::changeTo
	throw "Not yet implemented";
}

Customer* Table::getCustomer() {
	return this->customer;
}

void Table::setCustomer(Customer* customer) {
	this->customer = customer;
}
