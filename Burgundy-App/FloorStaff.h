#ifndef FLOORSTAFF_H
#define FLOORSTAFF_H

class FloorStaff {

protected:
	Restaurant* restaurant;
	bool observerState;

public:
	void observeTable();
};

#endif
