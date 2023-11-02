#ifndef FLOORSTAFF_H
#define FLOORSTAFF_H
#include "Restaurant.h"
class FloorStaff {

protected:
	Restaurant* restaurant;
	bool observerState;

public:
	void observeTable();
};

#endif
