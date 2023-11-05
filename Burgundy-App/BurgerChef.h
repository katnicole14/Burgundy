#ifndef BURGERCHEF_H
#define BURGERCHEF_H
#include"Chef.h"
#include"Burger.h"
#include"Ingredient.h"
#include"Pickle.h"
#include"Lettuce.h"
#include"Patty.h"
#include"Tomato.h"
#include"Bun.h"

class BurgerChef :public Chef {

public:

	BurgerChef(Chef* next);
	Chef* getNext();
	void setNext(Chef* next);
	void addOrderItem(Order* item);
};

#endif
