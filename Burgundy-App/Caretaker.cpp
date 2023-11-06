#include "Caretaker.h"
#include <stdexcept>


using namespace std;

/*! \brief Caretaker object.
 * 		This object stores up to 5 Memento objects.
 * 
 * The objet has an array that holds 5 Mementos, once the array is full, the oldest Memento is deleted. 
 * The Caretaker object throws a runtime_exception when an attempt is made to access a Memento, when no Mementos have been stored.
 */

Caretaker::Caretaker(){
	size = 5;
	storage = new Memento*[size];

	for(int i = 0; i < size; i++){
		storage[i] = nullptr;
	}
}

/// This stores the Memento in to the array. 
void Caretaker::storeMemento(Memento* memento){
	if(isFull()){
		for(int i = 0; i < size - 1; i++){
			storage[i] = storage[i + 1];
		}
		storage[size - 1] = memento;			
	}
	else{
		for(int i = 0; i < size; i++){
			if(storage[i] == nullptr){
				storage[i] = memento;
				break;
			}
		}		
	}

	return;
}

/// This gets the last Memento stored. If no Mementos are in the array, the function throws a runtime_exception. It is important to call this function in a try/catch block.
Memento* Caretaker::getMemento(){
	Memento* tmp = nullptr;
	if(isFull()){
		tmp = storage[size - 1];
	}
	else if(isEmpty()){
		throw new runtime_error("No memento available");
	}
	else{
		for(int i = 0; i < size; i++){
			if(storage[i] != nullptr){
				tmp = storage[i];
				break;
			}
		}
	}
	return tmp;
}

bool Caretaker::isFull(){
	return !(storage[size - 1] == nullptr);
}

bool Caretaker::isEmpty(){
	return storage[0] == nullptr;
}
