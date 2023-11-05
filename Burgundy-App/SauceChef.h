#ifndef SAUCECHEF_H
#define SAUCECHEF_H
#include"Chef.h"
#include"Order.h"
#include"BurgundySauce.h"

class SauceChef : public Chef {

public:
	SauceChef(Chef* next);
	Chef* getNext();
	void setNext(Chef* next);
	void addOrderItem(Order* item);
	
};

#endif
