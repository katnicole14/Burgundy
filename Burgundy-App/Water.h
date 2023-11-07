#ifndef WATER_H
#define WATER_H
#include "Drink.h"
/**
 * \class Water
 * \brief The Water class defines the type of drink a customer may choose
 */
class Water : public Drink {
	public:
	/**
     	* \brief Water constructor  
     	*/
		Water();
	/**
     	* \brief prints out "water" 
     	*/
		void print();
	/**
     	* \brief Water destructor  
     	*/
		virtual ~Water();
};

#endif
