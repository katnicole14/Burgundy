#include "Order.h"
#include <iostream>

Order::Order(int num, int tableID):tableID(tableID), numCustomers(num){

	int menuOptions= 8;
	drinks = new Drink*[numCustomers];
	sauce = new BurgundySauce*[numCustomers];
	fries = new Fries*[numCustomers];
	burgers = new Burger*[numCustomers];

	orderArray = new int**[numCustomers];

	for(int i = 0; i < numCustomers; i++){
		drinks[i] = nullptr;
		sauce[i] = nullptr;
		fries[i] = nullptr;
		burgers[i] = nullptr;

		orderArray[i]= new int*[menuOptions];
		for(int j = 0; j < menuOptions; j++){
			orderArray[i][j]= new int(0);
		}
	}
}

Order::~Order()
{
	//delete arrays
	int numOptions = 8;
	for(int i = 0; i < numCustomers; i++)
	{
		if(fries[i] != nullptr)
		delete fries[i];

		if(drinks[i] != nullptr)
		delete drinks[i];

		if(sauce[i] != nullptr)
		delete sauce[i];

		if(burgers[i] != nullptr)
		delete burgers[i];
		
		for(int j = 0; j < numOptions; j++){
			if(orderArray[i][j] != nullptr){
				delete orderArray[i][j];
			}
		}
		delete []orderArray[i];
	}
	delete []orderArray;
	delete []burgers;
	delete []fries;
	delete []drinks;
	delete []sauce;
}

Drink** Order::getDrinks() {
	return this->drinks;
}

void Order::setDrinks(Drink** drinks) {
	this->drinks = drinks;
}

BurgundySauce** Order::getSauce() {
	return this->sauce;
}

void Order::setSauce(BurgundySauce** sauce) {
	this->sauce = sauce;
}

Fries** Order::getFries() {
	return this->fries;
}

void Order::setFries(Fries** fries) {
	this->fries = fries;
}

Burger** Order::getBurgers() {
	return this->burgers;
}

void Order::setBurgers(Burger** burgers) {
	this->burgers = burgers;
}

int Order::getTableID() {

	return this->tableID;
}

void Order::setTableID(int tableID) {

	this->tableID = tableID;
}

void Order::printOrderArray() {
	for(int i = 0; i < numCustomers; i++){
		std::cout<< std::endl;
		for(int j = 0; j < numCustomers; j++){
			std::cout<< *orderArray[i][j];
		}
	}
}

int Order::getNumCustomers()
{
	return numCustomers;
}
void Order::setNumCustomers(int numCustomers)
{
	this->numCustomers=numCustomers;
}
int*** Order::getOrderArray()
{
	return orderArray;
}


Memento* Order::makeMemento(){
	return new Memento(orderArray, tableID, numCustomers);
}

void Order::setMemento(Memento* memento){
	numCustomers = memento->state->getNumCustomers();
	tableID = memento->state->getTableID();

	for(int i = 0; i < numCustomers; i++){
		for(int j = 0; j < numCustomers; j++){
			*orderArray[i][j]= *memento->state->getOrderArray()[i][j];
		}
	}
}

void Order::setCustomerOrder(int customerIndex, int* order) {
    for (int j = 0; j < 8; j++) {
        this->orderArray[customerIndex][j] = new int(order[j]);
    }
}
