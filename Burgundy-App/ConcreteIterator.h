#ifndef CONCRETEITERATOR_H
#define CONCRETEITERATOR_H

class ConcreteIterator : Iterator {


public:
	Customer* first();

	Customer* next();

	bool isDone();

	Customer* currentItem();
};

#endif
