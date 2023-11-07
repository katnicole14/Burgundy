#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "FloorStaff.h"
#include <vector>
#include <iostream>
class Table;
/**
* \class Restaurant
* \brief This abstract class holds a vector of staffmembers that observe the entire restaurant
*/
class Restaurant {

protected:
	/**
	 * \var std::vector<FloorStaff*> observerList
	 * \brief This is the list of staff members that observe the restaurant.
	 */
	std::vector<FloorStaff*> observerList;
	/**
	 * \var std::vector<Table*> tables
	 * \brief This variable stores the tables in the restaurant.
	 */
	std::vector<Table*> tables;

public:
	Restaurant();
	/**
	 * \brief Adds staffMember to observerList
	 * \param staffMember This variable gets added to the restuarant's observerList
	 */
	void attachObserver(FloorStaff* staffMember);

	/**
	 * \brief Calls the observeSatisfaction function for all attached observers
	 * \param tables The list of tables to be observed.
	 */
	void notify(std::vector<Table*>& tables);
};

#endif
