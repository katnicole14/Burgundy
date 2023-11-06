#ifndef WATER_H
#define WATER_H
#include "Drink.h"
/**
 * \class Water
 * \brief The ConcreteDecoratorA class adds responsibilities to the core component Bun.
 */
class Water : public Drink {
	public:
	/**
     	* \brief Water constructor  
     	*/
		Water();
		void print();
		virtual ~Water();
};

#endif
