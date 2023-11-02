#include "Occupied.h"
#include "BillPaid.h"


void Occupied:: changeTo(Table *c){
	c->setState(new BillPaid());

}
std::string Occupied:: getState(){
	return "Occupied";

}