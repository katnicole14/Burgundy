#ifndef STATE_O
#define STATE_O


class State{
private:
	int*** orderArray;
	int tableID;
	int numCustomers;
public:
	State(int***, int, int);
	void printArrays();

	int*** getOrderArray();
	int getTableID();
	int getNumCustomers();
};

#endif