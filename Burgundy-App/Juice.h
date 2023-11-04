#ifndef JUICE_H
#define JUICE_H
#include "Drink.h"
#include<string>
#include<iostream>
using namespace std;
class Juice : public Drink {


public:
	Juice();

	void print();
	virtual ~Juice(); 
};

#endif
