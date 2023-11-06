#ifndef HEADCHEF_H
#define HEADCHEF_H

#include "Colleague.h"
#include "Order.h"
#include <vector>
#include "FloorStaff.h"
#include "KitchenStaff.h"
#include "Chef.h"
#include "BurgerChef.h"
#include "SauceChef.h"
#include "FriesChef.h"
#include "DrinksChef.h"

#include "Table.h"
class Waiter;
#include <iostream>
/**
* \class HeadChef
* \brief The head chef will receive customer orders, send out finished meals and check table satisfaction.
* The head chef will be able to receive customer orders from the waiter. They will then pass the orders to the rest of the chefs in the kitchen who will prepare the meal.
* The head chef will then take the finished meal and send it to the waiter who will then take it to the table. The head chef will also monitor the satisfaction of the tables.
*/
class HeadChef : public Colleague, public FloorStaff,public KitchenStaff {
private:
	/**
 	* \var Order* order
  	* \brief A reference to the order.
   	* The order will contain customers' orders and also the finished meals.
  	*/
    Order* order;

public:
	/**
 	* \brief The constructor of the HeadChef class.
  	*/ 
    HeadChef();
	/**
 	* \brief The destructor of the HeadChef class.
  	*/
    ~HeadChef();
	/**
 	* \brief This method allows the head chef to receive orders from the waiter.
  	* The head chef will receive orders from the waiter and will then pass it into the chain where the other chefs will prepare the meal.
   	* \param order The orders received from the waiter.
  	*/
    void receiveOrder(Order* order);
	/**
 	* \brief This method simply returns the finished order to the waiter.
  	* \return The finished meals.
  	*/
    Order* sendOutFinishedMeal();

    void placeOrders();
    void receiveFinishedMeal(Order* order);

    void setOrder(Order* order);
    Order* getOrder();
	/**
	 * \brief Observes the satisfaction of the tables taken in as input
	 * \param tables The list of tables to be observed.
	 */
    void observeSatisfaction(std::vector<Table*>& tables);

};


#endif
