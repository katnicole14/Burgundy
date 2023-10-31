#include "DrinksChef.h"

Chef* DrinksChef::getNext() {
	return Chef::getNext();
}

void DrinksChef::setNext(Chef* next) {
	
	Chef::setNext(next);
}

void DrinksChef::addOrderItem(string item) {
cout<<"adding drink"<<endl;
 Chef::addOrderItem(item);
}
