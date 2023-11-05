#ifndef HEADCHEF_H
#define HEADCHEF_H

#include "Colleague.h"
#include "Order.h"
#include <vector>
#include "FloorStaff.h"
#include "KitchenStaff.h"

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
    void observeSatisfaction(std::vector<Table*>& tables);

};


#endif
