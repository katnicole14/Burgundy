#ifndef ABSTRACTBUILDER_H
#define ABSTRACTBUILDER_H

/**
* \class AbstractBuilder
* \brief An abstract class that defines the method that the ConcreteBuilder uses.
*/
class AbstractBuilder {
public:
     /**
     * \brief Definition of the buildPart function that the ConcreteBuilder will use to make tables.
     *
     * \param numCustomers The number of customers that entered the restaurant.
     */
     virtual void buildPart(int numCustomers) = 0;
};


#endif
