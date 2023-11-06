#ifndef PICKLE_H
#define PICKLE_H
#include"Ingredient.h"
/**
 * \class Pickle
 * \brief The pickle class adds responsibilities to the core component Bun.
 */

class Pickle :public Ingredient {

	public:
	 /**
     	* \brief Pickle constructor  
     	*/
		Pickle();
	 /**
     	* \brief Pickle destructor  
     	*/
		virtual ~Pickle();
};

#endif
