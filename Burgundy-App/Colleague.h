#ifndef COLLEAGUE_H
#define COLLEAGUE_H

class Order;

class Colleague {
public:
//    Colleague();
//    ~Colleague();

    virtual void receiveOrder(Order* order) = 0; // HeadChef
    virtual Order* sendOutFinishedMeal() = 0; // HeadChef

    virtual void placeOrders() = 0; // Table
    virtual void receiveFinishedMeal(Order* order) = 0; // Table
};


#endif
