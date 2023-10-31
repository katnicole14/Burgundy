<<<<<<< HEAD
=======
#include "Chef.h"
Chef::Chef(Chef*next):next(next)
{
>>>>>>> 6fc23565e596f86b45f8e55350918a5452e830d1

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
