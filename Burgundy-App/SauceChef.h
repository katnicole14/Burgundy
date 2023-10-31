#ifndef SAUCECHEF_H
#define SAUCECHEF_H
#include"Chef.h"
#include<string>
#include<iostream>
using namespace std;

class SauceChef : Chef {


public:
	Chef* getNext();

	void setNext(Chef* next);

	void addOrderItem(string item);
};

#endif
