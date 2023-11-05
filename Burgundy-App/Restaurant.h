#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "FloorStaff.h"
#include <vector>
#include <iostream>
class Table;

class Restaurant {

protected:
	std::vector<FloorStaff*> observerList;
	std::vector<Table*> tables;

public:
	Restaurant();
	void attachObserver(FloorStaff* staffMember);
	void notify(std::vector<Table*>& tables);
};

#endif
