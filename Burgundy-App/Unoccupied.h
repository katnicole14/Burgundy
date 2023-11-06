#ifndef UNOCCUPIED_H
#define UNOCCUPIED_H
#include "TableState.h"
class Table;
/**
* \class Unoccupied
* \brief This class represents the state of the table when it is unoccupied.
*/
class Unoccupied :public TableState {
 public :
  virtual void changeTo(Table *c);
  virtual std::string getState();
};

#endif
