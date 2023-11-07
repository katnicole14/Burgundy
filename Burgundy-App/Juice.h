#ifndef JUICE_H
#define JUICE_H
#include "Drink.h"
/**
 * \class Juice
 * \brief The Juice class defines the type of drink a customer may choose
 */
class Juice : public Drink {
public:
	/**
     	* \brief Juice constructor  
     	*/
	Juice();
	/**
     	* \brief prints out "Juice" 
     	*/
	
	void print();
	/**
     	* \brief Juice destructor  
     	*/
	virtual ~Juice(); 
};

#endif
