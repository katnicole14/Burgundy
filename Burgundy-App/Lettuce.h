#ifndef LETTUCE_H
#define LETTUCE_H
#include"Ingredient.h"

class Lettuce :public Ingredient {

	public:
	const float price = 1.75;
	Lettuce();
	virtual ~Lettuce();
};

#endif
