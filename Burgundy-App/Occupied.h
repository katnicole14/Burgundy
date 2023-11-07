#ifndef OCCUPIED_H
#define OCCUPIED_H
#include "TableState.h"

class Table;
/**
* \class Occupied
* \brief This class indicates that the table is currently occupied
*/
class Occupied : public TableState {

  public :
  /**
  * \brief This function changes the state of the table to BillPaid.
  * \param c A pointer to a table.
  */
  virtual void changeTo(Table *c);
  /**
  * \brief This function returns the string "Occupied".
  * \return The string "Occupied".
  */
  virtual std::string getState();
};

#endif
