<<<<<<< HEAD
=======
#include "Table.h"
>>>>>>> 6fc23565e596f86b45f8e55350918a5452e830d1

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
