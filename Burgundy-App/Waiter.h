#ifndef WAITER_H
#define WAITER_H

class Waiter : FloorStaff, AbstractWaiter2 {

private:
	bool observerState;
	Colleague* colleagueList;
	int waiterID;

public:
	void observeTable();

	int getWaiterID();

	void setWaiterID(int waiterID);
};

#endif
