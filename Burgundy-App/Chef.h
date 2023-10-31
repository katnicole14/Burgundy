#ifndef CHEF_H
#define CHEF_H
#include"KitchenStaff.h"
#include<string>
#include<iostream>
using namespace std;

class Chef : KitchenStaff {

private:
	Chef* next;
	string item;

public:
	Chef(Chef* next);
	Chef* getNext();
	void setNext(Chef* next);
	void addOrderItem(string item);
};

#endif
