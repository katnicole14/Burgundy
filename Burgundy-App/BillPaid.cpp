
#include "BillPaid.h"
#include "Dirty.h"
void BillPaid:: changeTo(Table *c){
	c->setState(new Dirty());

}
std::string BillPaid:: getState(){
	return "BilledPaid";

}
