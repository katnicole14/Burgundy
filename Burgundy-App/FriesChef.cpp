#include "FriesChef.h"
FriesChef::FriesChef(Chef* next):Chef(next){}
Chef* FriesChef::getNext() {
	return Chef::getNext();
}

void FriesChef::setNext(Chef* next) {
	
	Chef::setNext(next);
}

void FriesChef::addOrderItem(Order* order) {
	cout<<"adding fries"<<endl;
	Fries**fries=new Fries*[order->getNumCustomers()];
	for (int i=0;i<order->getNumCustomers();i++)//for every customer 
	{ //if fries are wanted
		cout<<"i="<<*order->getOrderArray()[i][5]<<endl;
		if(*order->getOrderArray()[i][5]==1)
		{
			fries[i]=new Fries();
			
		}
		else{
			fries[i]=NULL;
		}
	}
	cout<<" All Fries done sauces needed next"<<endl;
order->setFries(fries);
  Chef::addOrderItem(order);
}

Fries* FriesChef::getFries() {
	return nullptr;
}
