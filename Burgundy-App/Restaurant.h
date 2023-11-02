#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "FloorStaff.h"
class Restaurant {

private:
	FloorStaff* observerList;

public:
	void attach(FloorStaff staffMember);

	void operation(FloorStaff staffMember);

	void notify();
};

#endif
