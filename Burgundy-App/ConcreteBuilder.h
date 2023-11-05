#ifndef CONCRETEBUILDER_H
#define ICONCRETEBUILDER_H

#include "Table.h"
#include "AbstractBuilder.h"

class ConcreteBuilder : public AbstractBuilder{
private:
//    Table* table;
    int lastTableID;

    std::vector<Table*> tables;


public:
    ConcreteBuilder();
    ~ConcreteBuilder();
    void buildPart(int numCustomers);
    Table* getResult();
    int GenerateTableID();
    Table* getTableWithID(int tableID);
    std::vector<Table*> getTables();
};


#endif
