#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"

/**
 *  \brief Caretaker object.
 * 		This object stores up to 5 Memento objects.
 * 
 * The objet has an array that holds 5 Mementos, once the array is full, the oldest Memento is deleted. 
 * The Caretaker object throws a runtime_exception when an attempt is made to access a Memento, when no Mementos have been stored.
 */

class Memento;

class Caretaker{
private:
	/**
	 * \brief The array of Mementos
	 */
	Memento** storage;
	/**
	 * \brief The amount of Mementos to be held
	 */
	const int SIZE = 5;
	/**
	 * \brief A boolean that stores if the array of Mementos is full or not
	 */
	bool isFull();
	/**
	 * \brief A boolean that stores if the array of Mementos is empty or not
	 */
	bool isEmpty();

public:
	/***
	 * Constructor of the caretaker
	 */
	Caretaker();
	
	~Caretaker();
	/**
	 * \brief This stores the Memento in to the array. 
	 */
	void storeMemento(Memento*);
	/**
	 * \brief This gets the last Memento stored. 
	 * If no Mementos are in the array, the function throws a runtime_exception. 
	 * It is important to call this function in a try/catch block.
	 */
	Memento* getMemento();
	
};

#endif