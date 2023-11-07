#ifndef BILLPAID_H
#define BILLPAID_H
#include "TableState.h"
class Table;
/**
* \class BillPaid
* \brief This class represents the state of the table when the bill has been paid.
*/
class BillPaid :public TableState {
  public :
  /**
  * \brief This function changes the table to the Dirty state.
  * \param c A pointer to a table.
  */
  virtual void changeTo(Table *c);
  /**
  * \brief this function returns the string "BilledPaid".
    \return The string "BilledPaid".
  */
  virtual std::string getState();
};

#endif
