#ifndef CONCRETEBUILDER_H
#define ICONCRETEBUILDER_H

#include "Table.h"
#include "AbstractBuilder.h"
/**
* \class ConcreteBuilder
* \brief Inherits from AbstractBuilder. This class will implement the functionality of making tables for customers to sit at.
*/
class ConcreteBuilder : public AbstractBuilder{
private:
//    Table* table;
    /**
    * \brief Keeps track of the last table that was created's ID so new tables can be initialised with the proper ID.
    */
    int lastTableID;
    /**
    * \brief A vector containing all the tables that have been created.
    */
    std::vector<Table*> tables;


public:
    /**
    * \brief The constructor for the ConcreteBuilder class.
    * All it will do is set the last table's ID to 0. 
    */
    ConcreteBuilder();
    /**
    * \brief The Destructor for the ConcreteBuilder class.
    */
    ~ConcreteBuilder();
    /**
    * \brief Constructs tables for customers to sit at.
    * This method will create new table objects while setting all of its attributes using setters. It will also create Customer objects. Finally, it adds the newly created
    * table to the tables vector.
    * \param numCustomers The number of customers that has entered the restaurant.
    */
    void buildPart(int numCustomers);
    Table* getResult();
    /**
    * \brief Generates table IDs by incrementing the lastTableID variable.
    */ 
    int GenerateTableID();
    /**
    * \brief Returns a table with the specified ID.
    * \param tableID The ID of the table to be returned.
    * \return The table with the specified ID.
    */
    Table* getTableWithID(int tableID);
    /**
    * \brief Returns the vector containing the tables.
    * \return The vector list containing all the tables that have been created.
    */
    std::vector<Table*> getTables();
};


#endif
