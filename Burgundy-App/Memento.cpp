#include "Memento.h"

using namespace std;

Memento::Memento(int*** orderArray_, int tableID_, int numCustomers_){
	state= new State(orderArray_, tableID_, numCustomers_);
}

void Memento::printState(){
	state->printArrays();
}
