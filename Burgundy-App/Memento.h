#ifndef MEMENTO_O
#define MEMENTO_O

#include "State.h"
#include "Order.h"

class State;
class Order;

class Memento{
private:
	friend class Order;
	State* state;
	Memento(Drink**, Sauce**, Fries**, Burger**, int***, int, int);

public:
	void printState();
};

#endif