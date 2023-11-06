#ifndef BURGER_H
#define BURGER_H

class Burger {

public:
	Burger();
  /**
     * \brief Definition of  the addition of burger ingredients
     *
     * \param ingred The next Ingredient to be added
     */
	virtual void addIngredient(Burger* ingred);
	virtual ~Burger();
};

#endif
