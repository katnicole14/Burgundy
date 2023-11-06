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

class HeadChef : public Colleague, public FloorStaff,public KitchenStaff {
private:
    Order* order; // Maybe?

public:
    HeadChef();
    ~HeadChef();
    void receiveOrder(Order* order);
    Order* sendOutFinishedMeal();
    // void passToChain(Order* order)

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
