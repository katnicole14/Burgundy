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

    int** orders = order->getOrderArray();
    for (int i = 0; i < order->getNumCustomers(); ++i) {
        std::cout << "Customer " << i << ": ";
        for (int j = 0; j < 8; ++j) {
            std::cout << orders[i][j] << " ";
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
