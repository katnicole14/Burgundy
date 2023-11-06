#ifndef COLLEAGUE_H
#define COLLEAGUE_H

class Order;
/**
* \class Colleague
* \brief An abstract class that defines methods for other classes to implement.
* Defines the functions that allow the table's customers to place their orders and receive their meals. Also defines functions that allow
* the head chef to receive customers' orders from the waiter and to send out the finished meals from the kitchen.
*/
class Colleague {
public:
//    Colleague();
//    ~Colleague();
    /**
    * \brief Allows the head chef to receive customer orders from the waiter.
    */
    virtual void receiveOrder(Order* order) = 0; // HeadChef
    /**
    * \brief Allows the head chef to send the finished meals to the waiter.
    */
    virtual Order* sendOutFinishedMeal() = 0; // HeadChef
    /**
    * \brief Allows the table to place their orders so the waiter can pass it to the kitchen.
    */
    virtual void placeOrders() = 0; // Table
    /**
    * \brief Allows the table to receive their finished meals from the waiter.
    */
    virtual void receiveFinishedMeal(Order* order) = 0; // Table
};


#endif
