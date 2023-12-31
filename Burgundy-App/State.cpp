#include "State.h"
#include <iostream>

using namespace std;


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

State::~State(){
	int numOptions = 8;
	for(int i = 0; i < numCustomers; i++)
	{	
		for(int j = 0; j < numOptions; j++){
			if(orderArray[i][j] != nullptr){
				delete orderArray[i][j];
			}
		}
		delete []orderArray[i];
	}
	delete []orderArray;
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

int*** State::getOrderArray(){
	return orderArray;
}

int State::getTableID(){
	return tableID;
}

int State::getNumCustomers(){
	return numCustomers;
}
