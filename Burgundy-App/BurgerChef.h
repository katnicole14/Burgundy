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
/**
 * \class BurgerChef
 * \brief Concrete Handlers implement their processing logic. They can also
 * pass the request to the next handler.
 *
 * 
 *  */
class BurgerChef :public Chef {

public:

	BurgerChef(Chef* next);
     /**
     * \brief returns the next in the chain.
     * \return next The next handler in the chain.
     */
	Chef* getNext();
	 /**
     * \brief Sets the next in the chain.
     * \param next The next handler in the chain.
     */
	void setNext(Chef* next);
    /**
     * \brief Definition of the addition of burger ingredients
     *
     * \param ingred The next Ingredient to be added
     */
	void addOrderItem(Order* item);
};

#endif
