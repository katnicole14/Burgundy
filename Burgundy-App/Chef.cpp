#include "..\..\..\Github desktop\Burgundy\Documention\Task-2\Complete Burgundy UML\Chef.h"

Chef* Chef::getNext() {
	return this->next;
}

void Chef::setNext(Chef* next) {
	this->next = next;
}

void Chef::addOrderItem(string item) {
	// TODO - implement Chef::addOrderItem
	throw "Not yet implemented";
}
