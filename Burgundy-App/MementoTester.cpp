#include "Order.h"
#include "Memento.h"
#include "Caretaker.h"
#include <iostream>

using namespace std;

int main(){
	Order order(5);

	Memento* memento= order.makeMemento();
	// memento->printState();

	cout<< "Initial State" << endl;
	order.printArrays();

	Caretaker ct;

	ct.storeMemento(memento);
	Memento* redo = ct.getMemento();
	//cout<< "Redo" << endl;
	//redo->printState();
	order.changeStates(5);
	cout<< "Changed to" << endl;
	order.printArrays();

	order.setMemento(redo);
	cout<< "Redone" << endl;
	order.printArrays();



	return 0;
}