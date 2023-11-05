#include "Waiter.h"

Waiter::Waiter(std::string waiterName, Table *table, HeadChef *headChef) {
    this->waiterName = waiterName;
    this->table = table;
    this->headChef = headChef;
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
