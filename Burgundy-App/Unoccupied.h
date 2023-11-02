#ifndef UNOCCUPIED_H
#define UNOCCUPIED_H
#include "TableState.h"
class Table;
class Unoccupied :public TableState {
 public :
  virtual void changeTo(Table *c);
  virtual std::string getState();
};

#endif
