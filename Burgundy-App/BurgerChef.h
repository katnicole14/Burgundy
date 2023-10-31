#ifndef BURGERCHEF_H
#define BURGERCHEF_H
#include"Chef.h"
#include"BurgerIngred.h"
#include<string>
#include<iostream>
using namespace std;

class BurgerChef : Chef {


public:
BurgerChef(Chef* next);
	Chef* getNext();

	void setNext(Chef* next);

	void addOrderItem(string item);
};

#endif
