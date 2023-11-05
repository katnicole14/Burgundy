#ifndef PATTY_H
#define PATTY_H
#include"Ingredient.h"

class Patty :public Ingredient {

public:
         const float price = 20;
		Patty();
		virtual ~Patty();
};

#endif
