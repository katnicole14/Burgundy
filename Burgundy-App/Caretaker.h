#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"

class Memento;

class Caretaker{
private:
	Memento** storage;
	int size;

	bool isFull();
	bool isEmpty();

public:
	Caretaker();
	void storeMemento(Memento*);
	Memento* getMemento();
	
};

#endif