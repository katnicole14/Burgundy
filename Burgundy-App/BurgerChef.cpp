#include "BurgerChef.h"
BurgerChef::BurgerChef(Chef* next):Chef(next){}

Chef* BurgerChef::getNext() {
	return Chef::getNext();
}

void BurgerChef::setNext(Chef* next) {
	
	Chef::setNext(next);
}

void BurgerChef::addOrderItem(Order* order) {
	std::cout<<"Building Burger"<<endl;

	//bool wantburger=false;
	//create a burger given ingredients
	Burger ** burgers=new Burger*[order->getNumCustomers()];
	
	
	for (int i=0;i<order->getNumCustomers();i++)//for every customer 
	{
		/*//check if wants burger
		for(int j=0;j<5;j++)//for every burgeritem
		{
			if(order->getOrderArray()[i][j]==1)
			{
				wantburger=true;
				break;
			}
			
		}
		
		if(wantburger==true)   //if customer wants a burger*/

		if(*order->getOrderArray()[i][0]==1)
		{
			
			//put together customer burger
			burgers[i]=new Bun();
			for(int j=1;j<order->getNumCustomers();j++)//for every burgeritem
			{	//use of decorator
				if(*order->getOrderArray()[i][j]==1)
				{ 
					if(j==1)//pickle
					{
						burgers[i]->addIngredient(new Pickle() );
					}
					if(j==2)//lettuce
					{
						burgers[i]->addIngredient(new Lettuce()  );
					}
					if(j==3)//patty
					{
						burgers[i]->addIngredient(new Patty() );
					}
					if(j==4)//tomato
					{
						burgers[i]->addIngredient(new  Tomato() );
					}
					
				}
				
			}
		//put it back in the order object at index i;
		
	}


	}
	order->setBurgers(burgers);
	cout<<" All burgers done Fries needed next"<<endl;

	Chef::addOrderItem(order);
}
