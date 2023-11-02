#include "Unoccupied.h"

#include "Occupied.h"
void Unoccupied:: changeTo(Table *c){
	c->setState(new Occupied());

}
std::string Unoccupied:: getState(){
	return "unoccupied";

}
