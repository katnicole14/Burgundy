#ifndef BURGER_H
#define BURGER_H

class Burger {

public:
	Burger();
	virtual void addIngredient(Burger* ingred);
	virtual ~Burger();
};

#endif
