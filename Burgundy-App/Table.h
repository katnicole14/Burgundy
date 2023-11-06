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
	/**
	 * \var bool tableSatisfaction
	 * \brief This variable stores the table's satisfactoin.
	 */
	bool tableSatisfaction;
	TableState * state;
	int availableSeats;
	int numCustomers;
	Order* order;

public:
	Table();
	
    	~Table();
    	
	void changeState();	
	
	//getters
	Table* getClone();
    	int getAvailableSeats();
    	Customer** getCustomers();
	/**
	 * \brief This function gets the table's satisfaction.
	 * \return The table's satisfaction.
	 */
    	bool getTableSatisfaction();
	int getSeatNumber();
	int getTableID();
	std::string getState();
	int getNumCustomers();
	Order* getCustomerOrders();
	
	//verbs
	Iterator* createIterator();
	void createOrder(Order* order);
	void placeOrders();
    	void receiveFinishedMeal(Order* order);
    	void receiveOrder(Order* order);
    	Order* sendOutFinishedMeal();
    	
    	//setters
    	void setTableID(int tableID);
    	void setNumCustomers(int numCustomers);
    	void setAvailableSeats(int availableSeats);
    	void setCustomers(Customer** customers);
	/**
	 * \brief This function sets table's satisfaction.
  	 *
	 * \param tableSatisfaction The table's satisfaction.
	 */
    	void setTableSatisfaction(bool tableSatisfaction);
    	void setState(TableState * state);
};

#endif
