#include "FriesChef.h"
#include<string>
#include<iostream>


FriesChef::FriesChef(Chef* next):Chef(next){

}

Chef* FriesChef::getNext() {
	
	return Chef::getNext();
}

void FriesChef::setNext(Chef* next) {
	
	Chef::setNext(next);
}

void FriesChef::addOrderItem(Order* order) {
	
	Fries** fries = new Fries* [order->getNumCustomers()];
	int counter = 0;

	std::cout<<"Making fries"<<std::endl;

	for (int i=0;i<order->getNumCustomers();i++)//for every customer 
	{ //if fries are wanted
		if(*order->getOrderArray()[i][5] == 1)
		{

			fries[i] = new Fries();
			counter++;	
		}
		else{

			fries[i] = nullptr;
		}
	}
	std::cout<<" All "<<counter<<" Fries done sauces needed next"<<std::endl;
	order->setFries(fries);
	Chef::addOrderItem(order);
}


