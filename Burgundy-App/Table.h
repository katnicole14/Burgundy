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
	float totalBill;

public:
	Table();
	
    	~Table();
    	
	void changeState();	
	
	//getters
	Table* getClone();
    	int getAvailableSeats();
    	Customer** getCustomers();
    	bool getTableSatisfaction();
	int getSeatNumber();
	int getTableID();
	std::string getState();
	int getNumCustomers();
	Order* getCustomerOrders();
	float getBill();
	
	//verbs
	Iterator* createIterator();
	void createOrder(Order* order);
	void placeOrders();
    void receiveFinishedMeal(Order* order);
    void receiveOrder(Order* order);
    Order* sendOutFinishedMeal();
    void setBill();	

    	//setters
    	void setTableID(int tableID);
    	void setNumCustomers(int numCustomers);
    	void setAvailableSeats(int availableSeats);
    	void setCustomers(Customer** customers);
    	void setTableSatisfaction(bool tableSatisfaction);
    	void setState(TableState * state);
};

#endif
