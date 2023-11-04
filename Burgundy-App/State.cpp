#include "State.h"
#include <iostream>

using namespace std;

State::State(int** drink_, int** sauce_, int** fries_, int** burger_, int*** orderArray_, int tableID_, int numCustomers_){
	numCustomers = numCustomers_;
	tableID = tableID_;

	drink = new Drink*[numCustomers];
	sauce = new Sauce*[numCustomers];
	fries = new Fries*[numCustomers];
	burger = new Burger*[numCustomers];

	orderArray = new int**[numCustomers];

	for(int i = 0; i < numCustomers; i++){
		drink[i] = new Drink(drink_[i]);
		sauce[i] = new Sauce(sauce_[i]);
		fries[i] = new Fries(fries_[i]);
		burger[i] = new Burger(burger_[i]);

		orderArray[i]= new int*[numCustomers];
		for(int j = 0; j < numCustomers; j++){
			orderArray[i][j]= new int(*orderArray_[i][j]);
		}
	}
}

void State::printArrays(){
	for(int i = 0; i < numCustomers; i++){
		cout<< *drink[i];
	}

	cout<< endl<< endl;

	for(int i = 0; i < numCustomers; i++){
		cout<< *sauce[i];
	}

	cout<< endl<< endl;

	for(int i = 0; i < numCustomers; i++){
		cout<< *fries[i];
	}

	cout<< endl<< endl;

	for(int i = 0; i < numCustomers; i++){
		cout<< *burger[i];
	}

	cout<< endl<< endl;

	for(int i = 0; i < numCustomers; i++){
		cout<< endl;
		for(int j = 0; j < numCustomers; j++){
			cout<< *orderArray[i][j];
		}
	}

	cout<< endl<< endl;
}

Drink** State::getDrink(){
	return drink;
}

Sauce** State::getSauce(){
	return sauce;
}

Fries** State::getFries(){
	return fries;
}

Burger** State::getBurger(){
	return burger;
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