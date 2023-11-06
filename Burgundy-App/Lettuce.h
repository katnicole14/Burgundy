#ifndef LETTUCE_H
#define LETTUCE_H
#include"Ingredient.h"
/**
 * \class Lettuce
 * \brief The Lettuce class adds responsibilities to the core component Bun.
 */
class Lettuce :public Ingredient {
	public:
	 /**
     	* \brief Lettuce constructor  
     	*/
	Lettuce();
	/**
     	* \brief Lettuce destructor  
     	*/	
	virtual ~Lettuce();
};

#endif
