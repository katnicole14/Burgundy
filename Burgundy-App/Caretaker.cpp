#include "Caretaker.h"
#include <stdexcept>


using namespace std;

Caretaker::Caretaker(){
	// SIZE = 5;
	storage = new Memento*[SIZE];

	for(int i = 0; i < SIZE; i++){
		storage[i] = nullptr;
	}
}

Caretaker::~Caretaker(){
	for(int i = 0; i < SIZE; i++){
		if(storage[i] != nullptr)
			delete storage[i];
	}
	delete [] storage;
}

void Caretaker::storeMemento(Memento* memento){
	if(isFull()){
		for(int i = 0; i < SIZE - 1; i++){
			storage[i] = storage[i + 1];
		}
		storage[SIZE - 1] = memento;			
	}
	else{
		for(int i = 0; i < SIZE; i++){
			if(storage[i] == nullptr){
				storage[i] = memento;
				break;
			}
		}		
	}

	return;
}

Memento* Caretaker::getMemento(){
	Memento* tmp = nullptr;
	if(isFull()){
		tmp = storage[SIZE - 1];
	}
	else if(isEmpty()){
		throw new runtime_error("No memento available");
	}
	else{
		for(int i = 0; i < SIZE; i++){
			if(storage[i] != nullptr){
				tmp = storage[i];
				break;
			}
		}
	}
	return tmp;
}

bool Caretaker::isFull(){
	return !(storage[SIZE - 1] == nullptr);
}

bool Caretaker::isEmpty(){
	return storage[0] == nullptr;
}
