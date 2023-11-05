#ifndef HEADCHEF_H
#define HEADCHEF_H

#include "Colleague.h"
#include "Order.h"

#include <iostream>

class HeadChef : public Colleague {
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

};


#endif
