#ifndef TABLE_H
#define TABLE_H

#include <string>
class TableState;

class Table  { // add the inheritance ,removed for testing purposes

private:
	int tableID;
	bool tableSatisfaction;
	 TableState * state;

public:
     Table();
     void setState(TableState * state);
	 std::string getState();
    ~Table();
	void changeState();

	int getTableID();

	void setTableID(int tableID);

	bool getTableSatisfaction();

	void setTableSatisfaction(bool tableSatisfaction);

	//Iterator* createIterator();

	Table* getClone();
};

#endif
