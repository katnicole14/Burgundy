#ifndef CHEF_H
#define CHEF_H
#include"KitchenStaff.h"
#include"Order.h"


class Chef :public  KitchenStaff {

private:
	Chef* next;
	Order* item;

public:
	Chef(Chef* );
	Chef* getNext();
	void setNext(Chef* next);
	virtual void addOrderItem(Order* item);//handler
	virtual~Chef();
};

#endif
