#ifndef FLOORSTAFF_H
#define FLOORSTAFF_H

#include <iostream>
#include <vector>

class Restaurant;
class Table;

class FloorStaff {
protected:
	Restaurant* restaurant;
	bool observerState;

public:
	FloorStaff();
	virtual void observeSatisfaction(std::vector<Table*>& tables)=0;
};


#endif
