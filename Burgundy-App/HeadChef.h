#ifndef HEADCHEF_H
#define HEADCHEF_H

class HeadChef : FloorStaff, KitchenStaff, Colleague {

public:
	bool observerState;

	void observeTable();
};

#endif
