#ifndef OCCUPIED_H
#define OCCUPIED_H
#include "TableState.h"

class Table;
class Occupied : public TableState {

  public :
  virtual void changeTo(Table *c);
  virtual std::string getState();
};

#endif
