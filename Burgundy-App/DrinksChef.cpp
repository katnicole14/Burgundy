#include "DrinksChef.h"
#include<string>
#include<iostream>


DrinksChef::DrinksChef():Chef(nullptr) {

}
Chef* DrinksChef::getNext() {
	
	return Chef::getNext();
}

void DrinksChef::setNext(Chef* next) {
	
	Chef::setNext(next);
}

void DrinksChef::addOrderItem(Order* order) {

	Drink** drink = new Drink* [order->getNumCustomers()];
	int counter = 0;

	std::cout<<"Making drinks"<<std::endl;
	for (int i = 0;i<order->getNumCustomers();i++) { 
			
		if(*order->getOrderArray()[i][7] == 1)
		{
			drink[i] = new Juice();
			counter++;
			
		}
		else if(*order->getOrderArray()[i][7] == 2)
		{
			drink[i] = new SoftDrink();
			counter++;
		}
		else if (*order->getOrderArray()[i][7] == 3){
			
			drink[i] = new Water();
			counter++;
		}
		else {
			
			drink[i] = nullptr;
		}
			
	}
	order->setDrinks(drink);
	std::cout<<"all "<<counter<<" drinks done"<<std::endl;

}


