#ifndef ORDER_H
#define ORDER_H

#include "Memento.h"

class Memento;

class Order{
private:
	Drink** drink;
	Sauce** sauce;
	Fries** fries;
	Burger** burger;
	int*** orderArray;
	int tableID;
	int numCustomers;

public:
	Order(int);
	void printArrays();
	void changeStates(int);

	void setMemento(Memento*);
	Memento* makeMemento();

};

#endif

