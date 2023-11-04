#include "Order.h"
Order::Order(int num)
{
	numCustomers=num;
	//create arrays
	fries=new Fries*[numCustomers];
	drinks=new Drink*[numCustomers];
	burgers=new Burger*[numCustomers];
	sauce=new BurgundySauce*[numCustomers];

	orderArray = new int**[numCustomers];
	

	for(int i = 0; i < numCustomers; i++){
		drinks[i] = NULL;
		sauce[i] = NULL;
		fries[i] = NULL;
		burgers[i] = NULL;

		orderArray[i]= new int*[8];
		for(int j = 0; j < numCustomers; j++){
			orderArray[i][j]= new int(1);
		}
	}
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
	// TODO - implement Order::printOrderArray
	throw "Not yet implemented";
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

Order::~Order()
{
	//delete arrays
	for(int i=0;i<numCustomers;i++)
	{
		if(fries[i]==NULL)
		delete fries[i];

		if(drinks[i]!=NULL)
		delete drinks[i];

		if(sauce[i]!=NULL)
		delete sauce[i];

		if(burgers[i]!=NULL)
		delete burgers[i];
		
		delete[] orderArray[i];
	}
	delete [] orderArray;
	delete []burgers;
	delete []fries;
	delete []drinks;
	delete []sauce;
}
