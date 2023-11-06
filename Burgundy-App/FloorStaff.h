#ifndef FLOORSTAFF_H
#define FLOORSTAFF_H

#include <iostream>
#include <vector>

class Restaurant;
class Table;
/**
* \class FloorStaff
* \brief An abstract class. This class defines the observeSatisfaction function that child classes have to implement.
*/
class FloorStaff {
protected:
	/**
	 * \var Restaurant* restaurant
	 * \brief This is a pointer to the restaurant being observed.
	 */
	Restaurant* restaurant;
	/**
	 * \var bool observerState
	 * \brief This is the state of the restaurant.
	 */
	bool observerState;

public:
	/**
 	* \brief The constructor for the FloorStaff class.
  	*/
	FloorStaff();
	/**
	 * \brief Observes the satisfaction of the tables taken in as input
	 * \param tables The list of tables to be observed.
	 */
	virtual void observeSatisfaction(std::vector<Table*>& tables)=0;
};


#endif
