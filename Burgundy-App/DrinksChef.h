#ifndef DRINKSCHEF_H
#define DRINKSCHEF_H
#include"Chef.h"
#include<string>
#include<iostream>
using namespace std;

class DrinksChef : Chef {


public:
	Chef* getNext();

	void setNext(Chef* next);

	void addOrderItem(string item);
};

#endif
