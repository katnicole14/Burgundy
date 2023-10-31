#ifndef BURGANDYRESTAURANT_H
#define BURGANDYRESTAURANT_H

class BurgandyRestaurant : Restaurant {

private:
	Table* eatingHallState;
	Table* table;

public:
	Table* getState();

	void setState(Table* state);
};

#endif
