
#include "BillPaid.h"
#include "Dirty.h"
void Dirty:: changeTo(Table *c){
	c->setState(new Dirty());

}
std::string Dirty:: getState(){
	return "BilledPaid";

}
