#ifndef MANAGER_H
#define MANAGER_H
#include <vector>
#include "FloorStaff.h"
#include "Table.h"

#include "AbstractBuilder.h"
/**
* \class Manager
* \brief The Manager will construct tables for customers to sit at and also observe customer satisfaction.
*/
class Manager : public FloorStaff {
private:
	/**
 	* \brief A reference of an AbstractBuilder object.
  	*/
    AbstractBuilder* builder;

public:
	/**
	* \brief The constructor for the Manager class.
 	* \param b A Builder object that the Manager will use to build tables.
 	*/
    Manager(AbstractBuilder* b) : builder(b) {}
	/**
	* \brief Calls the buildPart function on the builder reference object.
 	* \param numCustomers The number of customers entering the restaurant.
 	*/
    void construct(int numCustomers);
	/**
	 * \brief Observes the satisfaction of the tables taken in as input
	 * \param tables The list of tables to be observed.
	 */
    void observeSatisfaction(std::vector<Table*>& tables);
  

};


#endif
