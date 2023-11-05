#ifndef JUICE_H
#define JUICE_H
#include "Drink.h"

class Juice : public Drink {
public:
	Juice();
	void print();
	virtual ~Juice(); 
};

#endif
