#include "Customer.h"

Customer::Customer(){
	seatNumber= -1;
}

int Customer::getSeatNumber(){
	return seatNumber;
}

void Customer::assignSeatNumber(int number){
	seatNumber = number;
}