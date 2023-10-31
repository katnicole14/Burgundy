<<<<<<< HEAD
=======
#include "FriesChef.h"
>>>>>>> 6fc23565e596f86b45f8e55350918a5452e830d1

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
