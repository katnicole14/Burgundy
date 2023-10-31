#include "Chef.h"
Chef::Chef(Chef*next):next(next)
{

}
Chef* Chef::getNext() {
	return this->next;
}

void Chef::setNext(Chef* next) {
	this->next = next;
}

void Chef::addOrderItem(string item) {
	if(next)
	{
		next->addOrderItem(item);
	}
}
