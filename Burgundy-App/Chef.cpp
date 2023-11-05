#include "Chef.h"
#include<string>
#include<iostream>

Chef::Chef(Chef*next):next(next) {

}
Chef::~Chef() {

}

Chef* Chef::getNext() {

	return this->next;
}

void Chef::setNext(Chef* next) {

	this->next = next;
}

void Chef::addOrderItem(Order* item) {

	if(next)
	{
		next->addOrderItem(item);
	}
}
