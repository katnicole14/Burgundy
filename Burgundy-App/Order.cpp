#include "Order.h"

Order::Order(int numCustomers, int tableID) {
	this->numCustomers = numCustomers;
	this->tableID = tableID;

	this->orderArray = new int*[numCustomers];
		for (int i = 0; i < numCustomers; ++i) {
			this->orderArray[i] = new int[8];
		} 
}

Drink* Order::getDrinks() {
	return this->drinks;
}

void Order::setDrinks(Drink* drinks) {
	this->drinks = drinks;
}

BurgundySauce* Order::getSauce() {
	return this->sauce;
}

void Order::setSauce(BurgundySauce* sauce) {
	this->sauce = sauce;
}

Fries* Order::getFries() {
	return this->fries;
}

void Order::setFries(Fries* fries) {
	this->fries = fries;
}

Burger* Order::getBurgers() {
	return this->burgers;
}

void Order::setBurgers(Burger* burgers) {
	this->burgers = burgers;
}

int Order::getTableID() {
	return this->tableID;
}

void Order::setTableID(int tableID) {
	this->tableID = tableID;
}


void Order::printOrderArray() {
	for (int i = 0; i < numCustomers; ++i) {
		delete[] this->orderArray[i];
	}
	delete[] this->orderArray;
	std::cout << "Order for table " << this->getTableID() << " was destroyed" << std::endl;
}

void Order::setCustomerOrder(int customerIndex, int* order) {
    for (int j = 0; j < 8; ++j) {
        this->orderArray[customerIndex][j] = order[j];
    }
}
