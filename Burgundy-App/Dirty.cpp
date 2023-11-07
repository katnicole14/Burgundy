#include "Dirty.h"
#include "Unoccupied.h"
void Dirty:: changeTo(Table *c){
	
	c->setState(new Unoccupied());

}
std::string Dirty:: getState(){
	return "dirty";

}