#include "SauceChef.h"
#include<string>
#include<iostream>

SauceChef::SauceChef(Chef* next) : Chef(next) {}

Chef* SauceChef::getNext()  {
    return Chef::getNext();
}

void SauceChef::setNext(Chef* next) {
    Chef::setNext(next);
}

void SauceChef::addOrderItem(Order* order) {
    std::cout << "Adding sauce" << std::endl;

    int numCustomers = order->getNumCustomers();
    BurgundySauce** sauce = new BurgundySauce*[numCustomers];

    for (int i = 0; i < numCustomers; i++) {
        // Check if sauce is wanted
        if (*order->getOrderArray()[i][6] == 1) {
            sauce[i] = new BurgundySauce();
        } else {
            sauce[i] = nullptr;
        }
    }

    std::cout << "All sauces have been added. Get the drinks." << std::endl;

    order->setSauce(sauce);
    Chef::addOrderItem(order);
}

BurgundySauce* SauceChef::getSauce() {
    // This method should return the BurgundySauce object, not nullptr.
    // Implement the logic to retrieve the sauce.
    // You might want to keep track of the sauces added to orders.
    return nullptr; // Replace with actual logic.
}
