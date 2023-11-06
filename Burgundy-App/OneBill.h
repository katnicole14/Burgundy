#ifndef ONEBILL_H
#define ONEBILL_H
#include "Payment.h"
/**
* \class OneBill
* \brief This class is a strategy to pay the bill in full
*/
class OneBill : Payment {
public:
	void pay();
};

#endif
