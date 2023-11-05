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
	Memento(int***, int, int);
public:
	void printState();
};

#endif