<<<<<<< HEAD
=======
#include "SauceChef.h"
>>>>>>> 6fc23565e596f86b45f8e55350918a5452e830d1

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
