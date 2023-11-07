#ifndef SPLITBLILL_H
#define SPLITBLILL_H
#include "Payment.h"
/**
* \class SplitBlill
* \brief This class is a strategy to pay the bill by splitting it
*/

class SplitBlill :public Payment {


public:
	void pay();
};

#endif
