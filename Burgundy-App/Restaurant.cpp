#include "Restaurant.h"

Restaurant::Restaurant() {
}

void Restaurant::attachObserver(FloorStaff* staffMember) {
	this->observerList.push_back(staffMember);
}

void Restaurant::notify(std::vector<Table*>& tables) {
	for (FloorStaff* staff : this->observerList) {
        staff->observeSatisfaction(tables);
    }
}
