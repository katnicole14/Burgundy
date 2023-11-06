#ifndef TAB_H
#define TAB_H
#include "Payment.h"
/**
* \class Tab
* \brief This class is a strategy to pay the bill by opening a tab
*/ 
class Tab : Payment {


public:
	void pay();
};

#endif
