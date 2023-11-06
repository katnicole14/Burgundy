#ifndef DRINK_H
#define DRINK_H
	/**
	 * \brief Interface defines the print function that can be altered by the types of drinks
	 */
class Drink {

public:
	/**
 	* \brief The constructor for the Drink class.
  	*/

	Drink();
	/**
	 * \brief prints
	 */
	virtual void print();
	/**
 	* \brief The destructor for the Drink class.
  	*/
	virtual ~Drink();
};

#endif
