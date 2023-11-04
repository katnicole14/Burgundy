#ifndef INGREDIENT_H
#define INGREDIENT_H
#include"Burger.h"
#include"Bun.h"
#include<string>
#include<iostream>
using namespace std;
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
