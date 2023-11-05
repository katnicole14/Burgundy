#ifndef WATER_H
#define WATER_H
#include "Drink.h"

class Water : public Drink {
	public:
		Water();
		void print();
		virtual ~Water();
};

#endif
