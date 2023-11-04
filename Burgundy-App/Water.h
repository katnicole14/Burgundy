#ifndef WATER_H
#define WATER_H

#include "Drink.h"
#include<string>
#include<iostream>
using namespace std;
class Water : public Drink {


public:
	Water();
	void print();
	virtual ~Water();
};

#endif
