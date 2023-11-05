#ifndef ORDER_H
#define ORDER_H
#include"Drink.h"
#include"BurgundySauce.h"
#include"Burger.h"
#include"Fries.h"
#include<string>
#include<iostream>
#include<vector>


class Memento;

class Order {

private:
	
	Drink** drinks;
	BurgundySauce** sauce;
	Fries** fries;
	Burger** burgers;
	int*** orderArray;
	int tableID;
	int numCustomers;
public:
	Order(int num, int tableID);
	~Order();
	int getNumCustomers();
	void setNumCustomers(int i);
	int*** getOrderArray();
	Drink** getDrinks();
	void setDrinks(Drink** drinks);
	BurgundySauce** getSauce();
	void setSauce(BurgundySauce** sauce);
	Fries** getFries();
	void setFries(Fries** fries);
	Burger** getBurgers();
	void setBurgers(Burger** burgers);
	int getTableID();
	void setTableID(int tableID);
	void printOrderArray();
	void setCustomerOrder(int customerIndex, int* order);
	void setMemento(Memento*);
	Memento* makeMemento();
};

#endif
