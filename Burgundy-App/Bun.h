#ifndef BUN_H
#define BUN_H
#include"Burger.h"
#include"Bun.h"
#include<string>
#include<iostream>
using namespace std;

class Bun : public Burger {


public:
	void addIngredient(Burger* ingred);
};

#endif
