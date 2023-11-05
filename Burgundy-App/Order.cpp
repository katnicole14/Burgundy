#include "Order.h"

Order::Order(int numCustomers, int tableID) {
	this->numCustomers = numCustomers;
	this->tableID = tableID;

	this->orderArray = new int**[numCustomers];
		for (int i = 0; i < numCustomers; ++i) {
			this->orderArray[i] = new int*[8];

            for (int j = 0; j < 8; j++) {
                this->orderArray[i][j] = new int(0);
            }
		}
}

int Order::getTableID() {
	return this->tableID;
}

void Order::setTableID(int tableID) {
	this->tableID = tableID;
}

// The printOrderArray function should print every row of the orderArray
void Order::printOrderArray() {
    std::cout << "Printing orderArray:" << std::endl;
    for (int i = 0; i < numCustomers; i++) {
        for (int j = 0; j < 8; j++) {
            std::cout << this->orderArray[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Order::setCustomerOrder(int customerIndex, int* order) {
    for (int j = 0; j < 8; j++) {
        this->orderArray[customerIndex][j] = new int(order[j]);
    }
}


int ***Order::getOrderArray() {
    return orderArray;
}

Order::~Order() {
    for (int i = 0; i < numCustomers; ++i) {
        delete[] this->orderArray[i];
    }
    delete[] this->orderArray;
    std::cout << "Order for table " << this->getTableID() << " was destroyed" << std::endl;
}

void Order::setNumCustomers(int numCustomers) {
    this->numCustomers = numCustomers;
}

int Order::getNumCustomers() {
    return numCustomers;
}
