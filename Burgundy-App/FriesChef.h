#ifndef FRIESCHEF_H
#define FRIESCHEF_H
#include"Chef.h"
#include"Fries.h"
#include"Order.h"
class Fries;
/**
 * \class FriesChef
 * \brief A concrete handler that can handle specific requests.
 */
class FriesChef : public Chef {

public:
	/**
	* \brief FriesChef constructor  
	*/
	FriesChef (Chef* next);
	/**
	* \brief return the next handler in the chain    
	*/
	Chef* getNext();
	/**
	* \brief sets the next handler in the chain    
	*/
	void setNext(Chef* next);
	/**
	* 
	* \brief Handle the request if it's within this handler's capability, or pass it to the next handler.
	* \param item The request to be handled.
	*/
	void addOrderItem(Order* item);
	
};

#endif
