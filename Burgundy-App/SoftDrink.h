#ifndef SOFTDRINK_H
#define SOFTDRINK_H
#include "Drink.h"

class SoftDrink : public Drink {
	public:
	/**
     	* \brief SoftDrink constructor  
     	*/
		SoftDrink();
	/**
     	* \brief prints out  "softDrink"
     	*/
		void print();
	/**
     	* \brief SoftDrink desstructor  
     	*/
		virtual ~SoftDrink();

};

#endif
