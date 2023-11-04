#include "DrinksChef.h"
DrinksChef::DrinksChef():Chef(nullptr){}
Chef* DrinksChef::getNext() {

	return Chef::getNext();
}

void DrinksChef::setNext(Chef* next) {
	
	Chef::setNext(next);
}

void DrinksChef::addOrderItem(Order* order) {
	Drink** drink=new Drink* [order->getNumCustomers()];
	for (int i=0;i<order->getNumCustomers();i++)//for every customer 
		{ //if Drink are wanted
			if(*order->getOrderArray()[i][7]==1)
			{
				drink[i]=new Juice();
				
			}
			else if(*order->getOrderArray()[i][7]==2)
			{
				drink[i]=new SoftDrink();
			}
			else if (*order->getOrderArray()[i][7]==3)
			{
				drink[i]=new Water();
			}
			else if (*order->getOrderArray()[i][7]==0)
			{
				drink[i]=NULL;
				
			}
			
		}
		order->setDrinks(drink);
		cout<<"all drinks done"<<endl;

	//Chef::addOrderItem(order);
}


Drink* DrinksChef::getDrink(int type) {
	// TODO - implement DrinksChef::getDrink
	return nullptr;
}
