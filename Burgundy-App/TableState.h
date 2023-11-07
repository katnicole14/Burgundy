#ifndef TABLESTATE_H
#define TABLESTATE_H
#include <string>
#include "Table.h"
/**
* \class TableState
* \brief This abstract class will have children that represent the differnet states of the table
*/
class TableState
{

public:
virtual void changeTo(Table* t) = 0;//handles the change
   virtual std::string getState()= 0;
   virtual ~TableState();
};




#endif
