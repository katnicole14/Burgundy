#ifndef INGREDIENT_H
#define INGREDIENT_H
#include"Burger.h"
#include"Bun.h"
class Bun;

class Ingredient :public   Burger {

public:
	Burger* Ingredients;
	Ingredient();
	Ingredient(Burger* burger);
	void addIngredient(Burger* ingred);
	virtual ~Ingredient();
};

#endif
