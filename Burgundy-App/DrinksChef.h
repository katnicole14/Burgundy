#ifndef DRINKSCHEF_H
#define DRINKSCHEF_H
#include"Chef.h"
#include"order.h"
#include"Juice.h"
#include"Water.h"
#include"SoftDrink.h"
#include"Drink.h"


#include<string>
#include<iostream>
using namespace std;



class DrinksChef: public Chef {


public:
	DrinksChef();

	Chef* getNext();

	void setNext(Chef* next);

	void addOrderItem(Order* item);

	Drink* getDrink(int type);
};

#endif
