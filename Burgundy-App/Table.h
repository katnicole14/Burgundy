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
	int totalBill;

public:
	Table(int);
	Iterator* createIterator();
	void sitCustomer(Customer*);
	int getBill();
	void setBill();
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