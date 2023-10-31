#ifndef FRIESCHEF_H
#define FRIESCHEF_H
#include"Chef.h"
#include<string>
#include<iostream>
using namespace std;

class FriesChef : Chef {


public:
	Chef* getNext();

	void setNext(Chef* next);

	void addOrderItem(string item);
};

#endif
