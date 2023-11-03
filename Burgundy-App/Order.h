#ifndef ORDER_H
#define ORDER_H
#include <iostream>
class Drink;
class BurgundySauce;
class Fries;
class Burger;

class Order {

private:
	Drink* drinks;
	BurgundySauce* sauce;
	Fries* fries;
	Burger* burgers;
	int** orderArray;
	int tableID;

public:
	

	Order(int numCustomers, int tableID);

	~Order();

	int numCustomers;

	Drink* getDrinks();

	void setDrinks(Drink* drinks);

	BurgundySauce* getSauce();

	void setSauce(BurgundySauce* sauce);

	Fries* getFries();

	void setFries(Fries* fries);

	Burger* getBurgers();

	void setBurgers(Burger* burgers);

	int getTableID();

	void setTableID(int tableID);

	void printOrderArray();

	void setCustomerOrder(int customerIndex, int* order);
};

#endif
