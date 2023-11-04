#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer{
private:
	int seatNumber;
public:
	Customer();
	int getSeatNumber();
	void assignSeatNumber(int);
};

#endif