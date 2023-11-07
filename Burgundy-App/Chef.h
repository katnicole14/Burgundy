#ifndef CHEF_H
#define CHEF_H
#include"KitchenStaff.h"
#include"Order.h"

/**
 * \brief The Chef is a handler class declares a common interface for all concrete handlers.
 */
class Chef :public  KitchenStaff {

private:
	/**
	 * \brief the next handler
	 */
	Chef* next;
	/**
	 * \brief the item to be handled
	 */
	Order* item;

public:
	Chef(Chef* );
	Chef* getNext();
 /**
     * \brief Set the next handler in the chain.
     * \param next The next handler to set.
     */
	void setNext(Chef* next);
  /**
     * \brief Handle a request.
     * \param item The request to handle.
     */
	virtual void addOrderItem(Order* item);
/**
	 * \brief destructor
	 */
	virtual~Chef();
};

#endif
