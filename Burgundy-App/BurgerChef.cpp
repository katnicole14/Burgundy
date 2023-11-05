#include "BurgerChef.h"
#include<string>
#include<iostream>

BurgerChef::BurgerChef(Chef* next):Chef(next){}

Chef* BurgerChef::getNext() {
	return Chef::getNext();
}

void BurgerChef::setNext(Chef* next) {
	
	Chef::setNext(next);
}

void BurgerChef::addOrderItem(Order* order) {
	
	int counter = 0;
	Burger** burgers = new Burger* [order->getNumCustomers()];
	
	std::cout<<"Making burgers"<<std::endl;
	for (int i=0;i<order->getNumCustomers();i++)//for every customer 
	{
	
		if(*order->getOrderArray()[i][0] == 1)
		{

			burgers[i] = new Bun();
			counter++;
			for(int j=1;j<order->getNumCustomers();j++)//for every burgeritem
			{	//use of decorator
				if(*order->getOrderArray()[i][j] == 1)
				{ 
					if(j == 1)//pickle
					{
						burgers[i]->addIngredient(new Pickle() );
					}
					if(j == 2)//lettuce
					{
						burgers[i]->addIngredient(new Lettuce()  );
					}
					if(j == 3)//patty
					{
						burgers[i]->addIngredient(new Patty() );
					}
					if(j == 4)//tomato
					{
						burgers[i]->addIngredient(new  Tomato() );
					}
					
				}
				
			}

	}

	}
	order->setBurgers(burgers);
	std::cout<<" All "<<counter<<" burgers done Fries needed next"<<std::endl;

	Chef::addOrderItem(order);
}
