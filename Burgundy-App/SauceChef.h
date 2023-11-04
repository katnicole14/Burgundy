#ifndef SAUCECHEF_H
#define SAUCECHEF_H

#include"Chef.h"
#include"Order.h"
#include"BurgundySauce.h"
#include<string>
#include<iostream>
using namespace std;


class SauceChef : public Chef {


public:
	SauceChef(Chef* next);

	Chef* getNext();

	void setNext(Chef* next);

	void addOrderItem(Order* item);

	BurgundySauce* getSauce();
};

#endif
