#ifndef TABLE_H
#define TABLE_H

#include "Customer.h"
#include "Iterator.h"
#include <string>
class TableState;
class Iterator;
class Customer;

class Table{
private:
	Customer** customers;
	int numSeated;
    int tableID;
	bool tableSatisfaction;
	 TableState * state;

public:
	Table(int);
	Iterator* createIterator();
    
	void sitCustomer(Customer*);
	Customer** getCustomers();

	int getNumSeated();
	  Table();
     void setState(TableState * state);
	 std::string getState();
    ~Table();
	void changeState();
	int getTableID();
	void setTableID(int tableID);
	bool getTableSatisfaction();
	void setTableSatisfaction(bool tableSatisfaction);
		Table* getClone();
};

#endif