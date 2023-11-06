#ifndef DIRTY_H
#define DIRTY_H
#include "TableState.h"

/**
* \class Dirty
* \brief This class represents the state of the table when it is dirty.
*/
class Dirty : public TableState{

  public :
  /**
  * \brief This function changes the table to the Unoccupied state.
  * \param c A pointer to a table.
  */
  virtual void changeTo(Table *c);
  /**
  * \brief This function returns the string "Dirty".
  * \return The string "Dirty".
  */
  virtual std::string getState();
};

#endif
