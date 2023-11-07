#ifndef BURGANDYRESTAURANT_H
#define BURGANDYRESTAURANT_H
#include "Restaurant.h"
#include <vector>

class Table;
/**
* \class BurgandyRestaurant
* \brief This class only holds a pointer to a table object.
*/
class BurgandyRestaurant : public Restaurant {
private:
	Table* table;

public:
	/**
	* \brief The constructor for the BurgandyRestaurant class.
	*/
	BurgandyRestaurant();
};

#endif
