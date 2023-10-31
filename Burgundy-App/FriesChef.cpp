#include "FriesChef.h"

Chef* FriesChef::getNext() {
	return Chef::getNext();
}

void FriesChef::setNext(Chef* next) {
	
	Chef::setNext(next);
}

void FriesChef::addOrderItem(string item) {
	cout<<"adding fries"<<endl;
Chef::addOrderItem(item);
}
