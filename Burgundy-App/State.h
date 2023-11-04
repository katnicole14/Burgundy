#ifndef STATE_O
#define STATE_O


class State{
private:
	Drink** drink;
	Sauce** sauce;
	Fries** fries;
	Burger** burger;
	int*** orderArray;
	int tableID;
	int numCustomers;
public:
	State(Drink**, Sauce**, Fries**, Burger**, int***, int, int);
	void printArrays();

	Drink** getDrink();
	Sauce** getSauce();
	Fries** getFries();
	Burger** getBurger();
	int*** getOrderArray();
	int getTableID();
	int getNumCustomers();
};

#endif