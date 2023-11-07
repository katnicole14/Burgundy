#ifndef SAUCECHEF_H
#define SAUCECHEF_H
#include"Chef.h"
#include"Order.h"
#include"BurgundySauce.h"
/**
 * \class SauceChef
 * \brief A concrete handler that can handle specific requests.
 */
class SauceChef : public Chef {

public:
	/**
	* \brief SauceChef constructor  
	*/
	SauceChef(Chef* next);
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
