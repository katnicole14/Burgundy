#ifndef ORDER_H
#define ORDER_H
#include"Drink.h"
#include"BurgundySauce.h"
#include"Burger.h"
#include"Fries.h"
#include<string>
#include<iostream>
#include<vector>
#include "Memento.h"

class Memento;
/**
* \class Order
* \brief This class contains information about customers' orders as well as the finished meals.
* The Order class will contain everything that the customers have ordered. It will also contain the finished meals that have been prepared by the chefs.
*/
class Order {

private:
	
	Drink** drinks;
	BurgundySauce** sauce;
	Fries** fries;
	Burger** burgers;
	/**
	* \var int*** orderArray
 	* \brief A 2D array that contains a list of what each customer ordered.
	*/
	int*** orderArray;
	/**
	* \var int tableID
 	* \brief The ID of the table the order belongs to.
	*/
	int tableID;
	/**
	* \var int numCustomers
 	* \brief The number of customers at the table that have ordered.
	*/
	int numCustomers;
public:
	/**
	* \brief The constructor for the Order class.
 	* Initialises arrays of all the menu items and sets all orders to 0 initially.
  	* \param num The number of customers at the table.
   	* \param tableID The ID of the table that made the order.
	*/
	Order(int num, int tableID);
	/**
	* \brief The destructor of the Order class.
 	* Deletes all the arrays of menu items. Also deletes the array of orders.
	*/
	~Order();
	/**
	* \brief This function gets the number of customers involved with the order.
 	* \return The number of customers.
	*/
	int getNumCustomers();
	/**
	* \brief This function sets the number of customers involved with the order.
 	* \param i The number of customers.
	*/
	void setNumCustomers(int i);
	/**
	* \brief This function gets the order array.
 	* \return The order array.
	*/
	int*** getOrderArray();
	Drink** getDrinks();
	void setDrinks(Drink** drinks);
	BurgundySauce** getSauce();
	void setSauce(BurgundySauce** sauce);
	Fries** getFries();
	void setFries(Fries** fries);
	Burger** getBurgers();
	void setBurgers(Burger** burgers);
	/**
	* \brief This function gets the table that created the order's ID.
 	* \return The table's ID.
	*/
	int getTableID();
	/**
	* \brief This function sets the table that created the orders's ID.
 	* \param tableID The table's ID.
	*/
	void setTableID(int tableID);
	/**
	* \brief This function will print what the customers have ordered.
	*/
	void printOrderArray();
	/**
	* \brief This function sets the orders for a customer in the order array.
 	* \param customerIndex The index of the customer in the table. Also the index where the customer's order will be saved in the order array.
  	* \param order The customer's order.
	*/
	void setCustomerOrder(int customerIndex, int* order);
	void setMemento(Memento*);
	Memento* makeMemento();
};

#endif
