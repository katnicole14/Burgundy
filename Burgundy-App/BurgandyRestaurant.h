#ifndef BURGANDYRESTAURANT_H
#define BURGANDYRESTAURANT_H
#include "Restaurant.h"
#include <vector>

class Table;
class BurgandyRestaurant : public Restaurant {
private:
	//bool eatingHallState;
	Table* table;



public:
	BurgandyRestaurant();
	//setTableList(vector);

/* 	bool getState();
	void setState(bool state); */

};

#endif
