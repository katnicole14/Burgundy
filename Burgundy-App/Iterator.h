#ifndef ITERATOR_H
#define ITERATOR_H

class Iterator {


public:
	Customer* first();

	Customer* next();

	bool isDone();

	Customer* currentItem();
};

#endif
