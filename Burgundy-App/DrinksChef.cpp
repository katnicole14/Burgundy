<<<<<<< HEAD
=======
#include "DrinksChef.h"
>>>>>>> 6fc23565e596f86b45f8e55350918a5452e830d1

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
