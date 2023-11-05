#include "HeadChef.h"

HeadChef::HeadChef() {

}

HeadChef::~HeadChef() {

}

void HeadChef::receiveOrder(Order *order) {
    this->setOrder(order);
    std::cout << "Head Chef has received the order: " << std::endl;

    std::cout << "Num customers: " << order->getNumCustomers() << std::endl;
    std::cout << "Table ID: " << order->getTableID() << std::endl;

    int ***orders = order->getOrderArray();
    for (int i = 0; i < order->getNumCustomers(); ++i) {
        std::cout << "Customer " << i << ": ";
        for (int j = 0; j < 8; ++j) {
            std::cout << *orders[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

Order* HeadChef::sendOutFinishedMeal() {
    return order;
}

void HeadChef::placeOrders() {
    // do nothing
}

void HeadChef::receiveFinishedMeal(Order* order) {
    // do nothing
}

void HeadChef::setOrder(Order *order) {
    this->order = order;
}

Order *HeadChef::getOrder() {
    return order;
}

void HeadChef::observeSatisfaction(std::vector<Table*>& tables) {
	int numTables = tables.size();

  this->observerState = true;
  // run for loop from 0 to vecSize
  for( int i = 0; i < numTables; i++)
  {
    if ( tables[i]->getTableSatisfaction() == false) {
        this->observerState = false; 
    }
  }

    if (this->observerState) {
        std::cout << "HeadChef Observer Result: Restaurant is satisfied" <<std::endl;}
        else {
        std::cout << "HeadChef Observer Result: Restaurant is not satisfied" <<std::endl;
    }
