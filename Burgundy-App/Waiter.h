#ifndef WAITER_H
#define WAITER_H

#include "FloorStaff.h"
#include "Table.h"
#include "HeadChef.h"

#include <string>
/**
* \class Waiter
* \brief The waiter class checks table satisfaction while passing the orders and meals between the table and kitchen.
* The Waiter class is responsible for monitoring customer satisfaction while also receiving orders from the customers at the table
* and collecting finished meals from the kitchen and passing it to the customers.
*/
class Waiter : public FloorStaff {
private:
    /**
    * \var string waiterName
    * \brief The waiter's name.
    */
    std::string waiterName;
    /**
    * \var Table* table
    * \brief A reference to the table the waiter is serving.
    */
    Table* table;
    /**
    * \var HeadChef* headChef
    * \brief A reference to the head chef.
    * The waiter will pass customer orders to the head chef while also receiving the finished meals from the head chef.
    */
    HeadChef* headChef;
    float tip ;

public:
    /**
    * \brief The constructor for the Waiter class
    * The constructor will only set all the member variables passed in.
    * \param waiterName The waiter's name to set.
    * \param table The table the customer will be serving.
    * \param headChef The head chef of the restaurant.
    */
    float getTip();
    void setTip(int value);
    Waiter(std::string waiterName, Table* table, HeadChef* headChef);
    /**
    * \brief The destructor of the waiter class.
    */
    ~Waiter();
    /**
     * \brief This function observe's the tables satisfaction.
     *
     * \param tables The vector of tables in the restaurant.
     */
    void observeSatisfaction(std::vector<Table*>& tables);
    /**
     * \brief This function sets the name of the waiter.
     * \param waiterName The name of the waiter.
     */
    void setWaiterName(std::string waiterName);
    /**
     * \brief This function gets the name of the waiter.
     * \return The name of the waiter.
     */
    std::string getWaiterName();
    /**
     * \brief This function sets the table the waiter will be serving.
     * \param table The table the waiter is serving.
     */
    void setTable(Table* table);
    /**
     * \brief This function sets the head chef of the restaurant.
     * \param headChef The head chef of the restaurant.
     */
     Table * getTable();
    void setHeadChef(HeadChef* headChef);
    /**
     * \brief This function allows the waiter to deliver the customers' orders to the head chef.
     */
    void deliverOrder();
    /**
     * \brief This function allows the waiter to deliver the finished meals to the customers.
     */
    void deliverMeal();
};


#endif
