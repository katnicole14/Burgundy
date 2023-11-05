#ifndef BUN_H
#define BUN_H
#include"Burger.h"
#include"Bun.h"

class Bun : public Burger {

public:
    const float price = 2;
	void addIngredient(Burger* ingred);
};

#endif
