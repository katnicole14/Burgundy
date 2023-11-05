#include "Order.h"
#include "Memento.h"
#include "Caretaker.h"
#include <iostream>

using namespace std;

int* generateOrder();

int main(){
	///initialize variables
	Order order(5, 3);
	Memento* memento;
	Caretaker ct;

	///Show current state of the orderArray
	cout<< "Initial State" << endl;
	order.printOrderArray();

	///Save state of orderArray
	memento = order.makeMemento();
	ct.storeMemento(memento);

	///Mutate orderArray
	int* customOrder = generateOrder();
	order.setCustomerOrder(3, customOrder);

	///Show state of the orderArray
	cout<< "State after change"<< endl;
	order.printOrderArray();

	///Restore state of the orderArray
	cout<< "State after change"<< endl;
	order.printOrderArray();
	Memento* redo = ct.getMemento();
	order.setMemento(ct.getMemento());

	///Show state of the orderArray
	order.changeStates(5);
	cout<< "Changed to" << endl;
	order.printArrays();

	order.setMemento(redo);
	cout<< "Redone" << endl;
	order.printArrays();



	return 0;
}


int* generateOrder(){
	int* tmp = new int[8];

	for(int i = 0; i < 8; i++){
		tmp = int(i);
	}

	return tmp;
}