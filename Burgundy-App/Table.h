#ifndef TABLE_H
#define TABLE_H

class Table : Colleague {

private:
	int tableID;
	bool tableSatisfaction;

public:
	void changeTo();

	int getTableID();

	void setTableID(int tableID);

	bool getTableSatisfaction();

	void setTableSatisfaction(bool tableSatisfaction);

	Iterator* createIterator();

	Table* getClone();
};

#endif
