#ifndef PATTY_H
#define PATTY_H
#include"Ingredient.h"
/**
 * \class Patty
 * \brief The Patty class adds responsibilities to the core component Bun.
 */
class Patty :public Ingredient {

public:
	 /**
     	* \brief Patty constructor  
     	*/
        
		Patty();
	 /**
     	* \brief Patty destructor  
     	*/
		virtual ~Patty();
};

#endif
