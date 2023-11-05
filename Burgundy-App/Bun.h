#ifndef BUN_H
#define BUN_H
#include"Burger.h"
#include"Bun.h"

class Bun : public Burger {

public:
	void addIngredient(Burger* ingred);
};

#endif
