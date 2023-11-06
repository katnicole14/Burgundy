#ifndef BURGERINGRED_H
#define BURGERINGRED_H
/**
 * @brief The BurgerIngred Decorator base class follows the same interface as the Bun.
 */
class BurgerIngred {


public:
  /**
     * \brief Definition of  the addition of burger ingredients
     *
     * \param ingred The next Ingredient to be added
     */
	void addIngredient(BurgerIngred* ingred);
};

#endif
