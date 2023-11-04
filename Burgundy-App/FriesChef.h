#ifndef FRIESCHEF_H
#define FRIESCHEF_H
#include"Chef.h"
#include"Fries.h"
#include"Order.h"
class Fries;
#include<string>
#include<iostream>
using namespace std;

class FriesChef : public Chef {


public:
	FriesChef (Chef* next);
	Chef* getNext();

	void setNext(Chef* next);

	void addOrderItem(Order* item);

	Fries* getFries();
};

#endif
