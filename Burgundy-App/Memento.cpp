#include "Memento.h"

using namespace std;

Memento::Memento(Drink** drink_, Sauce** sauce_, Fries** fries_, Burger** burger_, int*** ordrArray_, int tableID_, int numCustomers_){
	state= new State(drink_, sauce_, fries_, burger_, ordrArray_, tableID_, numCustomers_);
}

void Memento::printState(){
	state->printArrays();
}