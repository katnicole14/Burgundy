#ifndef TABLE_H
#define TABLE_H

#include "Customer.h"
#include "Iterator.h"
#include "Colleague.h"
#include "Order.h"
#include <string>
class TableState;
class Iterator;
class Customer;
/**
* \class Table
* \brief The table where customers are seated at.
* This class is responsible for most of the project's functionality. It contains all the customers at the table, the customers' orders and their overall satisfaction.
*/
class Table : public Colleague {
private:
	/**
 	* \var Customer** customers
  	* \brief A list of customer objects that are seated at the table.
  	*/
	Customer** customers;
	int numSeated
	/**
 	* \var int tableID
  	* \brief A unique identifier for a table.
  	*/
    	int tableID;
	/**
	 * \var bool tableSatisfaction
	 * \brief This variable stores the table's satisfactoin.
	 */
	bool tableSatisfaction;
	TableState * state;
	/**
 	* \var int availableSeats
  	* \brief The total available seats at a table.
  	*/
	int availableSeats;
	/**
 	* \var int numCustomers
  	* \brief The total amount of customers at the table.
  	*/
	int numCustomers;
	/**
 	* \var Order* order
  	* \brief A reference to the Order class.
   	* This will store all the customers' orders and eventually their meals too.
  	*/
	Order* order;

public:
	/**
 	* \brief The constructor for the Table class.
  	* This will initialise a table's id to 0, set the customers list to null and set the state of the table to Occupied.
  	*/
	Table();
	/**
 	* \brief The desctructor for the Table class.
  	* This will delete the state of the table and delete the customers array.
  	*/
    	~Table();
    	
	void changeState();	
	
	//getters
	Table* getClone();
	/**
	 * \brief This function gets the total available seats.
	 * \return The total available seats.
	 */
    	int getAvailableSeats();
	/**
	 * \brief This function gets the customers array.
	 * \return The customers array.
	 */
    	Customer** getCustomers();
	/**
	 * \brief This function gets the table's satisfaction.
	 * \return The table's satisfaction.
	 */
    	bool getTableSatisfaction();
	int getSeatNumber();
	/**
	 * \brief This function gets the table's ID.
	 * \return The table's ID.
	 */
	int getTableID();
	std::string getState();
	/**
	 * \brief This function gets the number of customers at the table.
	 * \return The number of customers at the table.
	 */
	int getNumCustomers();
	/**
	 * \brief This function gets the table's order object.
	 * \return The table's order object.
	 */
	Order* getCustomerOrders();
	
	//verbs
	Iterator* createIterator();
	/**
	 * \brief This function sets the order object of the table.
  	 * \param order The order you want to set the table's order object to.
	 */
	void createOrder(Order* order);
	/**
	 * \brief This function creates the orders of all customers.
	 * Loops through all customers at the table while getting their order and setting the order member variable.
	 */
	void placeOrders();
	/**
	 * \brief This function allows the table to receive their meals from the waiter.
	 * \param order The order will contain the table's finished meals.
	 */
    	void receiveFinishedMeal(Order* order);
    	void receiveOrder(Order* order);
    	Order* sendOutFinishedMeal();
    	
    	//setters
	/**
	 * \brief This function sets the table's ID
	 * \param tableID The table's ID.
	 */
    	void setTableID(int tableID);
	/**
	 * \brief This function sets the number of customers at the table.
	 * \param numCustomers The number of customers at the table.
	 */
    	void setNumCustomers(int numCustomers);
	/**
	 * \brief This function sets the amount of seats available at the table.
	 * \param availableSeats The table's available seats.
	 */
    	void setAvailableSeats(int availableSeats);
	/**
	 * \brief This function sets the customers array
	 * \param customers The customers array.
	 */
    	void setCustomers(Customer** customers);
	/**
	 * \brief This function sets table's satisfaction.
  	 *
	 * \param tableSatisfaction The table's satisfaction.
	 */
    	void setTableSatisfaction(bool tableSatisfaction);
    	void setState(TableState * state);
};

#endif
