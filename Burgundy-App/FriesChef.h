#ifndef FRIESCHEF_H
#define FRIESCHEF_H
#include"Chef.h"
#include"Fries.h"
#include"Order.h"
class Fries;

class FriesChef : public Chef {

public:
	FriesChef (Chef* next);
	Chef* getNext();
	void setNext(Chef* next);
	void addOrderItem(Order* item);
	
};

#endif
