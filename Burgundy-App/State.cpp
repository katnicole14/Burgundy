#include "State.h"
#include <iostream>

using namespace std;

/// This saves the snapshot taken by the Memento.
State::State(int*** orderArray_, int tableID_, int numCustomers_){
	int numOptions = 8;
	numCustomers = numCustomers_;
	tableID = tableID_;

	orderArray = new int**[numCustomers];
	for(int i = 0; i < numCustomers; i++){
		orderArray[i]= new int*[numOptions];
		for(int j = 0; j < numOptions; j++){
			orderArray[i][j]= new int(*orderArray_[i][j]);
		}
	}
}

void State::printArrays(){
	int numOptions = 8;
	for(int i = 0; i < numCustomers; i++){
		cout<< endl;
		for(int j = 0; j < numOptions; j++){
			cout<< *orderArray[i][j];
		}
	}

	cout<< endl<< endl;
}

/// Returns the saved snapshot of the oders the customers at the table made.
int*** State::getOrderArray(){
	return orderArray;
}

int State::getTableID(){
	return tableID;
}

int State::getNumCustomers(){
	return numCustomers;
}
