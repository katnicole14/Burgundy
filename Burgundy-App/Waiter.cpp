#include "Waiter.h"

Waiter::Waiter(std::string waiterName, Table *table, HeadChef *headChef) {
    this->waiterName = waiterName;
    this->table = table;
    this->headChef = headChef;
}
   float Waiter :: getTip(){
         return tip;
     }

    void Waiter :: setTip(int value){
        float val = value;
        float bill = table->getBill();
        float perc = 100;

         tip = (val/perc) * bill;
     }
Waiter::~Waiter() {

}

void Waiter::setWaiterName(std::string waiterName) {
    this->waiterName = waiterName;
}

std::string Waiter::getWaiterName() {
    return waiterName;
}

void Waiter::setTable(Table *table) {
    this->table = table;
}

void Waiter::setHeadChef(HeadChef *headChef) {
    this->headChef = headChef;
}

void Waiter::deliverOrder() {
    Order* order = table->getCustomerOrders();
    headChef->receiveOrder(order);
}

void Waiter::deliverMeal() {
    Order* order = headChef->sendOutFinishedMeal();
    table->receiveFinishedMeal(order);
}

void Waiter::observeSatisfaction(std::vector<Table*>& tables) {

	this->observerState = this->table->getTableSatisfaction();
    if (observerState) {
        std::cout << "Waiter Observer Result : Table " << this->table->getTableID() << " is satisfied" <<std::endl;
    }
    else 
        std::cout << "Waiter Observer Result : Table " << this->table->getTableID() << " is not satisfied" <<std::endl;
}
