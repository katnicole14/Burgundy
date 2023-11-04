#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer{
private:
	int seatNumber;
	int bill;
public:
	Customer();
	int getSeatNumber();
	void assignSeatNumber(int);
	void setBill(int);
	int getBill();
};

#endif