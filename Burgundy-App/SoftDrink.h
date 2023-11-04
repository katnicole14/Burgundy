#ifndef SOFTDRINK_H
#define SOFTDRINK_H
#include "Drink.h"
#include<string>
#include<iostream>
using namespace std;
class SoftDrink : public Drink {


public:
	SoftDrink();
	void print();
	virtual ~SoftDrink();
};

#endif
