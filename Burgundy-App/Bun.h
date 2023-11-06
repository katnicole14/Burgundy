#ifndef BUN_H
#define BUN_H
#include"Burger.h"
#include"Bun.h"
/**
* \class Bun
* \brief The base component that provides the core functionality
*/
class Bun : public Burger {

public:
   /**
     * \brief Definition of the addition of burger ingredients
     *
     * \param ingred The next Ingredient to be added
     */
	void addIngredient(Burger* ingred);
};

#endif
