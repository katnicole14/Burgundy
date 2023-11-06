
#include "Customer.h"

Customer::Customer(std::string customerName) {
    this->customerName = customerName;
    seatNumber= -1;
    totalAmount = 0;
}

Customer::~Customer() {

}

int Customer::getSeatNumber(){
	return seatNumber;
}

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
 void Customer:: setAmount(float total){
   totalAmount += total;
 }
float Customer :: getTotalAmount(){
return totalAmount;
}