#ifndef BURGANDYRESTAURANT_H
#define BURGANDYRESTAURANT_H
#include "Restaurant.h"
#include <vector>

class Table;
class BurgandyRestaurant : public Restaurant {
private:
	Table* table;

public:
	BurgandyRestaurant();
};

#endif
