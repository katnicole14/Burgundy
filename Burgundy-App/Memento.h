#ifndef MEMENTO_H
#define MEMENTO_H

class Memento {

private:
	vector<Ingredient*> order;

	vector<Ingredient*> getState();

	void setState(vector<Ingredient*> menuState);
};

#endif
