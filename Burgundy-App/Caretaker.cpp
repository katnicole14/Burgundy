#include "Caretaker.h"
#include <stdexcept>


using namespace std;

Caretaker::Caretaker(){
	size = 5;
	storage = new Memento*[size];

	for(int i = 0; i < size; i++){
		storage[i] = nullptr;
	}
}

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