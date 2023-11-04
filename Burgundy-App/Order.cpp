#include "Order.h"
#include <iostream>

using namespace std;

Order::Order(int num):tableID(0), numCustomers(num){
	drink = new Drink*[numCustomers];
	sauce = new Sauce*[numCustomers];
	fries = new Fries*[numCustomers];
	burger = new Burger*[numCustomers];

	orderArray = new int**[numCustomers];

	for(int i = 0; i < numCustomers; i++){
		drink[i] = new Drink();
		sauce[i] = new Sauce();
		fries[i] = new Fries();
		burger[i] = new Burger();

		orderArray[i]= new int*[numCustomers];
		for(int j = 0; j < numCustomers; j++){
			orderArray[i][j]= new int(j);
		}
	}
}

void Order::printArrays(){
	for(int i = 0; i < numCustomers; i++){
		cout<< *drink[i];
	}

	cout<< endl<< endl;

	for(int i = 0; i < numCustomers; i++){
		cout<< *sauce[i];
	}

	cout<< endl<< endl;

	for(int i = 0; i < numCustomers; i++){
		cout<< *fries[i];
	}

	cout<< endl<< endl;

	for(int i = 0; i < numCustomers; i++){
		cout<< *burger[i];
	}

	cout<< endl<< endl;

	for(int i = 0; i < numCustomers; i++){
		cout<< endl;
		for(int j = 0; j < numCustomers; j++){
			cout<< *orderArray[i][j];
		}
	}

	cout<< endl<< endl;

}

void Order::changeStates(int delta){
	for(int i = 0; i < numCustomers; i++){
		*drink[i] += delta;
	}


	for(int i = 0; i < numCustomers; i++){
		*sauce[i] += delta;
	}


	for(int i = 0; i < numCustomers; i++){
		*fries[i] += delta;
	}


	for(int i = 0; i < numCustomers; i++){
		*burger[i] += delta;
	}


	for(int i = 0; i < numCustomers; i++){
		for(int j = 0; j < numCustomers; j++){
			*orderArray[i][j] += delta;
		}
	}
	
}

Memento* Order::makeMemento(){
	return new Memento(drink, sauce, fries, burger, orderArray, tableID, numCustomers);
}

void Order::setMemento(Memento* memento){
	numCustomers = memento->state->getNumCustomers();
	tableID = memento->state->getTableID();

	for(int i = 0; i < numCustomers; i++){
		*drink[i] = *memento->state->getDrink()[i];
		*sauce[i] = *memento->state->getSauce()[i];
		*fries[i] = *memento->state->getFries()[i];
		*burger[i] = *memento->state->getBurger()[i];

		for(int j = 0; j < numCustomers; j++){
			*orderArray[i][j]= *memento->state->getOrderArray()[i][j];
		}
	}
}

