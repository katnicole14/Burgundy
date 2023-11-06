#ifndef DRINKSCHEF_H
#define DRINKSCHEF_H
#include"Chef.h"
#include"Order.h"
#include"Juice.h"
#include"Water.h"
#include"SoftDrink.h"
#include"Drink.h"
	/**
	 * \class DrinksChef
	 * \brief A concrete handler that can handle specific requests.
	 */
class DrinksChef: public Chef {

public:
       /**
     * \DrinksChef constructor    
     */
	DrinksChef();
	/**
     * \brief returns next Handler    
     */
	Chef* getNext();
	/**
     * \brief sets next Handler   
     */
	void setNext(Chef* next);
	/**
     * \brief Handle the request if it's within this handler's capability, or pass it to the next handler.
     * \param item The request to be handled.
     */
	void addOrderItem(Order* item);
	
};

#endif
