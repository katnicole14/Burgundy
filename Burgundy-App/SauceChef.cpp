#include "SauceChef.h"

Chef* SauceChef::getNext() {
	return Chef::getNext();
}

void SauceChef::setNext(Chef* next) {
	
	Chef::setNext(next);
}

void SauceChef::addOrderItem(string item) {
	cout<<"adding sauce"<<endl;
Chef::addOrderItem(item);
}
