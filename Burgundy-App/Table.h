#ifndef TABLE_H
#define TABLE_H

#include "Customer.h"
#include "Iterator.h"
#include "Colleague.h"
#include "Order.h"
#include <string>
class TableState;
class Iterator;
class Customer;

class Table : public Colleague {
private:
	Customer** customers;
	int numSeated;
    	int tableID;
	bool tableSatisfaction;
	TableState * state;
	int availableSeats;
	int numCustomers;
	Order* order;

public:
	Table();
	Iterator* createIterator();
	void setCustomers(Customer** customers);
	Customer** getCustomers();
     	void setState(TableState * state);
	std::string getState();
    	~Table();
	void changeState();
	int getTableID();
	void setTableID(int tableID);
	bool getTableSatisfaction();
	void setTableSatisfaction(bool tableSatisfaction);
	Table* getClone();
	void setAvailableSeats(int availableSeats);
    	int getAvailableSeats();
	void setNumCustomers(int numCustomers);
	int getNumCustomers();
	Order* getCustomerOrders();
	void createOrder(Order* order);
	void placeOrders();
    	void receiveFinishedMeal(Order* order);
    	void receiveOrder(Order* order);
    	Order* sendOutFinishedMeal();
};

#endif
