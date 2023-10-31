#ifndef INGREDIENT_H
#define INGREDIENT_H
#include"BurgerIngred.h"
#include<string>
#include<iostream>
using namespace std;

class Ingredient : BurgerIngred {
private:
	BurgerIngred* Ingredients;
public:
	
	void addIngredient(BurgerIngred* ingred);
protected:
~Ingredient();
};

#endif
