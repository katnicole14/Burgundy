#ifndef STATE_O
#define STATE_O

/**
* \class State
* \brief This class holds the attributes that the Order class contains
*/
class State{
private:
	int*** orderArray;
	int tableID;
	int numCustomers;
public:
	/**
	 * \brief This saves the snapshot taken by the Memento.
	 */
	State(int***, int, int);
	/**
	 * \brief
	 * The destructor for the State.
	 */
	~State();
	void printArrays();
	/**
	 * \brief Returns the saved snapshot of the oders the customers at the table made.
	 */
	int*** getOrderArray();
	/**
	 * Gets the ID of the table
	 */
	int getTableID();
	/**
	 * Gets the number of customers seated at the table
	 */
	int getNumCustomers();
};

#endif
