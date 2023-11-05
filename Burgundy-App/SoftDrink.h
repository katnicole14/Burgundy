#ifndef SOFTDRINK_H
#define SOFTDRINK_H
#include "Drink.h"

class SoftDrink : public Drink {
	public:
	   const float price = 22.50;
		SoftDrink();
		void print();
		virtual ~SoftDrink();

};

#endif
