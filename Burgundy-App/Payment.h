#ifndef PAYMENT_H
#define PAYMENT_H
/**
* \class Payment
* \brief This class is an interface for different strategies to pay the bill 
*/
class Payment {

public:
	virtual void pay() = 0;
};

#endif
