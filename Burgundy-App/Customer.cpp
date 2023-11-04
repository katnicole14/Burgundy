
#include "Customer.h"

Customer::Customer(std::string customerName) {
    this->customerName = customerName;
}

Customer::~Customer() {

}

void Customer::setOrder(int *order) {
    for (int i = 0; i < 8; i++) {
        this->order[i] = order[i];
    }
}

int *Customer::getOrder() {
    return order;
}

std::string Customer::getCustomerName() {
    return customerName;
}
