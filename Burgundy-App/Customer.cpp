
#include "Customer.h"

Customer::Customer(std::string customerName) {
    this->customerName = customerName;
    seatNumber= -1;
}

Customer::~Customer() {

}

/// getSeatNumber() gets the position of the Customer object on the table. It returns an int representing their position.
int Customer::getSeatNumber(){
	return seatNumber;
}

/// assignSeatNumber() assgins a Customer object their position on the table. NOTE: this value has to be set manually, a customer does not know their position when created. Customer position defaults to -1.
void Customer::assignSeatNumber(int number){
	seatNumber = number;
}

void Customer::setOrder(int *order) {
    for (int i = 0; i < 8; i++) {
        this->order[i] = order[i];
    }
}

int* Customer::getOrder() {
    return order;
}

std::string Customer::getCustomerName() {
    return customerName;
}
