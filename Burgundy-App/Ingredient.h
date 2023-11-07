#ifndef INGREDIENT_H
#define INGREDIENT_H
#include"Burger.h"
#include"Bun.h"
class Bun;
/**
 * \class Ingredient
 * \brief The Decorator base class follows the same interface as the Component.
 */
class Ingredient :public   Burger {

public:
	/**
     	* \brief stores the ingredients
     	*/
	Burger* Ingredients;
	/**
     	* \brief Ingredient constructor  
     	*/
	Ingredient();
	Ingredient(Burger* burger);
	 /**
     * \brief Definition of  the addition of burger ingredients
     *
     * \param ingred The next Ingredient to be added
     */
	void addIngredient(Burger* ingred);
	/**
     	* \brief Ingredient constructor  
     	*/
	virtual ~Ingredient();
};

#endif
