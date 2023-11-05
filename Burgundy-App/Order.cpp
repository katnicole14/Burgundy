#include "Order.h"
#include <iostream>

using namespace std;

Order::Order(int num):tableID(0), numCustomers(num){
	drinks = new Drink*[numCustomers];
	sauce = new Sauce*[numCustomers];
	fries = new Fries*[numCustomers];
	burger = new Burger*[numCustomers];

	orderArray = new int**[numCustomers];

	for(int i = 0; i < numCustomers; i++){
		drinks[i] = nullptr;
		sauce[i] = nullptr;
		fries[i] = nullptr;
		burger[i] = nullptr;

		orderArray[i]= new int*[numCustomers];
		for(int j = 0; j < numCustomers; j++){
			orderArray[i][j]= new int(1);
		}
	}
}

Order::~Order()
{
	//delete arrays
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
		
		for(int j = 0; j < numCustomers; j++){
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

Order::Order(int numCustomers, int tableID) {
	// TODO - implement Order::Order
	throw "Not yet implemented";
}

void Order::printOrderArray() {
	for(int i = 0; i < numCustomers; i++){
		cout<< endl;
		for(int j = 0; j < numCustomers; j++){
			cout<< *orderArray[i][j];
		}
	}
}

void Order::setCustomerOrder(int customerIndex, int* order) {
	// TODO - implement Order::setCustomerOrder

	throw "Not yet implemented";
}

int Order::getNumCustomers()
{
	return numCustomers;
}

void Order::setNumCustomers(int numcustomers)
{
	this->numCustomers=numcustomers;
}

int*** Order::getOrderArray()
{
	return orderArray;
}


Memento* Order::makeMemento(){
	return new Memento(drinks, sauce, fries, burger, orderArray, tableID, numCustomers);
}

void Order::setMemento(Memento* memento){
	numCustomers = memento->state->getNumCustomers();
	tableID = memento->state->getTableID();

	for(int i = 0; i < numCustomers; i++){
		*drinks[i] = *memento->state->getDrink()[i];
		*sauce[i] = *memento->state->getSauce()[i];
		*fries[i] = *memento->state->getFries()[i];
		*burger[i] = *memento->state->getBurger()[i];

		for(int j = 0; j < numCustomers; j++){
			*orderArray[i][j]= *memento->state->getOrderArray()[i][j];
		}
	}
}
