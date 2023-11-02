#ifndef BILLPAID_H
#define BILLPAID_H
#include "TableState.h"
class Table;

class BillPaid :public TableState {
  public :
  virtual void changeTo(Table *c);
  virtual std::string getState();
};

#endif
