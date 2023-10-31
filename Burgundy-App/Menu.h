#ifndef MENU_H
#define MENU_H

class Menu {

private:
	vector<Ingredient*> order;

public:
	Memento* createMemento();

	void setMemento(Memento* memento);
};

#endif
