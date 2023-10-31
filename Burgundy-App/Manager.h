#ifndef MANAGER_H
#define MANAGER_H

class Manager : FloorStaff {

private:
	bool observerState;
	AbstractBuilder* Builder;

public:
	void observeTable();

	void construct();
};

#endif
