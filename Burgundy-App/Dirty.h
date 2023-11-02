#ifndef DIRTY_H
#define DIRTY_H
#include "TableState.h"


class Dirty : public TableState{

  public :
  virtual void changeTo(Table *c);
  virtual std::string getState();
};

#endif
