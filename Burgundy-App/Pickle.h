#ifndef PICKLE_H
#define PICKLE_H
#include"Ingredient.h"

class Pickle :public Ingredient {

	public:
	     const float price = 0.78;
		Pickle();
		virtual ~Pickle();
};

#endif
