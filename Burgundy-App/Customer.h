#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <iostream>
/**
* \class Customer
* \brief The customers will be seated at a table and will be able to place orders.
*/
class Customer {
private:
	/**
	* \var string customerName
 	* \brief The customer's name
	*/
    std::string customerName;
	/**
	* \var int order[8]
 	* \brief An array that will hold 8 integers. The integers correspond to menu items that the customer has chosen to order.
	*/
    int order[8];
    int seatNumber;

public:
	/**
	* \brief The constructor for the Customer class.
 	* The constructor will initialise the customer's name and set their initial seat number to -1.
  	* \param customerName The name of the customer.
	*/
    Customer(std::string customerName);
	/**
	* \brief The destructor for the Customer class.
	*/
    ~Customer();
	/**
	* \brief This function will set the customer's order to the passed in array.
 	* \param order The order of the customer.
	*/
    void setOrder(int order[8]);
	/**
	* \brief This function gets the customer's order.
 	* \return The customer's order.
	*/
    int* getOrder();
	/**
	* \brief This function gets the customer's name.
 	* \return The customer's name.
	*/
    std::string getCustomerName();
    /**
     * \brief getSeatNumber() gets the position of the Customer object on the table. It returns an int representing their position.
     */
    int getSeatNumber();
    /**
     * assignSeatNumber() assgins a Customer object their position on the table.
     * NOTE: this value has to be set manually, a customer does not know their position when created. 
     * Customer position defaults to -1.
  	*/
    void assignSeatNumber(int);
};


#endif
